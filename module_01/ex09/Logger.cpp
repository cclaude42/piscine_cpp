/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 16:00:22 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/16 17:10:17 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

void		Logger::logToConsole(std::string const & log)
{
	std::cout << log << std::endl;
}

void		Logger::logToFile(std::string const & log)
{
	std::ofstream	file;

	file.open(_filename, std::ofstream::app);
	if (file.good())
		file << log << std::endl;
	file.close();
}

std::string	Logger::makeLogEntry(std::string const & message)
{
	std::string	log;
	std::string	number;
	time_t		t;
	struct tm	*tm;

	t = time(0);
	tm = localtime(&t);
	number = std::to_string(tm->tm_mday);
	log = "[" + std::string(2 - number.length(), '0') + number;
	number = std::to_string(tm->tm_mon);
	log += "/" + std::string(2 - number.length(), '0') + number;
	log += "/" + std::to_string(tm->tm_year + 1900);
	number = std::to_string(tm->tm_hour);
	log += " " + std::string(2 - number.length(), '0') + number;
	number = std::to_string(tm->tm_min);
	log += ":" + std::string(2 - number.length(), '0') + number;
	number = std::to_string(tm->tm_sec);
	log += ":" + std::string(2 - number.length(), '0') + number;
	log += "] " + message;
	return (log);
}

typedef void (Logger::*log_dest) (std::string const & log);
typedef std::string (Logger::*log_entry) (std::string const & log);

void		Logger::log(std::string const & dest, std::string const & message)
{
	std::string	destinations [2] = {"console", "file"};
	std::string	log;
	log_dest	dests [2] = {&Logger::logToConsole, &Logger::logToFile};
	log_entry	entry = &Logger::makeLogEntry;
	int			i;

	log = (this->*entry) (message);
	for (i = 0; i < 2; i++)
	{
		if (dest == destinations[i])
			(this->*dests[i]) (log);
	}
}

Logger::Logger(std::string filename)
{
	_filename = filename;
}

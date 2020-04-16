/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 15:52:17 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/16 16:53:31 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <string>

class Logger {
public:
	void		log(std::string const & dest, std::string const & message);
	Logger(std::string filename);
private:
	void		logToConsole(std::string const & log);
	void		logToFile(std::string const & log);
	std::string	makeLogEntry(std::string const & message);

	std::string	_filename;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 16:35:28 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/16 17:19:39 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <unistd.h>

int	main(void)
{
	Logger	l("file.log");

	l.log("console", "Initializing...");
	usleep(1500000);
	l.log("console", "Running...");
	usleep(2000000);

	l.log("file", "In file...");
	usleep(1500000);
	l.log("file", "Writing...");
	usleep(2000000);
	l.log("file", "Closing file...");
	usleep(1500000);

	l.log("console", "Exiting...");
	return (0);
}

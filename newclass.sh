#!/bin/bash

if [ -z "$1" ]
then
	echo "Please supply ClassName !"
	exit
fi

if [ -z "$2" ]
then
	usr=$(whoami)
else
	usr=$2
fi

touch $1.hpp
printf "/* ************************************************************************** */\n" >> $1.hpp
printf "/*                                                                            */\n" >> $1.hpp
printf "/*                                                        :::      ::::::::   */\n" >> $1.hpp
printf "/*   %-50.50s :+:      :+:    :+:   */\n" "$1.hpp">> $1.hpp
printf "/*                                                    +:+ +:+         +:+     */\n" >> $1.hpp
printf "/*   By: %-42.42s +#+  +:+       +#+        */\n" "$usr <$usr@student.42.fr>" >> $1.hpp
printf "/*                                                +#+#+#+#+#+   +#+           */\n" >> $1.hpp
printf "/*   Created: %-19.19s by %-15.15s   #+#    #+#             */\n" "$(date '+%Y/%m/%d %H:%M:%S')" "$usr" >> $1.hpp
printf "/*   Updated: %-19.19s by %-15.15s  ###   ########.fr       */\n" "$(date '+%Y/%m/%d %H:%M:%S')" "$usr" >> $1.hpp
printf "/*                                                                            */\n" >> $1.hpp
printf "/* ************************************************************************** */\n" >> $1.hpp
printf "\n" >> $1.hpp
printf "#ifndef ${1^^}_HPP\n" >> $1.hpp
printf "# define ${1^^}_HPP\n" >> $1.hpp
printf "\n" >> $1.hpp
printf "# include <iostream>\n" >> $1.hpp
printf "\n" >> $1.hpp
printf "class $1 {\n" >> $1.hpp
printf "public:\n" >> $1.hpp
printf "	$1(void);\n" >> $1.hpp
printf "	$1(const $1 & src);\n" >> $1.hpp
printf "	~$1(void);\n" >> $1.hpp
printf "\n" >> $1.hpp
printf "	$1 & operator=(const $1 & src);\n" >> $1.hpp
printf "\n" >> $1.hpp
printf "	\n" >> $1.hpp
printf "private:\n" >> $1.hpp
printf "	\n" >> $1.hpp
printf "};\n" >> $1.hpp
printf "\n" >> $1.hpp
printf "#endif\n" >> $1.hpp

touch $1.cpp
printf "/* ************************************************************************** */\n" >> $1.cpp
printf "/*                                                                            */\n" >> $1.cpp
printf "/*                                                        :::      ::::::::   */\n" >> $1.cpp
printf "/*   %-50.50s :+:      :+:    :+:   */\n" "$1.cpp">> $1.cpp
printf "/*                                                    +:+ +:+         +:+     */\n" >> $1.cpp
printf "/*   By: %-42.42s +#+  +:+       +#+        */\n" "$usr <$usr@student.42.fr>" >> $1.cpp
printf "/*                                                +#+#+#+#+#+   +#+           */\n" >> $1.cpp
printf "/*   Created: %-19.19s by %-15.15s   #+#    #+#             */\n" "$(date '+%Y/%m/%d %H:%M:%S')" "$usr" >> $1.cpp
printf "/*   Updated: %-19.19s by %-15.15s  ###   ########.fr       */\n" "$(date '+%Y/%m/%d %H:%M:%S')" "$usr" >> $1.cpp
printf "/*                                                                            */\n" >> $1.cpp
printf "/* ************************************************************************** */\n" >> $1.cpp
printf "\n" >> $1.cpp
printf "#include \"$1.hpp\"\n" >> $1.cpp
printf "\n" >> $1.cpp
printf "// Member functions\n" >> $1.cpp
printf "\n" >> $1.cpp
printf "\n" >> $1.cpp
printf "\n" >> $1.cpp
printf "// Overloaders\n" >> $1.cpp
printf "\n" >> $1.cpp
printf "$1 & $1::operator=(const $1 & src)\n" >> $1.cpp
printf "{\n" >> $1.cpp
printf "	\n" >> $1.cpp
printf "}\n" >> $1.cpp
printf "\n" >> $1.cpp
printf "// Constructors and destructors\n" >> $1.cpp
printf "\n" >> $1.cpp
printf "$1::$1(void)\n" >> $1.cpp
printf "{\n" >> $1.cpp
printf "	\n" >> $1.cpp
printf "}\n" >> $1.cpp
printf "\n" >> $1.cpp
printf "$1::$1(const $1 & src)\n" >> $1.cpp
printf "{\n" >> $1.cpp
printf "	\n" >> $1.cpp
printf "}\n" >> $1.cpp
printf "\n" >> $1.cpp
printf "$1::~$1(void)\n" >> $1.cpp
printf "{\n" >> $1.cpp
printf "	\n" >> $1.cpp
printf "}\n" >> $1.cpp

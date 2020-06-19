/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:35:59 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/19 17:51:30 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat & src);
	~Bureaucrat(void);

	Bureaucrat & operator=(const Bureaucrat & src);

	const std::string	getName() const;
	int					getGrade() const;
	void				incGrade();
	void				decGrade();

private:
	Bureaucrat(void);

	std::string	_name;
	int			_grade;
};

std::ostream & operator<<(std::ostream & os, const Bureaucrat & src);

#endif

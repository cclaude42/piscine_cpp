/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:35:59 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/23 11:54:35 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Bureaucrat {
public:

	class GradeTooHighException : public std::runtime_error
	{
	public:
		GradeTooHighException(std::string msg) : std::runtime_error(msg) {}
	};

	class GradeTooLowException : public std::runtime_error
	{
	public:
		GradeTooLowException(std::string msg) : std::runtime_error(msg) {}
	};

	Bureaucrat(void);
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat & src);
	~Bureaucrat(void);

	Bureaucrat & operator=(const Bureaucrat & src);

	const std::string	getName() const;
	int					getGrade() const;
	void				incGrade();
	void				decGrade();
	void				signForm(Form & form);
	void				executeForm(Form & form);

private:

	std::string	_name;
	int			_grade;
};

std::ostream & operator<<(std::ostream & os, const Bureaucrat & src);

#endif

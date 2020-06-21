/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 15:21:07 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/21 15:21:07 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form {
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

	Form(std::string name, int sign, int exec);
	Form(const Form & src);
	~Form(void);

	Form & operator=(const Form & src);

	const std::string	getName() const;
	bool				getStatus() const;
	int					getSignGrade() const;
	int					getExecGrade() const;
	void				beSigned(const Bureaucrat & signee);

private:
	Form(void);

	const std::string	_name;
	const int			_signGrade;
	const int			_execGrade;
	bool				_signed;
};

std::ostream & operator<<(std::ostream & os, const Form & src);

#endif

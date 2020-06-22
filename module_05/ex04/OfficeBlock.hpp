/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 17:21:57 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/22 18:31:30 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

class OfficeBlock {
public:
	OfficeBlock(void);
	OfficeBlock(Intern * intern, Bureaucrat * signee, Bureaucrat * executor);
	~OfficeBlock(void);

	void	setIntern(Intern * intern);
	void	setSignee(Bureaucrat * signee);
	void	setExecutor(Bureaucrat * executor);
	void	doBureaucracy(std::string form, std::string target);

private:
	Intern *		_intern;
	Bureaucrat *	_signee;
	Bureaucrat *	_executor;
};

#endif

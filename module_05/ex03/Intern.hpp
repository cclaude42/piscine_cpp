/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:52:50 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/22 17:01:27 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
public:
	Intern(void);
	Intern(const Intern & src);
	~Intern(void);

	Intern & operator=(const Intern & src);

	Form *	makeForm(std::string form, std::string target);

private:
	Form *	makeShrub(std::string target);
	Form *	makeRobot(std::string target);
	Form *	makePres(std::string target);

};

#endif

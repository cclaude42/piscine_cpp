/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 18:50:14 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/23 11:45:10 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"
# include "OfficeBlock.hpp"

class CentralBureaucracy {
public:
	CentralBureaucracy(void);
	CentralBureaucracy(const CentralBureaucracy & src);
	~CentralBureaucracy(void);

	CentralBureaucracy & operator=(const CentralBureaucracy & src);

	void	feedBureaucrat(Bureaucrat & bureaucrat);
	void	queueUp(std::string target);
	void	doBureaucracy(void);

private:
	std::string		_targets[20];
	OfficeBlock		_offices[20];
};

#endif

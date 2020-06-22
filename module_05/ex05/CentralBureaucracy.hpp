/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 18:50:14 by cclaude           #+#    #+#             */
/*   Updated: 2020/06/22 18:50:14 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

# include <iostream>

class CentralBureaucracy {
public:
	CentralBureaucracy(void);
	CentralBureaucracy(const CentralBureaucracy & src);
	~CentralBureaucracy(void);

	CentralBureaucracy & operator=(const CentralBureaucracy & src);

	
private:
	
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeslin <fgeslin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:00:23 by fgeslin           #+#    #+#             */
/*   Updated: 2023/04/19 15:57:32 by fgeslin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
private:
	std::string	_levels_str[4];
	void		(Harl::*_levels_fun[4])(void) const;

	void _debug(void) const;
	void _info(void) const;
	void _warning(void) const;
	void _error(void) const;
	
public:
	Harl();
	~Harl();
	void complain(std::string level) const;
	
};

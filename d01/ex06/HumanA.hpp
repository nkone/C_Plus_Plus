/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:05:34 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/23 16:17:40 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
	private:
		std::string _name;
		Weapon &_weapon;
	public:
		HumanA(std::string, Weapon&);
		~HumanA();
		void attack(void);	
};

#endif

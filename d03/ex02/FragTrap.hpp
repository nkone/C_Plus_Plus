/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 19:06:13 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/25 21:39:22 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>
#include <iostream>
#include <random>
#include "ClapTrap.hpp"

class FragTrap : protected ClapTrap{
	public:

		// Canonical declarations:
		FragTrap();
		FragTrap(const std::string&);
		~FragTrap();
		FragTrap(const FragTrap&);
		FragTrap& operator = (const FragTrap&); 
		
		// Abilities
		void rangedAttack(const std::string&) const;
		void meleeAttack(const std::string&) const;
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);

		//EXE ability
		void vaulthunter_dot_exe(const std::string&); 
};

static const std::string gExeAttack[5] = {
	"Funzerker. I'm a sexy dinosaur! Rawr!",
	"Mechomagician. To the skies, mini-trap!",
	"Medbot. Nurse Clap is here!",
	"Senseless Sacrifice. For you...I commit...seddoku...",
	"Laser Inferno. Laaasers!"
};

#endif

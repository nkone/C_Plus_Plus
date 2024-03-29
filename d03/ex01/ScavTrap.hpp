/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:58:54 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/24 23:36:15 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <string>
#include <iostream>
#include <random>

class ScavTrap {
	private:
		unsigned int		_hp;
		unsigned int		_maxHp;
		unsigned int		_ep;
		unsigned int		_maxEp;
		unsigned int		_lvl;
		std::string			_name;
		unsigned int		_meleeDmg;
		unsigned int		_rangedDmg;
		unsigned int		_armorDmgReduct;
	public:

		// Canonical declarations:
		ScavTrap();
		ScavTrap(const std::string &);
		~ScavTrap();
		ScavTrap(const ScavTrap&);
		ScavTrap& operator = (const ScavTrap&); 
		
		// Abilities
		void rangedAttack(const std::string&) const;
		void meleeAttack(const std::string&) const;
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);

		//Special ability
		void challengeNewComer(const std::string&) const;
};

static const std::string gChallengeBox[5] = {
	"a rock, paper, scissor game.",
	"a friendly but not that friendly duel to the death.",
	"a hide and seek game on the moon.",
	"knock off an apple with a grenade game.",
	"do a backflip."
};

#endif

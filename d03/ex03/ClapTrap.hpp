/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 14:29:27 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/25 22:34:30 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>
#include <iomanip>

// Define parent class ClapTrap

class ClapTrap {
	protected:
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
		// Canon declarations
		ClapTrap();
		ClapTrap(const std::string&);
		~ClapTrap();
		ClapTrap(const ClapTrap&);
		ClapTrap& operator=(const ClapTrap&);	
		
		
		// Member functions
		void rangedAttack(const std::string&) const;
		void meleeAttack(const std::string&) const;
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);

		//Get functions
		
		unsigned int	getHp(void) const;
		unsigned int	getMaxHp(void) const;
		unsigned int	getEp(void) const;
		unsigned int	getMaxEp(void) const;
		unsigned int	getLvl(void) const;
		std::string		getName(void) const;
};

#endif


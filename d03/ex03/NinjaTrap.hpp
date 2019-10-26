/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:50:08 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/25 22:19:28 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {
	public:
		NinjaTrap();
		NinjaTrap(const std::string&);
		~NinjaTrap();
		NinjaTrap(const NinjaTrap&);
		NinjaTrap& operator=(const NinjaTrap&);	
	
		// Normal behaviors;
		void rangedAttack(const std::string&) const;
		void meleeAttack(const std::string&) const;
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);

		// Specials
		void ninjaShoebox(const ClapTrap&);
		void ninjaShoebox(const ScavTrap&);
		void ninjaShoebox(const FragTrap&);
		void ninjaShoebox(const NinjaTrap&);
};
#endif

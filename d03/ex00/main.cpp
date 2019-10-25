/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:00:30 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/24 20:42:29 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	FragTrap ClapTrap = FragTrap("ClapTrap");
	FragTrap Clone;	

	Clone = ClapTrap;
	ClapTrap.meleeAttack("slime");
	ClapTrap.rangedAttack("wild mutt");
	ClapTrap.takeDamage(10U);
	ClapTrap.beRepaired(5U);
	ClapTrap.beRepaired(5U);
	ClapTrap.beRepaired(5U);
	ClapTrap.takeDamage(50U);
	ClapTrap.vaulthunter_dot_exe("Spiderant");
	ClapTrap.vaulthunter_dot_exe("Spiderant");
	ClapTrap.vaulthunter_dot_exe("Spiderant");
	ClapTrap.vaulthunter_dot_exe("Spiderant");
	ClapTrap.vaulthunter_dot_exe("Spiderant");
	return (0);
}

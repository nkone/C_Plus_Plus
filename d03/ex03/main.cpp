/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:00:30 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/25 22:26:04 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main(void) {
	FragTrap fragTrap = FragTrap("FragTrap");
	FragTrap clone;	
	FragTrap cloneImage = FragTrap("FragTrap Clone");
	clone = cloneImage;

	fragTrap.meleeAttack("slime");
	fragTrap.rangedAttack("wild mutt");
	fragTrap.takeDamage(10U);
	fragTrap.beRepaired(5U);
	fragTrap.beRepaired(5U);
	fragTrap.beRepaired(5U);
	fragTrap.takeDamage(50U);
	fragTrap.vaulthunter_dot_exe("Spiderant");
	fragTrap.vaulthunter_dot_exe("Spiderant");
	fragTrap.vaulthunter_dot_exe("Spiderant");
	fragTrap.vaulthunter_dot_exe("Spiderant");
	fragTrap.vaulthunter_dot_exe("Spiderant");
	cloneImage.vaulthunter_dot_exe("Guardian Spectre");
	cloneImage.vaulthunter_dot_exe("Guardian Spectre");
	cloneImage.vaulthunter_dot_exe("Guardian Spectre");
	cloneImage.vaulthunter_dot_exe("Guardian Spectre");
	cloneImage.vaulthunter_dot_exe("Guardian Spectre");
	clone.vaulthunter_dot_exe("Badass Guardian");
	clone.vaulthunter_dot_exe("Badass Guardian");
	clone.vaulthunter_dot_exe("Badass Guardian");
	clone.vaulthunter_dot_exe("Badass Guardian");
	clone.vaulthunter_dot_exe("Badass Guardian");
	clone.takeDamage(10U);

	ScavTrap scav = ScavTrap("scavTrap");

	scav.meleeAttack("skag");
	scav.rangedAttack("spectre");
	scav.takeDamage(10U);
	scav.beRepaired(5U);
	scav.beRepaired(5U);
	scav.beRepaired(5U);
	scav.takeDamage(50U);
	scav.takeDamage(50U);
	scav.beRepaired(5U);
	scav.beRepaired(5U);
	scav.beRepaired(59U);
	scav.takeDamage(50U);
	scav.challengeNewComer("a wild vault hunter, Jack");
	scav.challengeNewComer("a wild vault hunter, Jack");
	scav.challengeNewComer("a wild vault hunter, Jack");
	scav.challengeNewComer("a wild vault hunter, Jack");

	ClapTrap clap = ClapTrap("Motherload");
	NinjaTrap ninja = NinjaTrap("NinNin");
	
	ninja.rangedAttack("Trash feeder");
	ninja.meleeAttack("Trashfeeder");
	ninja.ninjaShoebox(clap);	
	ninja.ninjaShoebox(ninja);	
	ninja.ninjaShoebox(scav);	
	ninja.ninjaShoebox(fragTrap);	
	return (0);
}

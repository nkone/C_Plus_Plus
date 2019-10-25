/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:00:30 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/25 16:05:25 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	FragTrap clapTrap = FragTrap("clapTrap");
	FragTrap clone;	
	FragTrap cloneImage = FragTrap("clone");
	clone = cloneImage;

	clapTrap.meleeAttack("slime");
	clapTrap.rangedAttack("wild mutt");
	clapTrap.takeDamage(10U);
	clapTrap.beRepaired(5U);
	clapTrap.beRepaired(5U);
	clapTrap.beRepaired(5U);
	clapTrap.takeDamage(50U);
	clapTrap.vaulthunter_dot_exe("Spiderant");
	clapTrap.vaulthunter_dot_exe("Spiderant");
	clapTrap.vaulthunter_dot_exe("Spiderant");
	clapTrap.vaulthunter_dot_exe("Spiderant");
	clapTrap.vaulthunter_dot_exe("Spiderant");
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

	ScavTrap scav = ScavTrap("scavTrap");

	scav.meleeAttack("skag");
	scav.rangedAttack("spectre");
	scav.takeDamage(10U);
	scav.beRepaired(5U);
	scav.beRepaired(5U);
	scav.beRepaired(5U);
	scav.takeDamage(50U);
	scav.takeDamage(50U);
	scav.takeDamage(50U);
	scav.challengeNewComer("a wild vault hunter, Jack");
	scav.challengeNewComer("a wild vault hunter, Jack");
	scav.challengeNewComer("a wild vault hunter, Jack");
	scav.challengeNewComer("a wild vault hunter, Jack");

	return (0);
}

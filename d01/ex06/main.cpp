/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:13:17 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/22 21:39:32 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
	// Since Human A is requires a reference weapon, Human A will always have to
	// have a weapon, as reference cannot reference to null since it's not a pointer
	{
		Weapon club = Weapon("spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("legendary club");
		bob.attack();
	}
	// Human B can be initialize without a weapon since the weapon is a pointer.
	// If Weapon class object in Human B is a pointer, we can set it at later times
	// unlike referencing.
	// However, it will segfault if no weapon is set for jimmy in this case.
	{
		Weapon club = Weapon("spiked club");
		HumanB jimmy("Jimmy");
		jimmy.setWeapon(club);
		jimmy.attack();
		club.setType("trash tier club");
		jimmy.attack();
	}
	return (0);
}

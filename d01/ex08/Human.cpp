/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:55:38 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/23 14:50:33 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

void Human::meleeAttack(std::string const& target) {
	std::cout << "Melee attack on " << target << std::endl;
}

void Human::rangedAttack(std::string const& target) {
	std::cout << "Ranged attack on " << target << std::endl;
}

void Human::intimidatingShout(std::string const& target) {
	std::cout << "Shout on " << target << std::endl;
}

typedef void (Human::*actionMethods)(std::string const&);

void Human::action(std::string const& actionName, std::string const& target) {

	actionMethods a[] = {
		&Human::meleeAttack, 
		&Human::rangedAttack,
		&Human::intimidatingShout
	};

	std::string actionCommands[] = {
		"melee",
		"range",
		"shout"
	};
	for (int i = 0; i < 3; i++)
		if (actionName.compare(actionCommands[i]) == 0)
			(this->*a[i])(target);
}
	

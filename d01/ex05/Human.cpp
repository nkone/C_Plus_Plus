/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:59:06 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/22 15:50:36 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
	std::cout << "Human created\n";
}

Human::~Human() {
	std::cout << "Human deleted\n";
}

std::string Human::identify(void) {
	return this->_brain.identify();
}

const Brain& Human::getBrain(void) {
	return this->_brain;
}

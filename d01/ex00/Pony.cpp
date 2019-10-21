/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:39:16 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 15:47:02 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name) : _ponyName(name) {
	std::cout << "Pony " << this->_ponyName << " is created\n";
}
Pony::~Pony(void) {
	std::cout << "Pony " << this->_ponyName << " is deleted\n";
	return;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:40:29 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/22 15:27:13 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp" 
#include <sstream>

Brain::Brain(void) {
	std::cout << "Brain constructed\n";
	setAddress();
}

Brain::~Brain(void) {
	std::cout << "Brain deleted\n";
}

const std::string Brain::identify(void) const{
	return this->_id;
}

void Brain::setAddress(void) {
	std::stringstream buf;
	
	buf << this;
	this->_id = buf.str();
}

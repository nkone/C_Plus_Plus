/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:17:41 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/23 18:45:02 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// Constructor
Fixed::Fixed() {
	this->_fixedPoint = 0;
	std::cout << "Default constructor called\n";
}

// Destructor
Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

// Copy Constructor
Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called\n";
	this->_fixedPoint = other._fixedPoint;
}

// Assignment Constructor
Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Assignment operator called\n";
	this->_fixedPoint = other._fixedPoint;
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits function called\n";
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw) {
	this->_fixedPoint = raw;
}

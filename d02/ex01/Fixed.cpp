/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:17:41 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/23 20:31:12 by phtruong         ###   ########.fr       */
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

// Assignment operator
Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Assignment operator called\n";
	this->_fixedPoint = other._fixedPoint;
	return *this;
}

// Int Constructor
Fixed::Fixed(const int n) {
	this->_fixedPoint = n;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits function called\n";
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw) {
	this->_fixedPoint = raw;
}

float Fixed::toFloats(void) const {
	return (float)this->_fixedPoint;
}

std::stream& o operator<<(std::stream& o, Fixed const & n) {
	o << n.toFloats();
}

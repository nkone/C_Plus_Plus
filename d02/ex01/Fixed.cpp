/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:17:41 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/23 23:04:53 by phtruong         ###   ########.fr       */
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
	if (this != &other)
		this->_fixedPoint = other._fixedPoint;
	return *this;
}

// Int Constructor
Fixed::Fixed(const int n) {
	std::cout << "Int constructor called\n";
	this->setRawBits(n << this->_fracBits);
}

// Float Constructor
Fixed::Fixed(const float n) {
	std::cout << "Float constructor called\n";
	this->setRawBits(roundf(n * (1 << this->_fracBits)));
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits function called\n";
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw) {
	this->_fixedPoint = raw;
}

float Fixed::toFloat(void) const {
	return (float)(this->_fixedPoint) / (1 << this->_fracBits);
}

int Fixed::toInt(void) const {
	return (int)(this->_fixedPoint >> this->_fracBits);
}

std::ostream& operator<<(std::ostream& o, Fixed const & n) {
	o << n.toFloat();
	return o;
}

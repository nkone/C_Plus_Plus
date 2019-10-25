/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:17:41 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/24 18:07:24 by phtruong         ###   ########.fr       */
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
// Shifting the number to the right because ostream print out floats
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
//	std::cout << "getRawBits function called\n";
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw) {
	this->_fixedPoint = raw;
}

// Return float by dividing what was multiplied
float Fixed::toFloat(void) const {
	return (float)(this->_fixedPoint) / (1 << this->_fracBits);
}

// Return int after shifting the bits back
int Fixed::toInt(void) const {
	return (int)(this->_fixedPoint >> this->_fracBits);
}

// Boolean overloaders //
bool Fixed::operator>(const Fixed& other) const {
	return this->_fixedPoint > other.getRawBits(); 
}

bool Fixed::operator<(const Fixed& other) const {
	return this->_fixedPoint < other.getRawBits(); 
}

bool Fixed::operator>=(const Fixed& other) const {
	return this->_fixedPoint >= other.getRawBits(); 
}

bool Fixed::operator<=(const Fixed& other) const {
	return this->_fixedPoint <= other.getRawBits(); 
}

bool Fixed::operator==(const Fixed& other) const {
	return this->_fixedPoint == other.getRawBits(); 
}

bool Fixed::operator!=(const Fixed& other) const {
	return this->_fixedPoint != other.getRawBits(); 
}
// End boolean overloaders //

// Arithmetics overloaders //
Fixed Fixed::operator+(const Fixed& other) const {
	return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
	return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
	return (this->toFloat() / other.toFloat());
}
// End arithmetic overloaders //

// Increment and Decrement overloaders //
Fixed& Fixed::operator++() { // pre-increment
	this->_fixedPoint++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	++*this; // call on pre-increment method;
	return temp;
}

Fixed& Fixed::operator--() {
	this->_fixedPoint--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	--*this; // call on pre-increment method
	return temp;
}

// Non member function
const Fixed& min(const Fixed& a, const Fixed& b) {
	return (a < b) ? a : b;
}

const Fixed& max(const Fixed& a, const Fixed& b) {
	return (a < b) ? b : a;
}
// End non member function
// End increment and decrement overloaders //
std::ostream& operator<<(std::ostream& o, Fixed const & n) {
	o << n.toFloat();
	return o;
}

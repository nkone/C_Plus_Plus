/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:28:29 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/24 22:36:03 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void) {
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(5.05f);
	Fixed d = c;
	Fixed e = Fixed(3);	
	Fixed f = Fixed(4);

	std::cout << "d is: " << d << " is greater than c? " << (d > c) << std::endl;
	std::cout << "d is: " << d << " is equal to c? " << (d == c) << std::endl;
	c = Fixed(1);
	
	std::cout << "c is: " << c << " is equal to d? " << (c == d) << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "pre-increment a " << ++a << std::endl;
	std::cout << "a now is " << a << std::endl;
	std::cout << "post-increment a " << a++ << std::endl;
	std::cout << "a now is " << a << std::endl;
	std::cout << "pre-decrement a " << --a << std::endl;
	std::cout << "a now is " << a << std::endl;
	std::cout << "post-decrement a " << --a << std::endl;
	std::cout << "a now is " << a << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << "e + f: " << e + f << std::endl;
	std::cout << "e - f: " << e - f << std::endl;
	std::cout << b << std::endl;
	std::cout << max( a, b ) << std::endl;

	return (0);
}	

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 19:07:58 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/30 20:31:42 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

#include <climits>
#include <cmath>
#include <iomanip>

void	outputChar(double d) {
	std::cout << "Char: ";
	(std::isnan(d) || std::isinf(d)) ? (std::cout << "Impossible" << std::endl) :
	(!std::isprint((d))) ? (std::cout << "None alpha" << std::endl) :
	(std::cout << "'" << static_cast<char>(d) << "'" << std::endl);
}

void	outputInt(double d) {
	std::cout << "Integer: ";
	(std::isnan(d) || std::isinf(d) || d < INT_MIN || d > INT_MAX) ? (std::cout << "Impossible" << std::endl) :
		std::cout << static_cast<int>(d) << std::endl;
}

void	outputFloat(double d) {
	std::cout << "Float: ";
	(std::isnan(d) && !std::signbit(d)) ? (std::cout << "nanf" << std::endl) :
	(std::isinf(d) && !std::signbit(d)) ? (std::cout << "inff" << std::endl) :
	(std::isnan(d) && std::signbit(d)) ? (std::cout << "-nanf" << std::endl) :
	(std::isinf(d) && std::signbit(d)) ? (std::cout << "-inff" << std::endl) :
	(std::floor(d) == d) ? (std::cout << static_cast<float>(d) << ".0f" << std::endl) :
	(std::cout << static_cast<float>(d) << "f" << std::endl);
}

void	outputDouble(double d) {
	std::cout << "Double: ";
	(std::isnan(d) && !std::signbit(d)) ? (std::cout << "nan" << std::endl) :
	(std::isinf(d) && !std::signbit(d)) ? (std::cout << "inf" << std::endl) :
	(std::isnan(d) && std::signbit(d)) ? (std::cout << "-nan" << std::endl) :
	(std::isinf(d) && std::signbit(d)) ? (std::cout << "-inf" << std::endl) :
	(std::floor(d) == d) ? (std::cout << d << ".0" << std::endl) :
	(std::cout << d << std::endl);
}
int main(int argc, char*argv[]) {
	if (argc == 2) {
		double d = std::stod(argv[1]);
		outputChar(d);
		outputInt(d);
		outputFloat(d);
		outputDouble(d);
	} else
		std::cout << "Usage: ./print [char/int/float/double]" << std::endl;
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:09:36 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/29 11:45:34 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat *a;
	try {
		a = new Bureaucrat("Adam", 9);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	if (a != nullptr)
		std::cout << *a << std::endl;
	
	for (int i = 0; i < 200; i++) {
		try {
			a->increment();
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
			break;
		}
	}
	std::cout << "Declaring on stack" << std::endl;
	Bureaucrat b = Bureaucrat("Bob", 150);
	Bureaucrat c = Bureaucrat("Caitlyn", 1);
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	
	return (0);
}

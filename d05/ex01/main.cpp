/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:09:36 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/29 20:48:35 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	Bureaucrat *a = nullptr;
	try {
		a = new Bureaucrat("Adam", 11);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	if (a != nullptr)
		std::cout << *a << std::endl;
	
	std::cout << "Declaring on stack" << std::endl;
	Bureaucrat b = Bureaucrat("Bob", 150);
	Bureaucrat c = Bureaucrat("Caitlyn", 1);
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	try { b.decrement();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { c.increment(); } catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	Form *bill = nullptr;
	
	try {
		bill = new Form("Bill of Rights", 1, 4);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	if (bill != nullptr)
		std::cout << *bill << std::endl;
	Form f = Form("Tax Cuts", 10, 149);
	std::cout << f << std::endl;
	try {
		f.beSigned(*a);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		a->signForm(f);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	a->increment();
	try {
		f.beSigned(b);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		a->signForm(f);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}

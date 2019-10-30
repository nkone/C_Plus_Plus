/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:09:36 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/29 23:34:10 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
	ShrubberryCreationForm s = ShrubberryCreationForm("");
	Bureaucrat bush = Bureaucrat("Bush", 1);
	Bureaucrat trump = Bureaucrat("Trump", 150);
	
	try { trump.signForm(s); }
	catch (std::exception& e) { std::cout << e.what() << std::endl; }
	try { bush.executeForm(s); }
	catch (std::exception& e) { std::cout << e.what() << std::endl; }
	try { bush.signForm(s); }
	catch (std::exception& e) { std::cout << e.what() << std::endl; }
	try { trump.executeForm(s); }
	catch (std::exception& e) { std::cout << e.what() << std::endl; }
	try { bush.executeForm(s); }
	catch (std::exception& e) { std::cout << e.what() << std::endl; }

	RobotomyRequestForm r = RobotomyRequestForm("Disneyland");
	
	try { trump.signForm(r); }
	catch (std::exception& e) { std::cout << e.what() << std::endl; }
	try { bush.executeForm(r); }
	catch (std::exception& e) { std::cout << e.what() << std::endl; }
	try { bush.signForm(r); }
	catch (std::exception& e) { std::cout << e.what() << std::endl; }
	try { trump.executeForm(r); }
	catch (std::exception& e) { std::cout << e.what() << std::endl; }
	try { bush.executeForm(r); }
	catch (std::exception& e) { std::cout << e.what() << std::endl; }
	
	Bureaucrat elizabeth = Bureaucrat("Queen Elizabeth", 6);
	PresidentialPardonForm pardon = PresidentialPardonForm("Alan Turing");
	try { trump.signForm(pardon); }
	catch (std::exception& e) { std::cout << e.what() << std::endl; }
	try { bush.executeForm(pardon); }
	catch (std::exception& e) { std::cout << e.what() << std::endl; }
	try { bush.signForm(pardon); }
	catch (std::exception& e) { std::cout << e.what() << std::endl; }
	try { elizabeth.executeForm(pardon); }
	catch (std::exception& e) {
		std::cout << elizabeth.getName() << " failed to execute" << std::endl;
		std::cout << e.what() << std::endl;
	}
	elizabeth.increment();
	try { elizabeth.executeForm(pardon); }
	catch (std::exception& e) { std::cout << e.what() << std::endl; }
	
	Intern kun;
	
	Form *berries = kun.makeForm("shrubberry", "");
	if (berries != nullptr)
	{
		try { elizabeth.executeForm(*berries); }
		catch (std::exception& e) { std::cout << e.what() << std::endl; }
		try { elizabeth.signForm(*berries);}	
		catch (std::exception& e) { std::cout << e.what() << std::endl; }
		try { elizabeth.executeForm(*berries); }
		catch (std::exception& e) { std::cout << e.what() << std::endl; }
	}
	return (0);
}

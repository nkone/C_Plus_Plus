/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 20:42:31 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/29 22:45:31 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Anon"), _grade(150) {}
Bureaucrat::~Bureaucrat() {}
Bureaucrat::Bureaucrat(const Bureaucrat& other) {
	*this = other;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other)
		*this = other;
	return *this;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name){
	// throw exception constructor if grade is less than _max value of 1
	if (grade < _max) {
		throw(GradeTooHighException());	
	} else if (grade > _min) {
	// throw exception constructor if grade is greater than _min value of 150
		throw(GradeTooLowException());
	}
	this->_grade = grade;	
}

// Member getters
int			Bureaucrat::getGrade() const { return this->_grade; }
std::string	Bureaucrat::getName() const { return this->_name; }

// Member functional
void Bureaucrat::increment() {
	if (this->_grade <= this->_max)
		throw(GradeTooHighException());
	this->_grade--;
}

void Bureaucrat::decrement() {
	if (this->_grade >= this->_min)
		throw(GradeTooLowException());
	this->_grade++;
}

void Bureaucrat::signForm(Form& form) {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << this->_name << " cannot sign " << form.getName() <<
			" because " << e.what() << std::endl;
	}
}
void Bureaucrat::executeForm(const Form& form) {
	if (form.getSigned() == false)
		throw(Form::FormNotSignedException());
	if (form.getGradeToSign() < this->_grade || form.getGradeToExe() < this->_grade)
		throw(GradeTooLowException());
	form.beExecuted();
}


// Shortcuts
typedef Bureaucrat::GradeTooHighException GradeTooHighException;

GradeTooHighException::GradeTooHighException() {}
GradeTooHighException::~GradeTooHighException() throw() {}
GradeTooHighException::GradeTooHighException(const GradeTooHighException& other) {
	*this = other;
}

GradeTooHighException& GradeTooHighException::operator=(const GradeTooHighException&) {
	return *this;
}

const char* GradeTooHighException::what() const throw() { return "Error grade is too high"; }


typedef Bureaucrat::GradeTooLowException GradeTooLowException;

GradeTooLowException::GradeTooLowException() {}
GradeTooLowException::~GradeTooLowException() throw() {}
GradeTooLowException::GradeTooLowException(const GradeTooLowException& other) {
	*this = other;
}

GradeTooLowException& GradeTooLowException::operator=(const GradeTooLowException&) {
	return *this;
}

const char* GradeTooLowException::what() const throw() { return "Error grade is too low"; }

std::ostream&  operator<<(std::ostream& o, const Bureaucrat& ref) {
	o << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return o;
}

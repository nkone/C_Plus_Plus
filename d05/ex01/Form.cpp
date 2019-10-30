/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:44:08 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/29 20:43:09 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Init useless form
Form::Form() : _name("Empty"), _signed(false), _gradeToSign(150), _gradeToExe(150) {}
Form::~Form() {}
Form::Form(const Form& other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExe(other._gradeToExe) {
	_signed        = other._signed;
}
Form& Form::operator=(const Form& other) {
	if (this != &other)
		*this = other;
	return *this;
}

Form::Form(const std::string& name, int toSign, int toExe) :
	_name(name), _gradeToSign(toSign), _gradeToExe(toExe) {
	// throw exception constructor if grade is less than _max value of 1
	if (toSign < _maxGrade || toExe < _maxGrade) {
		throw(GradeTooHighException());	
	} else if (toSign > _minGrade || toExe > _minGrade) {
	// throw exception constructor if grade is greater than _min value of 150
		throw(GradeTooLowException());
	}
	this->_signed = false;	
}

// Getters
std::string Form::getName() const { return this->_name; }
bool		Form::getSigned() const { return this->_signed; }
int			Form::getGradeToSign(void) const { return this->_gradeToSign; }
int			Form::getGradeToExe(void) const { return this->_gradeToExe; }

// Functional
void		Form::beSigned(Bureaucrat& subject) {
	if (subject.getGrade() > this->_gradeToSign)
		throw(GradeTooLowException());
	this->_signed = true;
}

typedef Form::GradeTooHighException GradeTooHighException;

GradeTooHighException::GradeTooHighException() {}
GradeTooHighException::~GradeTooHighException() throw() {}
GradeTooHighException::GradeTooHighException(const GradeTooHighException& other) {
	*this = other;
}

GradeTooHighException& GradeTooHighException::operator=(const GradeTooHighException&) {
	return *this;
}

const char* GradeTooHighException::what() const throw() { return "Error grade is too high"; }

typedef Form::GradeTooLowException GradeTooLowException;

GradeTooLowException::GradeTooLowException() {}
GradeTooLowException::~GradeTooLowException() throw() {}
GradeTooLowException::GradeTooLowException(const GradeTooLowException& other) {
	*this = other;
}

GradeTooLowException& GradeTooLowException::operator=(const GradeTooLowException&) {
	return *this;
}

const char* GradeTooLowException::what() const throw() { return "Error grade is too low"; }

std::ostream&  operator<<(std::ostream& o, const Form& ref) {
	o << "Form: " << ref.getName() <<
		" to Sign: " << ref.getGradeToSign() <<
		" to Execute: " << ref.getGradeToExe();
	return o;
}

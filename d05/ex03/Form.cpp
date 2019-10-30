/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:44:08 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/29 22:32:35 by phtruong         ###   ########.fr       */
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

Form::Form(const std::string& name, const std::string& target, int toSign, int toExe) :
	_name(name), _target(target), _gradeToSign(toSign), _gradeToExe(toExe) {
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
std::string Form::getTarget() const { return this->_target; }
bool		Form::getSigned() const { return this->_signed; }
int			Form::getGradeToSign(void) const { return this->_gradeToSign; }
int			Form::getGradeToExe(void) const { return this->_gradeToExe; }

// Functional
void		Form::beSigned(const Bureaucrat& subject) {
	if (subject.getGrade() > this->_gradeToSign)
		throw(GradeTooLowException());
	this->_signed = true;
}

void		Form::execute(const Bureaucrat& subject) {
	if (this->_signed == false)
		throw(FormNotSignedException());
	if (this->_gradeToSign < subject.getGrade())
		throw(GradeTooLowException());
	this->beExecuted();
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

typedef Form::FormNotSignedException FormNotSignedException;

FormNotSignedException::FormNotSignedException() {}
FormNotSignedException::~FormNotSignedException() throw() {}
FormNotSignedException::FormNotSignedException(const FormNotSignedException& other) {
	*this = other;
}

FormNotSignedException& FormNotSignedException::operator=(const FormNotSignedException&) {
	return *this;
}

const char* FormNotSignedException::what() const throw() { return "Error form is not signed"; }

std::ostream&  operator<<(std::ostream& o, const Form& ref) {
	o << "Form: " << ref.getName() <<
		" to Sign: " << ref.getGradeToSign() <<
		" to Execute: " << ref.getGradeToExe();
	return o;
}

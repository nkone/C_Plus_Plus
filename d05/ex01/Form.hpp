/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:35:49 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/29 20:40:52 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string		_name;
		bool					_signed;
		const int				_gradeToSign;
		const int				_gradeToExe;
		static const int		_maxGrade = 1;
		static const int		_minGrade = 150;

	public:
		// Canon form
		Form();
		~Form();
		Form(const Form&);
		Form& operator=(const Form&);
		
		// Initialize with name and grade
		Form(const std::string&, int, int);

		// Getters
		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExe(void) const;
		
		// Functional
		void		beSigned(Bureaucrat&);

		class GradeTooHighException: public std::exception {
			public:
				// Canon form
				GradeTooHighException();
				~GradeTooHighException() throw();
				GradeTooHighException(const GradeTooHighException&);
				GradeTooHighException& operator=(const GradeTooHighException&);

				// Member function
				virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				// Canon form
				GradeTooLowException();
				~GradeTooLowException() throw();
				GradeTooLowException(const GradeTooLowException&);
				GradeTooLowException& operator=(const GradeTooLowException&);

				//Member function
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 19:57:55 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/29 18:24:23 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <stdexcept>
#include <iostream>

class Bureaucrat {
	public:
		// Canon form
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		
		// Initialize with name and grade
		Bureaucrat(const std::string&, int); 
		

		// Member getters
		int			getGrade(void) const;
		std::string	getName(void) const;
		
		// Member functional
		void		increment();
		void		decrement();
		
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
	private:
		const std::string	_name;
		int					_grade;
		static const int	_min = 150;
		static const int	_max = 1;
};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif

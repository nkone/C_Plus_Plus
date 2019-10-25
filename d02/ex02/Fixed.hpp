/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:58:00 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/24 18:06:04 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
	private:
		int	_fixedPoint;
		static const int _fracBits = 8;
	public:
		Fixed();							// Constructor
		Fixed(const Fixed&);				// Copy constructor
		~Fixed();							// Destructor
		Fixed & operator = (const Fixed&);	//Assignment operator
		
		Fixed(const int);					// Int Constructor
		Fixed(const float);					// Float Constructor

		int		getRawBits(void) const;		// return rawBits
		void	setRawBits(int const raw);	// set rawBits
		float	toFloat(void) const;		// convert _fixedPoint to float
		int		toInt(void) const;			// convert _fixedPoint to int
		
		// Comparisons operator overload
		bool	operator >	(const Fixed&) const;
		bool	operator <	(const Fixed&) const;
		bool	operator >=	(const Fixed&) const;
		bool	operator <=	(const Fixed&) const;
		bool	operator ==	(const Fixed&) const;
		bool	operator !=	(const Fixed&) const;
		
		// Arithmetics operator overload
		Fixed	operator +	(const Fixed&) const;
		Fixed	operator -	(const Fixed&) const;
		Fixed	operator /	(const Fixed&) const;
		Fixed	operator *	(const Fixed&) const;

		//Increment and Decrement operators overloard
		Fixed&	operator++ (void); //pre-increment
		Fixed	operator++ (int); //post-increment
		Fixed&	operator-- (void);
		Fixed	operator-- (int);
};

std::ostream& operator<<(std::ostream& o, Fixed const & n);
const Fixed& min(const Fixed&, const Fixed&);
const Fixed& max(const Fixed&, const Fixed&);
#endif

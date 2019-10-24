/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:58:00 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/23 22:59:03 by phtruong         ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& o, Fixed const & n);

#endif

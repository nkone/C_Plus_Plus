/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:58:00 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/23 18:31:37 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	private:
		int	_fixedPoint;
		static const int _fracBits = 8;
	public:
		Fixed(); // Constructor
		Fixed(const Fixed&); // Copy constructor
		~Fixed(); // Destructor
		Fixed & operator = (const Fixed&);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif

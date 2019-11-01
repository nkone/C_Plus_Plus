/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 18:59:02 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/31 19:33:50 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T >
T const & min (T & x, T & y) {
	return ( x >= y ? y : x);
}

template< typename T >
T const & max (T & x, T & y) {
	return ( x <= y ? y : x);
}

template< typename T >
void	swap(T & x, T & y) {
	T tmp = x;
	x = y;
	y = tmp;
}

int main(void)
{
	std::string s1 = "Hello world";
	std::string s2 = "Goodbye world";
	::swap(s1,s2);
	std::cout << "Swapping hello world and goodbye world" << std::endl;
	std::cout << "s1: " << s1 << " s2: " << s2 << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	int x = 0;
	int y = 10;
	std::cout << "max:" << max<int>(x, y) << " min:" << min<int>(x, y) << std::endl;
	float f1 = -1.0f;
	float f2 = -3.0f; 
	std::cout << "max:" << max<float>(f1, f2) << " min:" << min<float>(f1, f2) << std::endl;
}
	

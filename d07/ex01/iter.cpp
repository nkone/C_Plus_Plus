/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 19:38:22 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/31 20:22:54 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void printOut(T a) {
	std::cout << a << std::endl;
}

template<typename T>
void iter(T *array, size_t size, void (*func)(T &)) {
	for (size_t i = 0; i < size; i++) {
		func(array[i]);
	}
}

int main(void) {
	int intArray[] = {0,1,2,3,4,5,6,7,8,9};
	iter<int>(intArray, sizeof(intArray)/sizeof(intArray[0]), printOut);
	std::string stringArray[] = {"hi", "low", "hello", "world"};
	iter<std::string>(stringArray, sizeof(stringArray)/sizeof(stringArray[0]), printOut);
	float floatArray[] = {0.0f, -123.0f, 1234.0f, 12341.0f, 88483.03023124f};
	iter<float>(floatArray, sizeof(floatArray)/sizeof(floatArray[0]), printOut);
	return (0);
}

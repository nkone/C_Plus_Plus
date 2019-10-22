/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:02:20 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/22 15:03:25 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"
#include <iostream>

int main(void) {
	Human bob;
	std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
}

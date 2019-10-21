/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:56:47 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 15:58:13 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak()
{
        std::string*        panthere = new std::string("String panthere");
        std::cout << *panthere << std::endl;
		delete panthere;
}

int main(void) {
	memoryLeak();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:51:02 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/22 14:19:05 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void) {
	std::string brain;
	brain = "HI THIS IS BRAIN";
	std::string *ptrbrain = &brain;
	std::string &refbrain = brain;

	std::cout << brain << std::endl;
	std::cout << *ptrbrain << std::endl;
	std::cout << refbrain << std::endl;
}

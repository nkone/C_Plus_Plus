/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:20:05 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/23 15:46:57 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony	*ponyOnTheHeap(std::string name) {
	Pony* heapPony = new Pony(name);
	heapPony->announce();
	return heapPony;
}

Pony	ponyOnTheStack(std::string name) {
	Pony stackPony = Pony(name);
	stackPony.announce();
	return stackPony;
}

int main(void) {
	Pony *heapPony = ponyOnTheHeap("heap pony");
	Pony stackPony = ponyOnTheStack("stack pony");

	delete heapPony;
	heapPony = ponyOnTheHeap("heap pony");
	stackPony = ponyOnTheStack("stack pony");
	delete heapPony;
	return 0;
}

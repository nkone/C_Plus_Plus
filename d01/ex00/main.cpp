/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:20:05 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 15:50:41 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony	*ponyOnTheHeap(std::string name) {
	Pony* heapPony = new Pony(name);
	return heapPony;
}

Pony	ponyOnTheStack(std::string name) {
	Pony stackPony = Pony(name);
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

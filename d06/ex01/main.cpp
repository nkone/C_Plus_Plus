/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 20:40:29 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/30 21:07:38 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <random>
#include <limits>

struct Data {
	std::string s1;
	int			n;
	std::string s2;
};

void * serialize(void) {
	Data *d = new Data;
	static const char dataSet[] =
		"0123456789"
		"abcdefghijklmnopqrstuvwxyz"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dataDis(0,61);
	std::uniform_int_distribution<int> intDis(INT_MIN,INT_MAX);
	
	char buf1[9] = {0};
	char buf2[9] = {0};

	for (int i = 0; i < 8; i++) {
		buf1[i] = dataSet[dataDis(gen)];
		buf2[i] = dataSet[dataDis(gen)];
	}
	buf1[8] = '\0';
	buf2[8] = '\0';
	d->s1.assign(buf1);
	d->s2.assign(buf2);
	d->n = intDis(gen);
	
	std::cout << "========SERIALIZE========" << std::endl;
	std::cout << "s1: " << d->s1 << std::endl;
	std::cout << "n: " << d->n << std::endl;
	std::cout << "s2: " << d->s2 << std::endl;
	return reinterpret_cast<void *>(d);
}

Data* deserialize(void* raw) {
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	void *serialData = serialize();
	Data *d = deserialize(serialData);
	
	std::cout << "========DESERIALIZE========" << std::endl;
	std::cout << "s1: " << d->s1 << std::endl;
	std::cout << "n: " << d->n << std::endl;
	std::cout << "s2: " << d->s2 << std::endl;
	return(0);
}
	

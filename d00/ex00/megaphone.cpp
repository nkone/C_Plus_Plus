/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:43:58 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/18 16:04:06 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void megaphone(char *str) {

	if (!str)
		return ;
	char *head;

	head = str;

	while (*str) {
		*str = toupper(*str);
		str++;
	}
	
	std::cout << head;
}

int main(int argc, char *argv[]) {

	if (argc > 1) {
		for(int i = 1; i < argc; i++) {
			megaphone(argv[i]);
		}
		std::cout << std::endl;
	} else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return (0);
}

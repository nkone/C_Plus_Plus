/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:43:15 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/23 15:44:33 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

class Pony {
	private:
		std::string _ponyName;
	public:
		Pony(std::string ponyName);
		~Pony(void); 
		void announce(void);
};

#endif

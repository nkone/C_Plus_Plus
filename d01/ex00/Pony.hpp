/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:43:15 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 15:46:48 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Pony {
	private:
		std::string _ponyName;
	public:
		Pony(std::string ponyName);
		~Pony(void); 
};

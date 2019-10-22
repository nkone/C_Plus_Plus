/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:57:26 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 17:37:12 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
	private:
		std::string _name;
		std::string _type;
	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void	announce(void);
};

#endif

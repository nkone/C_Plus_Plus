/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:04:19 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 17:57:09 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"
#include <iostream>
#include <string>

class ZombieEvent {
	private:
		std::string _type;
	public: 
		ZombieEvent(void);
		~ZombieEvent(void);
		Zombie *newZombie(std::string name);
		void	setZombieType(std::string type);
		Zombie *randomChump(void);

};

#endif

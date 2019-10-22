/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 18:44:31 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 22:30:50 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
	private:
		Zombie *_horde;
	public:
		ZombieHorde(void);
		~ZombieHorde(void);
		Zombie *getHorde(void);
		void spawnHorde(int N);
		std::string randomName(int idx);
};

#endif

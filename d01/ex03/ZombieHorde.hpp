/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 18:44:31 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/21 19:20:42 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.cpp"

class ZombieHorde {
	private:
		Zombie *_horde;
	public:
		ZombieHorde(void);
		~ZombieHorde(void);
		Zombie *getHorde(void);
		void createHorde(int N);
};

#endif

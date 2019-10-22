/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:54:24 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/22 15:50:41 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human {
	private:
		const Brain _brain;
	public:
		Human();
		~Human();
		std::string identify(void);
		const Brain& getBrain(void);
};

#endif

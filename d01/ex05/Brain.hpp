/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:36:35 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/23 16:11:31 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
	private:
		std::string _id;
	public:
		Brain();
		~Brain();
		const std::string identify(void) const;
		void	setAddress(void);
};

#endif

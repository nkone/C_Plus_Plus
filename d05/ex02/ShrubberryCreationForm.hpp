/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 21:26:03 by phtruong          #+#    #+#             */
/*   Updated: 2019/10/29 22:33:22 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRY_CREATION_FORM_HPP
#define SHRUBBERRY_CREATION_FORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberryCreationForm : public Form {
	public:
		ShrubberryCreationForm();
		ShrubberryCreationForm(const std::string&);
		~ShrubberryCreationForm();
		ShrubberryCreationForm(const ShrubberryCreationForm&);
		ShrubberryCreationForm& operator=(const ShrubberryCreationForm&);

		void	beExecuted(void) const;
};
#endif

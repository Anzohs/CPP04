/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 20:12:42 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/25 19:15:35 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.h"
#include <iostream>

class AMateria {
	protected:
		std::string type;
	public:
		AMateria(std::string const& type);
		AMateria(const AMateria& other);
		AMateria& operator=(const AMateria& other);
		virtual ~AMateria(void);
		std::string const& getType(void) const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

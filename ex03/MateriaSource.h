/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 20:51:31 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/25 18:41:26 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.h"
#include "AMateria.h"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* inventory[2];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource& other);
		~MateriaSource(void);
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const& type);
};

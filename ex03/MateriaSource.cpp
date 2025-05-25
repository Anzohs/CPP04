/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 18:26:12 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/25 18:46:24 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.h"


MateriaSource::MateriaSource(void){
	for (int i = 0; i < 2; i++)
		this->inventory[i] = 0;
};

MateriaSource::MateriaSource(const MateriaSource& other)
{
	if (other.inventory[0])
		this->inventory[0] = other.inventory[0]->clone();
	if (other.inventory[1])
		this->inventory[1] = other.inventory[1]->clone();
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < 2; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	for (int i = 0; i< 2; i++)
	{
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource(void){
	for (int i = 0; i < 2; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

void MateriaSource::learnMateria(AMateria* m){
	for (int i=0; i < 2; i++)
	{
		if (!this->inventory[i])
			this->inventory[i] = m;
		if (this->inventory[i]->getType() == m->getType())
			return (std::cout << "This Materia is allready learn\n", (void)i);

	}
	std::cout << "The inventory is full, cant learn a new Materia";
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 2; i++)
	{
		if (!this->inventory[i])
		{
			std::cout << "It doesn't have " << type << " materia! First it needs to learn it first\n";
			return (0);
		}
		if (this->inventory[i]->getType() == type)
			return (this->inventory[i]->clone());
	}
	std::cout << "It doesn't have a type of that materia\n";
	return (0);
}

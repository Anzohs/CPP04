/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 23:49:27 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/18 00:03:57 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

Brain::Brain(void) :  i(0){
	for (int j = 0; j < 100; j++)
		this->ideas[j] = "";
	std::cout << "Constructor of brain called\n";
}

Brain::Brain(const Brain& other) : i(other.i)
{
	for (int j = 0; j < 100; j++)
		this->ideas[j] = other.ideas[j];
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		int j;
		
		j = -1;
		while (++j < 100)
			this->ideas[j] = other.ideas[j];
	}
	this->i = other.i;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain of a Animal was Destroyed\n";
}

void Brain::printIdeas(void) const {
	for (int j = 0; j < 100; j++)
	{
		if (!ideas[j].empty())
		{
			std::cout << "\033[1;32mIdea " << j << ":\033[0m ";
			std::cout << "\033[1;36m"  << ideas[j] << "\033[0m\n";
		}
		else
			break;
	}
}

void Brain::setIdeas(std::string idea)
{

	if (this->i == 100)
	{
		std::cout << "Animal is full of ideas\n";
		return;
	}
	if (idea.empty())
		return;
	this->ideas[this->i++] = idea; 
}

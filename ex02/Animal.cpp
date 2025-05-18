/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:25:45 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/18 18:28:59 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.h"


Animal::Animal(std::string type) : type(type), brain(new Brain()){
	std::cout << "Animal class with the type " << this->type << " was created \n";
};

Animal::Animal(const Animal& other) : type(other.type), brain(new Brain(*other.brain)) {
	std::cout << "Animal class with copy constructor was created!\n";
}

Animal& Animal::operator=(const Animal& other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain(*other.brain);
	return (*this);
}

Animal::~Animal(void){
	delete this->brain;
	std::cout << "Animal class was destroyed \n";
}

void Animal::makeSound(void) const {
	if (this->type == "Cat")
	{
		std::cout << "Miau \n";
		return;
	}
	if (this->type == "Dog")
	{
		std::cout << "Rolf!! \n";
		return;
	}
	std::cout << "It has no type\n";
}

std::string Animal::getType(void)const {return (this->type);}
void Animal::printIdeas(void) const {this->brain->printIdeas();}
void Animal::setIdea(std::string idea){this->brain->setIdeas(idea);}

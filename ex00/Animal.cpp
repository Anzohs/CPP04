/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:25:45 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/17 21:25:46 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.h"


Animal::Animal(void): type(""){
	std::cout << "Animal class without type was created\n";
}
Animal::Animal(std::string type) : type(type){
	std::cout << "Animal class with the type " << this->type << " was created \n";
};

Animal::Animal(const Animal& other) : type(other.type){
	std::cout << "Animal class with copy constructor was created!\n";
}

Animal& Animal::operator=(const Animal& other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}


Animal::~Animal(void){
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

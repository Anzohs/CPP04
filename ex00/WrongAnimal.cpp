/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 22:03:19 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/17 22:20:38 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal(void) :type("Wrong")
{
	std::cout << "Wrong Animal created\n";
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "Wrong Animal with wrong type was created \n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
	std::cout << "Copy constructor called\n";
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "Wrong Animal was destroyed\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this == &other)
			return (*this);
	this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "Wrong Animal sound\n";
}

std::string WrongAnimal::getType(void)const {return (this->type);}

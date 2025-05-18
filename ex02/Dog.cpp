/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:25:55 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/18 17:42:24 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"


Dog::Dog() : Animal("Dog"){
	std::cout << "A Class of a Dog was created\n";
}

Dog::Dog(const Dog& other) : Animal(other){
	std::cout << "Copy constructor of Dog was created\n";
}

Dog& Dog::operator=(const Dog& other){
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	return (*this);
};

Dog::~Dog(void){
	std::cout << "Class Dog was destroyed\n";
}

void Dog::makeSound(void) const {std::cout << "Rolf\n";}

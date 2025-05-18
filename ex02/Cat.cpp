/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:25:50 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/18 17:41:20 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat(void): Animal("Cat"){
	std::cout << "Cat was created\n";
};

Cat::Cat(const Cat& other) : Animal(other){
	std::cout << "Copy constructor called!";
}

Cat& Cat::operator=(const Cat& other){
	if (this == &other)
		return(*this);
	Animal::operator=(other);
	return (*this);
}


Cat::~Cat(void){
	std::cout << "Cat was destroyed \n";
}

void Cat::makeSound(void)const {std::cout << "Miau\n";}

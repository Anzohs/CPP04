/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:25:50 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/17 21:25:51 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat(void): Animal("Cat"){
	std::cout << "Cat was created\n";
};

Cat::Cat(const Cat& other) : Animal(other.type){
	std::cout << "Copy constructor called!";
}

Cat& Cat::operator=(const Cat& other){
	if (this == &other)
		return(*this);
	return (*this);
}


Cat::~Cat(void){
	std::cout << "Cat was destroyed \n";
}

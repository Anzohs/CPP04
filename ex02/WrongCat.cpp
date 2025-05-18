/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 22:16:38 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/17 22:27:07 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat"){
	std::cout << "WrongCat was created \n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other.type)
{
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this == &other)
			return (*this);
	this->type = other.type;
	return (*this);
}

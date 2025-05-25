/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 19:03:34 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/25 19:23:14 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.h"
#include "AMateria.h"

Ice::Ice(void) : AMateria("ice"){}
Ice::Ice(const Ice& other) : AMateria(other.type){}

Ice& Ice::operator=(const Ice& other)
{
	(void)other;
	return (*this);
}

Ice::~Ice(void){}


std::string Ice::getType() const {return this->type;}

Ice* Ice::clone(void) const{return new Ice();}

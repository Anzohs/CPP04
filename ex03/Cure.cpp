/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 19:06:01 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/25 19:22:49 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.h"
#include "AMateria.h"

Cure::Cure(void) : AMateria("cure"){}
Cure::Cure(const Cure& other) : AMateria(other.type){};

Cure& Cure::operator=(const Cure& other){
	(void)other;
	return (*this);
}

Cure::~Cure(){}

std::string Cure::getType(void)const {return this->type;}

Cure* Cure::clone(void)const{return new Cure();}

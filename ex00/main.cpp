/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:26:00 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/17 22:28:26 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"


int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal *p = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << p->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	p->makeSound();

	delete meta;
	delete j;
	delete p;
	delete i;
	return (0);
}

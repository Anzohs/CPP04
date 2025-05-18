/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:26:00 by hladeiro          #+#    #+#             */
/*   Updated: 2025/05/18 00:53:08 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.h"


int main() {
	const int size = 10;
	Animal* animals[size];

	std::cout << "Creating animals...\n\n";

	// Fill half with Dogs, half with Cats
	for (int i = 0; i < size; ++i) {
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\nFilling some ideas into Dog and Cat...\n\n";
	Dog* dog1 = dynamic_cast<Dog*>(animals[0]);
	dog1->setIdea("Chase the mailman");
	dog1->setIdea("Dig a hole");
	std::cout << "\nTesting deep copy...\n\n";
	std::cout << "Copied Dog's ideas:\n";
	Dog* copiedDog = new Dog(*dog1);
	copiedDog->printIdeas();

	std::cout << "\nModifying original Dog's idea...\n";
	dog1->setIdea("Eat homework");

	std::cout << "\nOriginal Dog's ideas:\n";
	dog1->printIdeas();

	std::cout << "\nCopied Dog's ideas (should be unchanged):\n";
	copiedDog->printIdeas();

	delete copiedDog;

	std::cout << "\nDeleting animals...\n\n";

	for (int i = 0; i < size; ++i)
		delete animals[i];
	return 0;
}


#include "Animal.h"


Animal::Animal(void){
	this->type = "";
}


Animal::Animal(std::string t){
	this->type = t;
}

Animal Animal::operator=(const Animal& other){
	if (this == &other)
			return (*this);
	this->type = other.type;
	return(*this);
}

Animal::Animal(const Animal& other){
	this->type = other.type;
}

void Animal::makeSound(void){
	std::cout << "\n";
}

std::string Animal::getType(void){
	return(this->type);
}

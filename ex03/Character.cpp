#include "Character.h"


Character::Character(std::string name) : name(name){}
Character::Character(const Character& other) : name(other.getName()){}
Character::~Character(){}

Character& Character::operator=(const Character& other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	return (*this);
}

std::string const &Character::getName()const {
	return (this->name);
};

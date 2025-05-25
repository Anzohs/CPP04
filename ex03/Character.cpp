#include "Character.h"

Character::Character(std::string name) : name(name){
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}
Character::Character(const Character& other) : name(other.getName()){
	for (int i = 0; i < 4; i++)
		this->inventory[i] = other.inventory[i]->clone();
}
Character::~Character(){
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

Character& Character::operator=(const Character& other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = other.inventory[i]->clone();
	return (*this);
}

std::string const &Character::getName()const {return (this->name);}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 3; i++)
	{
		if (!this->inventory[i])
			return (this->inventory[i] = m, (void) i);
	}
	std::cout << "Iventory is full!!!\n";

}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return (std::cout << "The index goes from 0 to 3\n", (void)idx);
	if (this->inventory[idx])
		this->inventory[idx] = 0, std::cout << "Spell was unequip from the inventory\n";
	else
		std::cout << "The current index doesn't have any spell in there\n";
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return (std::cout << "The index goes from 0 to 3, please choose the right index\n", (void) idx);
	this->inventory[idx]->use(target);
}

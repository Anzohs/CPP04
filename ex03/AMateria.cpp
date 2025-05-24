#include "AMateria.h"

AMateria::AMateria(std::string const& type) : type(type){}
AMateria::AMateria(const AMateria& other) : type(other.getType()){}
AMateria::~AMateria(void){}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this == &other || this->type != other.getType())
		return (*this);
	this->type = other.type;
	return (*this);
}

const std::string& AMateria::getType() const {return(this->type);}

void AMateria::use(ICharacter& target)
{
	if (this->type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *\n" ;
	if (this->type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

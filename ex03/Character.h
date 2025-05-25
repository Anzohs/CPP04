#include "AMateria.h"
#include "ICharacter.h"

class Character : public ICharacter{
	private:
		std::string name;
		AMateria* inventory[4];
	public:
		Character(std::string name);
		Character(const Character& other);
		Character& operator=(const Character& other);
		~Character();
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		std::string const& getName() const;
};

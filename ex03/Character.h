#include "ICharacter.h"


class Character : public ICharacter{
	private:
		std::string name;
	public:
		Character(std::string name);
		Character(const Character& other);
		Character& operator=(const Character& other);
		~Character();
		std::string const& getName() const;
};

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
#include <cstring>

class Weapon
{
	public:
	Weapon(std::string type);
	std::string getType() const;
	void setType(std::string type);
	~Weapon();

	private:
	std::string type;
};

#endif

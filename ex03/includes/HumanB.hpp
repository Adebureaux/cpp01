#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include <cstring>
#include "../includes/Weapon.hpp"

class HumanB
{
	public:
	HumanB(std::string name);
	void attack();
	void setWeapon(Weapon type);
	~HumanB();

	private:
	Weapon* type;
	std::string name;
};

#endif

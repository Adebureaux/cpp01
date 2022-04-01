#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include <cstring>
#include "../includes/Weapon.hpp"

class HumanA
{
	public:
	HumanA(std::string name, Weapon type);
	void attack();
	~HumanA();

	private:
	Weapon* type;
	std::string name;
};

#endif

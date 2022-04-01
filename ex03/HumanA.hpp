#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
	HumanA(std::string name, Weapon& type);
	void attack();
	~HumanA();

	private:
	std::string name;
	Weapon *type;
};

#endif

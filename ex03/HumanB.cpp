#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	return;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->type->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& type)
{
	this->type = &type;
	return;
}

HumanB::~HumanB()
{
	return;
}
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : name(name), type(&type)
{
	return;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->type->getType() << std::endl;
}

HumanA::~HumanA()
{
	return;
}

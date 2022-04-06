#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public:
	Harl();
	void complain(std::string level);
	~Harl();

	private:
	void debug(void)
	{
		std::cout << "[ DEBUG ]" << std::endl << "Debug messages contain contextual information. They are mostly used for problem diagnosis." << std::endl;
	};
	void info(void)
	{
		std::cout << "[ INFO ]" << std::endl << "These messages contain extensive information. They are helpful for tracing program execution in a production environment." << std::endl;
	};
	void warning(void)
	{
		std::cout << "[ WARNING ]" << std::endl << "Warning messages indicate a potential issue in the system." << std::endl << "However, it can be handled or ignored." << std::endl;
	};
	void error(void)
	{
		std::cout << "[ ERROR ]" << std::endl << "This is unacceptable, I want to speak to the manager now." << std::endl;
	}
};

#endif

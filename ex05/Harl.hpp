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
		std::cout << "[DEBUG] > " << "Debug messages contain contextual information. They are mostly used for problem diagnosis." << std::endl;
	};
	void info(void)
	{
		std::cout << "[INFO] > " << "These messages contain extensive information. They are helpful for tracing program execution in a production environment." << std::endl;
	};
	void warning(void)
	{
		std::cout << "[WARNING] > "  << "Warning messages indicate a potential issue in the system. However, it can be handled or ignored." << std::endl;
	};
	void error(void)
	{
		std::cout << "[ERROR] > " << "These messages indicate an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention." << std::endl;
	}
};

#endif

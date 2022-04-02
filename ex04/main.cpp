#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "Error: must have 3 arguments: <filename> <string_1> <string_2>" << std::endl || 1);
	std::ifstream file(av[1]);
	if (!file.is_open())
		return (std::cout << "Error: cannot open the file '" << av[1] << "'" << std::endl || 1);
	std::string const original((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	std::string const s1 = av[2];
	if (!s1[0])
		return (std::cout << "Error: second argument shouldn't be an empty string" << std::endl || 1);
	std::string const s2 = av[3];
	std::string copy;
	file.close();
	int i = 0;
	int find;
	while (1)
	{
		find = original.find(s1, i);
		if (find != -1)
		{
			copy.append(original.substr(i, find - i));
			copy.append(s2);
			i = find + s1.length();
		}
		else
		{
			copy.append(original.substr(i));
			break;
		}
	}
	std::string filename = av[1];
	std::ofstream outfile(filename.append(".replace"));
	if (!outfile.is_open())
		return (std::cout << "Error: cannot create the file '" << filename << "'" << std::endl || 1);
	outfile << copy;
	outfile.close();
	return (0);	
}

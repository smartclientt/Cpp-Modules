#include <fstream>
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
		return 0;

	std::string name_file(av[1]);
	std::string seq(av[2]);
	std::string new_seq(av[3]); 
	if (seq.empty() || name_file.empty() || new_seq.empty())
		return (1);
	std::ifstream fs_src(name_file);
	if (!fs_src.is_open())
	{
		std::cerr << "Can't open the file" << std::endl;
		return (1);
	}

	std::ofstream fs_dst(name_file.append(".replace"));
	if (!fs_dst.is_open() || fs_dst.fail())
	{
		std::cerr << "Can't open the file" << std::endl;
		return (1);
	}

	std::string 	buff;
	size_t			start = 0;
	size_t			end = 0;


	getline(fs_src, buff, '\0');
	while((end = buff.find(seq, start)) != std::string::npos)
	{
		fs_dst << buff.substr(start, end - start);
		fs_dst << new_seq; 
		start = end + seq.size();
	}
	fs_dst << buff.substr(start);
}
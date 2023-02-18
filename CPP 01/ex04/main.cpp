#include <fstream>
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string buff;
		std::string content;
		std::string	new_line;
		size_t			pos = 0;
		size_t			old_pos = 0;

		std::string name_file = std::string(av[1]);
		std::string seq = std::string(av[2]);
		std::string new_seq = std::string(av[3]);
		std::fstream fs_src(name_file, std::ios::in | std::ios:: out);
		if (!fs_src.is_open())
		{
			std::cerr << "Can't open the file" << std::endl;
			return (1);
		}

		std::fstream fs_dst(name_file.append(".replace"), std::ios::in | std::ios:: out | std::ios::trunc);
		if (!fs_dst)
		{
			std::cerr << "Can't open the file" << std::endl;
			return (1);
		}

		getline(fs_src, buff, '\0');
		while(buff.find(seq, pos) != std::string::npos)
		{
			old_pos = pos;
			(content.append(buff.substr(pos, buff.find(seq, pos) - old_pos))).append(new_seq);
			old_pos = pos;
			pos = buff.find(seq, pos) + seq.size();
		}
		content.append(buff.substr(pos));
		fs_dst.write(content.c_str(), content.size());

		fs_src.close();
		fs_dst.close();
	}
	return (0);
}
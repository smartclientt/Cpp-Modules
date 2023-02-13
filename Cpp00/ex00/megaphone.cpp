#include <iostream>

using std::endl;
using std::cout;
using std::string;

int main(int ac, char **av)
{
	int			i;
	int 		j;
	string		str;

	if (ac >= 2)
	{
		for(i = 1; av[i]; i++)
			for(j = 0; av[i][j]; j++)
				str += toupper(av[i][j]);
		cout << str << endl;
	}
	else if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	return (0);
}
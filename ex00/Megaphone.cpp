#include<iostream>

int main(int ac, char **av){
	if (ac > 1)
	{
		int i = 1;
		int j;
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				if (av[i][j] >= 97 && av[i][j] <= 122)
					av[i][j] -= 32;
				std::cout<< av[i][j];
				j++;
			}
			i++;
		}
		std::cout<< std::endl;
	}
	else
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}

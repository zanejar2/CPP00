#include "PhoneBook.hpp"

int main()
{	
	PhoneBook pb;

	std::cout<< "*** Welcome to our phonebook ***"<< std::endl;
	while (1)
	{
		std::string option;
		while (option.empty())
		{
			std::cout<< ">> Enter an option (ADD / SEARCH / EXIT): ";
			std::getline (std::cin, option);
			if (std::cin.eof())
				exit(0);
		}
		if (!option.compare("ADD"))
			pb.add_contact();
		else if (!option.compare("SEARCH"))
			pb.search_contact();
		else if (!option.compare("EXIT"))
		{	
			std::cout<< "Thank you for using our phonebook :)"<< std::endl;
			exit(0);
		}
		else
			std::cout<< ">> Invalid option, please enter a valid one"<< std::endl;
	}
	return 0;
}
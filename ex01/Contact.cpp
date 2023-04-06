#include "Contact.hpp"

Contact::Contact()
{
	contact_infos[0] = "First name: ";
	contact_infos[1] = "Last name: ";
	contact_infos[2] = "Nickname: ";
	contact_infos[3] = "Phone number: ";
	contact_infos[4] = "Darkest secret: ";
}

void	Contact::add_contact()
{
	for (int i = 0; i < 5 ; i++)
	{
		contact_content[i].clear();
		while (contact_content[i].empty())
		{	
			std::cout << contact_infos[i];
			std::getline (std::cin, contact_content[i]);
			if (std::cin.eof())
				exit(0);
		}
	}
}


std::string Contact::get_contact_fn()
{
	return contact_content[0];
}

std::string Contact::get_contact_ln()
{
	return contact_content[1];
}

std::string Contact::get_contact_nick()
{
	return contact_content[2];
}

std::string Contact::get_contact_phone()
{
	return contact_content[3];
}

std::string Contact::get_contact_secret()
{
	return contact_content[4];
}
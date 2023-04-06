#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	count = 0;
}

void PhoneBook::add_contact()
{
	contact_list[index].add_contact();
	index++;
	if (index == 8)
		index = 0;
	if (count < 8)
		count++;
}


int PhoneBook::print_contacts()
{
	if (count == 0){
		std::cout<< "You have no saved contacts"<< std::endl;
		return 0;
	}	
	int i = 0;
	std::cout<< "   Index  |first name|last name |nickname "<< std::endl;
	while (i < count)
	{
		std::cout<<"     "<< i << "    |"\
		<< std::left;
		if (contact_list[i].get_contact_fn().length()>10)
			std::cout<< contact_list[i].get_contact_fn().substr(0,9)<<".|";
		else
			std::cout<< std::setw(10)<< contact_list[i].get_contact_fn()<<"|";
		if (contact_list[i].get_contact_ln().length()>10)
			std::cout<< contact_list[i].get_contact_ln().substr(0,9)<<".|";
		else
			std::cout<< std::setw(10)<< contact_list[i].get_contact_ln()<<"|";
		if (contact_list[i].get_contact_nick().length()>10)
			std::cout<< contact_list[i].get_contact_nick().substr(0,9)<<"."<< std::endl;
		else
			std::cout<< std::setw(10)<< contact_list[i].get_contact_nick()<< std::endl;
		i++;
	}
	return 1;
}

std::string check_index()
{
	std::string ind;
	while (ind.empty())
	{	
		std::cout<< "Contact index: ";
		std::getline (std::cin, ind);
		if (std::cin.eof())
				exit(0);
		if (ind.empty())
			continue;
		if (ind.compare("0") && ind.compare("1") && ind.compare("2") && ind.compare("3") \
		&& ind.compare("4") && ind.compare("5") && ind.compare("6") && ind.compare("7"))
			std::cout<< "Wrong index, please choose a number between 0 and 7"<<std::endl;
		else 
			return ind;
		ind.erase();
	}
	return ind;
}

void PhoneBook::print_contact_infos(int ind)
{
	if (ind >= count)
	{	
		std::cout<<"Contact not found"<< std::endl;
		return;
	}
	std::cout<< "First name: "<< contact_list[ind].get_contact_fn()<< std::endl;
	std::cout<< "Last name: "<< contact_list[ind].get_contact_ln()<< std::endl;
	std::cout<< "Nickname: "<< contact_list[ind].get_contact_nick()<< std::endl;
	std::cout<< "Phone number: "<< contact_list[ind].get_contact_phone()<< std::endl;
	std::cout<< "Darkest secret: "<< contact_list[ind].get_contact_secret()<< std::endl;
}

void PhoneBook::search_contact()
{
	if (!print_contacts())
		return;
	std::string i = check_index();
	int ind = std::atoi(i.c_str());
	print_contact_infos(ind);
}
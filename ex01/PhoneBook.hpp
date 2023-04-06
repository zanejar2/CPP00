#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include<iostream>
#include<iomanip>
#include<string>

class PhoneBook {

private :
	Contact contact_list[8];
	int index;
	int count;

public :
	PhoneBook();
	void add_contact();
	void search_contact();
	int print_contacts();
	void print_contact_infos(int ind);	
};

#endif

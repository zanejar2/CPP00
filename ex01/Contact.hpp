#ifndef CONTACT_H
#define CONTACT_H
#include<iostream>
#include<iomanip>

class Contact {

private : 
	std::string contact_infos[5];
	std::string contact_content[5];

public :
	Contact();
	void add_contact();
	std::string get_contact_fn();
	std::string get_contact_ln();
	std::string get_contact_nick();
	std::string get_contact_phone();
	std::string get_contact_secret();
};
#endif

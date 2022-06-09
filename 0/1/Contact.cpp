#include "./Contact.hpp"

Contact::Contact(void)
{
	std::cout << "CONSTRUCTEUR" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "DESTRUCTEUR" << std::endl;
}

void	Contact::fill_contact(void)
{
	std::cout << "Enter your first name :";
	std::getline(std::cin, this->first_name);
	std::cout << "you have write : " << this->first_name << std::endl;
	std::cout << "Enter your last name :";
	std::getline(std::cin, this->last_name);
	std::cout << "you have write : " << this->last_name << std::endl;
	std::cout << "Enter your nickname :";
	std::getline(std::cin, this->nickname);
	std::cout << "you have write : " << this->nickname << std::endl;
	std::cout << "Enter your phone number :";
	std::getline(std::cin, this->phone_number);
	std::cout << "you have write : " << this->phone_number << std::endl;
	std::cout << "Enter your darkest secret :";
	std::getline(std::cin, this->darkest_secret);	
	std::cout << "you have write : " << this->darkest_secret << std::endl;
}

void	Contact::search_display(int index)
{
	std::string	tmp;

	tmp = (char *)index;
	tmp.resize(10);
	std::cout << tmp << "|";
	if (this->first_name.size() > 10)
	{
		tmp = this->first_name;
		tmp.resize(10);
		std::cout << tmp << "|";
	}
	else 
		std::cout << this->first_name << "|";
	std::cout << this->last_name << "|";
	std::cout << this->nickname << std::endl;
}
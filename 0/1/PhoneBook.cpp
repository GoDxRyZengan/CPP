#include "PhoneBook.hpp"

int		PhoneBook::nb_contact = 0;

PhoneBook::PhoneBook(void)
{
	std::cout << "CONSTRUCTEUR" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "DESTRUCTEUR" << std::endl;
}

void	PhoneBook::set_add_contact(void)
{
	PhoneBook::contact[PhoneBook::nb_contact].fill_contact();
	PhoneBook::nb_contact += 1;
}

void	PhoneBook::display_all_contact(void)
{
	int	i = 0;
	while (i < PhoneBook::nb_contact && i < 8)
	{
		PhoneBook::contact[i].search_display(i);
		i++;
	}
}
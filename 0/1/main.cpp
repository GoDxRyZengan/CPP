#include <iostream>
#include "./PhoneBook.hpp"
#include "./Contact.hpp"

int	main()
{
	PhoneBook	rep;
	std::string	tmp;

	while (1)
	{
		std::cout << "Enter your command :";
		std::getline(std::cin, tmp);
		if (tmp.compare("EXIT") == 0)
			break;
		else if (tmp.compare("ADD") == 0)
		{
			rep.set_add_contact();
		}
		else if (tmp.compare("SEARCH") == 0)
		{
			rep.display_all_contact();
		}
		else
			std::cout << "Nothing" << std::endl;
	}

	return (0);
}
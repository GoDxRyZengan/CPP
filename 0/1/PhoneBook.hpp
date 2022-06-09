#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "./Contact.hpp"

class PhoneBook
{

public:

	static int	nb_contact;

	PhoneBook(void);
	~PhoneBook(void);

	void	set_add_contact(void);
	void	search(char *str);
	void	display_all_contact(void);

private:

	Contact		contact[8];

};


#endif

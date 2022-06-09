#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <stdio.h>


class Contact
{

public:

	Contact(void);
	~Contact(void);

	void	fill_contact(void);
	void	search_display(int index);

private:

	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		phone_number;
	std::string		darkest_secret;

};

#endif

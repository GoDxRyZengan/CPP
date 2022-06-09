#include <iostream>

using namespace std;

char	*all_maj(char *str)
{
	int	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		while (argc > i)
		{
			cout << all_maj(argv[i]);
			i++;
		}
		cout << endl;
	}
	return (0);
}
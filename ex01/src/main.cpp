#include <iostream>
#include <iter.hpp>

using	std::cout;
using	std::endl;

static void	putChar(char* c)
{
	cout.put(*c);
}

static void	putCharUpcase(char* c)
{
	cout.put(std::toupper(*c));
}

static void	timesTen(int* i)
{
	cout << *i * 10 << ", ";
}

int			main()
{
	char	charArray[] = {'a', 'b', 'c', 'd', 'e'};
	int		intArray[] = {0, 1, 2, 3, 4};

	cout << "putChar charArray" << endl;

	iter(charArray, sizeof(charArray) / sizeof(*charArray), &putChar);

	cout << endl << endl << "putCharUpcase charArray" << endl;

	iter(charArray, sizeof(charArray) / sizeof(*charArray), &putCharUpcase);

	cout << endl << endl << "timesTen intArray" << endl;

	iter(intArray, sizeof(intArray) / sizeof(*intArray), &timesTen);

	cout << endl;
	return 0;
}

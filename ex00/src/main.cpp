#include <iostream>
#include <string>

#include <utils.hpp>

using	std::cout;
using	std::endl;
using	std::string;

template<typename T>
void	testSwap(T& a, T& b, string const& label)
{
	cout << label << "A: "	<< a << ", " << label << "B: " << b << endl;

	cout << "swap("<< label << "A, " << "int" << "B)" << endl;
	utils::swap(a, b);

	cout << label << "A: "	<< a << ", " << label << "B: " << b << endl
		<< endl;
}

template<typename T>
void	testMin(T const& a, T const& b, string const& label)
{
	cout << label << "A: " << a << ", " << label << "B: " << b << endl;

	cout << "min("<< label << "A, " << "int" << "B) = " << utils::min(a, b)
		<< endl << endl;
}

template<typename T>
void	testMax(T const& a, T const& b, string const& label)
{
	cout << label << "A: " << a << ", " << label << "B: " << b << endl;

	cout << "max("<< label << "A, " << "int" << "B) = " << utils::max(a, b)
		<< endl << endl;
}

int	main()
{

	char	charA = 'a';
	char	charB = 'b';

	int		intA = 0;
	int		intB = 1;

	double	doubleA = 1.0;
	double	doubleB = 2.0;

	string	strA = "abcd";
	string	strB = "abce";

	testSwap(charA, charB, "char");
	testSwap(intA, intB, "int");
	testSwap(doubleA, doubleB, "double");
	testSwap(strA, strB, "str");

	testMin(charA, charB, "char");
	testMin(intA, intB, "int");
	testMin(doubleA, doubleB, "double");
	testMin(strA, strB, "str");

	testMax(charA, charB, "char");
	testMax(intA, intB, "int");
	testMax(doubleA, doubleB, "double");
	testMax(strA, strB, "str");

	return 0;
}

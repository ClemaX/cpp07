#include <Array.hpp>

int	main()
{
	using	std::cout;
	using	std::endl;

	Array<int>	array(5);

	for (unsigned i = 0; i < array.size(); i++)
		array[i] = i;

	for (unsigned i = 0; i < array.size(); i++)
		cout << array[i] << ", ";
	cout << endl << "Trying to overflow array..." << endl;
	try { array[array.size()] = 0; }
	catch(const Array<int>::OutOfBoundsException& e)
	{ std::cout << "Caught OutOfBoundsException: " <<  e.what() << endl; }

	return 0;
}

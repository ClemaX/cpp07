#pragma once

#include <iostream>
#include <string>

template<typename T>
class Array
{
private:
	unsigned				dataSize;
	T*						data;

public:
	class	OutOfBoundsException	:	public std::exception
	{
	public:
		char const*	what() const throw()
		{ return "Array subsript out of bounds!"; }
	};

	/**
	 * @brief Construct a new empty Array of type T.
	 *
	 * @tparam	T	The array's data type.
	 */
	Array()
		:	dataSize(0),
			data(NULL)
	{
	}

	/**
	 * @brief Destroy the Array
	 *
	 * @tparam	T	The array's data type.
	 */
	~Array()
	{
		delete[] data;
	}

	/**
	 * @brief Construct a new Array< T>:: Array object
	 *
	 * @tparam	T	The array's data type.
	 * @param	n	The array's initial element count.
	 */
	Array(unsigned n)
		:	dataSize(n),
			data(new T[dataSize])
	{
	}

	/**
	 * @brief Construct a copy of the src array.
	 *
	 * @tparam	T	The array's data type.
	 * @param	src	The object to copy.
	 */
	Array(Array<T> const& src)
		:	dataSize(src.dataSize),
			data(new T[dataSize])
	{
		for (unsigned i = 0; i < dataSize; i++)
			data[i] = src.data[i];
	}

	inline T&	operator[](unsigned index) throw(OutOfBoundsException)
	{
		if (index < dataSize)
			return data[index];
		else
			throw OutOfBoundsException();
	}

	/**
	 * @brief Assign the source array's values to the array.
	 *
	 * @tparam T			The array's data type.
	 * @param src			The source array.
	 * @return Array<T>&	A reference to the current array.
	 */
	Array<T>&		operator=(Array<T> const& src)
	{
		if (dataSize != src.dataSize)
		{
			delete[] data;
			data = new T[src.dataSize];
		}
		for (unsigned i = 0; i < dataSize; i++)
			data[i] = src.data[i];
		return *this;
	}

	inline unsigned	size() const { return dataSize; };
};

template<typename T>
std::ostream&	operator<<(std::ostream& os, Array<T> const& src)
{
	os << "Array (" << src.size() << ")";
	return os;
}

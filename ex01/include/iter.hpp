#pragma once

#include <cstddef>

template<typename T>
void	iter(T* array, size_t length, void (*fun)(T* elem))
{
	for (size_t index = 0; index < length; index++)
		fun(&array[index]);
}

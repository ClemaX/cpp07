#pragma once

namespace utils
{
	template<typename T>
	inline void	swap(T& a, T& b)
	{
		T const oldA = a;

		a = b;
		b = oldA;
	}

	template<typename T>
	inline T const&	min(T const& a, T const& b)
	{ return (b <= a) ? b : a; }

	template<typename T>
	inline T const&	max(T const& a, T const& b)
	{ return (b >= a) ? b : a; }
}

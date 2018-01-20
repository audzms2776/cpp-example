#pragma once
#include <ostream>
#include <boost/functional/hash.hpp>

class Car
{
public:

	Car() = default;

	friend std::ostream& operator<<(std::ostream& os, const Car& obj)
	{
		return os;
	}

	friend std::size_t hash_value(const Car& obj)
	{
		std::size_t seed = 0x6332CC04;
		return seed;
	}

	friend void swap(Car& lhs, Car& rhs) noexcept
	{
		using std::swap;
	}
};

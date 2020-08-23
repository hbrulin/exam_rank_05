#include "Warlock.hpp"

int main(void)
{
	std::cout << "--- Constructors:\n";
	Warlock richard("Richard", "Master of the Universe");

	std::cout << "--- Introduce\n";
	richard.introduce();

	std::cout << "--- Set Title\n";
	richard.setTitle("Master of the Earth");
	richard.introduce();

	return(0);
}
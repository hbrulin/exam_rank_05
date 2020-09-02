#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

int main(void)
{
	Warlock richard ("Richard", "Master of the Universe");
	Fwoosh *air = new Fwoosh();

	Dummy dumb;

	richard.launchSpell("Fwoosh", dumb);

	richard.learnSpell(air);

	
	richard.launchSpell("Fwoosh", dumb);

	richard.forgetSpell("Fwoosh");

	
	richard.launchSpell("Fwoosh", dumb);


	return 0;
}

#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"


int main(void)
{
	Warlock richard("Richard", "Master of the Universe");
	Fwoosh *spell = new Fwoosh();
	Dummy target;

	richard.launchSpell("Fwoosh", target);
	richard.learnSpell(spell);
	
	richard.launchSpell("Fwoosh", target);
	
	richard.forgetSpell("Fwoosh");

	
	richard.launchSpell("Fwoosh", target);
	
	return 0;

}

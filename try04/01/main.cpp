#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

int main(void)
{
	Warlock richard("Richard", "gold digger");

	Fwoosh *spell = new Fwoosh();

	Dummy target;

	richard.launchSpell("Fwoosh", target);
	richard.learnSpell(spell);
	
	richard.launchSpell("Fwoosh", target);
	richard.forgetSpell("Fwoosh");
	
	
	richard.launchSpell("Fwoosh", target);

	richard.launchSpell("Fwh", target);

	return 0;



}

#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

int main(void)
{
	Warlock richard("richard", "ouioui");
	
	Fwoosh *air = new Fwoosh();

	Dummy dumb;

	richard.launchSpell("Fwoosh", dumb);
	richard.learnSpell(air);
	richard.launchSpell("Fwoosh", dumb);
	richard.forgetSpell("Fwoosh");

	richard.launchSpell("Fwoosh", dumb);
	richard.forgetSpell("Fwoosh");
}

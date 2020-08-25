#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

int main(void)
{
	Warlock richard("Richard", "Master of the Universe");
	//richard.introduce();
	//richard.setTitle("Master tout court");
	//richard.introduce();

	Fwoosh *spell = new Fwoosh();
	Dummy target;

	richard.launchSpell("Fwoosh", target);
	richard.learnSpell(spell);

	richard.launchSpell("Fwoosh", target);
	richard.forgetSpell("Fwoosh");

	
	richard.launchSpell("Fwoosh", target);
	
	richard.launchSpell("Fw", target);
	richard.forgetSpell("gg");
}

#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "Spellbook.hpp"
#include "TargetGenerator.hpp"
#include "Brickwall.hpp"

int main(void)
{
	Warlock richard("Richard", "Master of the Universe");
	Fwoosh *air = new Fwoosh();
	Fireball *fire = new Fireball();
	Polymorph *water = new Polymorph();

	richard.learnSpell(air);
	richard.learnSpell(fire);
	richard.learnSpell(water);

	Dummy *target = new Dummy();
	Brickwall *wall = new Brickwall();

	TargetGenerator targen;
	targen.learnTargetType(target);
	targen.learnTargetType(wall);
	
	richard.launchSpell("Fwoosh", *targen.createNewTarget("Dummy Practice"));
			
	richard.launchSpell("Fireball", *targen.createNewTarget("Brickwall Practice"));
	richard.launchSpell("Polymorph", *targen.createNewTarget("Dummy Practice"));
			
			
	richard.forgetSpell("Fwoosh");

	richard.launchSpell("Fwoosh", *targen.createNewTarget("Dummy Practice"));
			
	richard.launchSpell("Fghjj", *targen.createNewTarget("Dummy Practice"));
	richard.launchSpell("Fireball", *targen.createNewTarget("fghje"));
			
			
	
	return 0;

}

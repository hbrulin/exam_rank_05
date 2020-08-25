#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "Brickwall.hpp"
#include "Spellbook.hpp"
#include "TargetGenerator.hpp"


int main(void)
{
	Warlock richard("Richard", "Master of the Universe");

	Fwoosh *air = new Fwoosh();
	Fireball *fire = new Fireball();
	Polymorph *poly = new Polymorph();

	richard.learnSpell(air);
	richard.learnSpell(fire);
	richard.learnSpell(poly);

	
	Dummy *dumb = new Dummy();
	Brickwall *dumber = new Brickwall();

	TargetGenerator targen;
	targen.learnTargetType(dumb);
	targen.learnTargetType(dumber);


	richard.launchSpell("Fwoosh", *targen.createTarget("Dummy Practice"));
	
	richard.launchSpell("Fireball", *targen.createTarget("Wall Practice"));
	richard.launchSpell("Polylmorph", *targen.createTarget("Dummy Practice"));
	
	
	richard.forgetSpell("Fwoosh");
	targen.forgetTargetType("Wall Practice");


	richard.launchSpell("Fwoosh", *targen.createTarget("Dummy Practice"));
	richard.launchSpell("Fireball", *targen.createTarget("Wall Practice"));
	
	
}

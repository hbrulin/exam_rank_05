#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "Brickwall.hpp"
#include "TargetGenerator.hpp"

int main(void)
{
	Warlock richard("richard", "ouioui");
	
	Fwoosh *air = new Fwoosh();
	Fireball *fire = new Fireball();
	Polymorph *poly = new Polymorph();;

	Dummy *dumb = new Dummy();
	Brickwall *brick = new Brickwall();

	TargetGenerator targen;

	richard.launchSpell("Fwoosh", *targen.createTarget("Dummy Practice"));

	richard.learnSpell(air);
	richard.learnSpell(poly);
	richard.learnSpell(fire);

	
	richard.launchSpell("Fwoosh", *targen.createTarget("Dummy Practice"));

	targen.learnTargetType(dumb);
	targen.learnTargetType(brick);		
		
	richard.launchSpell("Fwoosh", *targen.createTarget("Dummy Practice"));
	richard.launchSpell("Fireball", *targen.createTarget("Brickwall Practice"));
	richard.launchSpell("Polymorph", *targen.createTarget("Dummy Practice"));

	richard.forgetSpell("Fwoosh");

	richard.launchSpell("Fwoosh", *targen.createTarget("Dummy Practice"));

	targen.forgetTargetType("Dummy Practice");

	richard.launchSpell("Polymorph", *targen.createTarget("Dummy Practice"));

	system("leaks a.out");
}



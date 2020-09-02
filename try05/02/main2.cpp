#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "Fireball.hpp"
#include "Brickwall.hpp"
#include "Polymorph.hpp"
#include "TargetGenerator.hpp"

int main(void)
{
	Warlock richard("Richard", "gold digger");

	Fwoosh *air = new Fwoosh();
	Fireball *fire = new Fireball();
	Polymorph *poly = new Polymorph();

	Dummy *target = new Dummy();
	BrickWall *brick = new BrickWall();

	TargetGenerator targen;

	richard.launchSpell("Fwoosh", *targen.createTarget("Dummy Practice"));


	targen.learnTargetType(target);
	targen.learnTargetType(brick);
	
	richard.launchSpell("Fwoosh", *targen.createTarget("Dummy Practice"));
	
	std::cout << "work from here\n";

	richard.learnSpell(air);
	richard.learnSpell(fire);
	richard.learnSpell(poly);
	
	richard.launchSpell("Fwoosh", *targen.createTarget("Dummy Practice"));
	richard.launchSpell("Fireball", *targen.createTarget("BrickWall Practice"));
	richard.launchSpell("Polymorph", *targen.createTarget("Dummy Practice"));

	std::cout << "no more\n";

	richard.forgetSpell("Fwoosh");

	richard.launchSpell("Fwoosh", *targen.createTarget("Dummy Practice"));
	
	targen.forgetTargetType("Dummy Practice");

	
	richard.launchSpell("Fireball", *targen.createTarget("Dummy Practice"));
	
	system("leaks a.out");	
	return 0;



}

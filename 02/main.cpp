#include "Warlock.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "TargetGenerator.hpp"

int main(void)
{
	Warlock richard("Aang", "The Avatar");
	
	std::cout << "declare spells\n";
	Fwoosh *air = new Fwoosh();
	Polymorph *water = new Polymorph();
	Fireball *fire = new Fireball();

	std::cout << "learnspells\n";
	richard.learnSpell(water);
	richard.learnSpell(fire);
	richard.learnSpell(air);
	richard.forgetSpell("Fwoosh");
	richard.learnSpell(air);
	
	std::cout << "declare targets\n";
	Dummy *hay = new Dummy();
	BrickWall *brick = new BrickWall();

	std::cout << "target generator learning\n";
	TargetGenerator tarGen;
	tarGen.learnTargetType(hay);
	tarGen.learnTargetType(brick);

	std::cout << "BATTLE!\n";
	richard.launchSpell("Fwoosh", *tarGen.createTarget("Dummy Practice"));
	richard.launchSpell("Fireball", *tarGen.createTarget("BrickWall Practice"));
	richard.launchSpell("Polymorph", *tarGen.createTarget("Dummy Practice"));

	std::cout << "forget Fwoosh\n";
	richard.forgetSpell("Fwoosh");
	richard.launchSpell("Fwoosh", *tarGen.createTarget("Dummy Practice"));

	std::cout << "non existent\n";
	richard.launchSpell("blabla", *tarGen.createTarget("Dummy Practice"));
	richard.launchSpell("Fwoosh", *tarGen.createTarget("blabla"));

	return(0);
}
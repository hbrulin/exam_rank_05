#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

int main(void)
{
	Warlock richard("Richard", "Master of the Universe");
	Fwoosh *spell = new Fwoosh();
	Dummy targetPractice;

	std::cout << "not learned\n";
	richard.launchSpell("Fwoosh", targetPractice);

	std::cout << "learned\n";
	richard.learnSpell(spell);
	richard.launchSpell("Fwoosh", targetPractice);

	std::cout << "forget\n";
	richard.forgetSpell("Fwoosh");
	richard.launchSpell("Fwoosh", targetPractice);

	std::cout << "non existant spells\n";
	richard.launchSpell("boom", targetPractice);
	richard.forgetSpell("boom");
}
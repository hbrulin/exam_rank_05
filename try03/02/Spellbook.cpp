#include "Spellbook.hpp"

Spellbook::Spellbook() {}

Spellbook::~Spellbook() {	
	std::vector<ASpell*>::iterator ite = spells.end();
	for (std::vector<ASpell*>::iterator it = spells.begin(); it != ite; ++it)
	{
		delete *it;
	}
	spells.clear();
}

void Spellbook::learnSpell(ASpell *spell) //NO CONST, pointer
{
 	if (spell)
	{
		std::vector<ASpell*>::iterator ite = spells.end();
		for (std::vector<ASpell*>::iterator it = spells.begin(); it != ite; ++it)
		{
			if (spell->getName() == (*it)->getName())
				return;
		}
		spells.push_back(spell->clone());
	}

}

void Spellbook::forgetSpell(std::string const &spellName) {

	std::vector<ASpell*>::iterator ite = spells.end();
	for (std::vector<ASpell*>::iterator it = spells.begin(); it != ite; ++it)
	{
		if ((*it)->getName() == spellName)
		{
			delete *it;
			it = spells.erase(it);
		}
	}

}

ASpell *Spellbook::generateSpell(std::string const &spellName) {

	std::vector<ASpell*>::iterator ite = spells.end();
	for (std::vector<ASpell*>::iterator it = spells.begin(); it != ite; ++it)
	{

		if ((*it)->getName() == spellName)
		{
			return (*it); //no cloning
		}
	}
	return(nullptr);
}











	

#include "Spellbook.hpp"

Spellbook::Spellbook() {}

Spellbook::~Spellbook() {
	std::vector<ASpell*>::iterator ite = _spells.end();
	for (std::vector<ASpell*>::iterator it = _spells.begin() ; it != ite; ++it)
		delete *it;
	_spells.clear(); //dont forget
}

void Spellbook::learnSpell(ASpell *spell) {
	if (spell)
	{
		std::vector<ASpell*>::iterator ite = _spells.end();
		for (std::vector<ASpell*>::iterator it = _spells.begin(); it != ite; ++it)
		{
			if ((*it)->getName() == spell->getName())
				return;
		}
		_spells.push_back(spell->clone());
	}
}

void Spellbook::forgetSpell(std:: string const &spellName) {
	std::vector<ASpell*>::iterator ite = _spells.end();
	for (std::vector<ASpell*>::iterator it = _spells.begin(); it != ite; ++it)
	{	
		if ((*it)->getName() == spellName)
		{
			delete *it;
			it = _spells.erase(it);
		}
	}
}

ASpell *Spellbook::generateSpell(std::string const &spellName) {
	std::vector<ASpell*>::iterator ite = _spells.end();
	for (std::vector<ASpell*>::iterator it = _spells.begin(); it != ite; ++it )
	{
		if ((*it)->getName() == spellName)
		{
			return (*it);
		}
	}
	return(nullptr);
}













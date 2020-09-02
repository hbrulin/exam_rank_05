#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title): _name(name), _title(title) {
	std::cout << _name << ": What a boring day\n";
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done\n";

	std::vector<ASpell*>::iterator ite = spells.end();
	for (std::vector<ASpell*>::iterator it = spells.begin(); it != ite; ++it)
		delete *it;
	spells.clear();
}

std::string const &Warlock::getName(void) const {
	return _name;
}

std::string const &Warlock::getTitle(void) const {
	return _title;
}

void Warlock::setTitle(std::string const &title) {
	_title = title;
}

void Warlock::introduce(void) const {
	std::cout << _name << ": My name is " << _name << ", " << _title << "!\n";
}

void Warlock::learnSpell(ASpell *spell) {
	if (spell)
	{
		std::vector<ASpell*>::iterator ite = spells.end();
		for (std::vector<ASpell*>::iterator it = spells.begin(); it != ite; ++it)
		{
			if ((*it)->getName() == spell->getName())
				return;
		}
		spells.push_back(spell);
	}
}
void Warlock::forgetSpell(std::string const &spellName) {
	std::vector<ASpell*>::iterator ite = spells.end();
	for (std::vector<ASpell*>::iterator it = spells.begin(); it != ite; ++it)
	{
		if ((*it)->getName() == spellName) {
			delete *it;
			it = spells.erase(it); //attention, dans la condition
		}
	}
}


void Warlock::launchSpell(std::string const &spellName, ATarget const &target) {
	std::vector<ASpell*>::iterator ite = spells.end();
	for (std::vector<ASpell*>::iterator it = spells.begin(); it != ite; ++it)
	{
		if ((*it)->getName() == spellName)
			(*it)->launch(target);
	}

}










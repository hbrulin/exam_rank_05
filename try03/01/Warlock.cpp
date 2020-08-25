#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title): _name(name), _title(title) {
	std::cout << _name << ": What a boring day\n";
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!\n";
}

std::string const &Warlock::getName() const {
	return(_name);
}

std::string const &Warlock::getTitle() const {
	return(_title);
}

void Warlock::setTitle(std::string const &title) {
	_title = title;
}

void Warlock::introduce() const {
	std::cout << _name << ": My name is " << _name << ", " << _title << "!\n";
}

void Warlock::learnSpell(ASpell *spell) //NO CONST, pointer
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

void Warlock::forgetSpell(std::string const &spellName) {

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

void Warlock::launchSpell(std::string const &spellName, ATarget const & target) {

	std::vector<ASpell*>::iterator ite = spells.end();
	for (std::vector<ASpell*>::iterator it = spells.begin(); it != ite; ++it)
	{

		if ((*it)->getName() == spellName)
		{
			(*it)->launch(target);
			return;
		}
	}

}











	

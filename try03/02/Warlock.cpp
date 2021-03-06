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
 	spellbook.learnSpell(spell);

}

void Warlock::forgetSpell(std::string const &spellName) {

	spellbook.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string const &spellName, ATarget const & target) {

	ASpell *spell = spellbook.generateSpell(spellName);
	const ATarget *tar = &target; //fixing crash if bullshit target
	if (spell && tar)
		spell->launch(target);
}











	

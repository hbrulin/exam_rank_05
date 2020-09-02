#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string const &name, std::string const &effects): _name(name), _effects(effects) {}

ASpell::ASpell(ASpell const &other): _name(other._name), _effects(other._effects) {}

ASpell::~ASpell() {}

ASpell &ASpell::operator=(ASpell const &other) {
	_name = other._name;
	_effects = other._effects;
	return(*this);
}

std::string const &ASpell::getName(void) const {
	return _name;
}

std::string const &ASpell::getEffects(void) const {
	return _effects;
}

void ASpell::launch(ATarget const &target) const {
	target.getHitBySpell(*this);
}
		
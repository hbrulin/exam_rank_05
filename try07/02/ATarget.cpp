#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string type): _type(type) {}
		
ATarget::ATarget(ATarget const &other): _type(other._type) {}

ATarget &ATarget::operator=(ATarget const &other) {
	_type = other._type;
	return(*this);
}

ATarget::~ATarget() {}

std::string const &ATarget::getType(void) const {
	return _type;
}

void ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << _type << " was " << spell.getEffects() << "!\n";
}


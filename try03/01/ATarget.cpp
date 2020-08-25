#include "ATarget.hpp"

ATarget::ATarget(): _type() {
}

ATarget::ATarget(std::string const &type): _type(type) {
}
	
ATarget::ATarget(ATarget const &other): _type(other._type) {
}

ATarget::~ATarget() {}
		
ATarget &ATarget::operator=(ATarget const &other) {
	_type = other._type;
	return(*this);
}

std::string const &ATarget::getType(void) const {
	return(_type);
}

void ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << _type << " has been " << spell.getEffects() << "!\n";
}

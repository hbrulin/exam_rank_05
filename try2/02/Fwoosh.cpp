#include "Fwoosh.hpp"


Fwoosh::Fwoosh(): ASpell("Fwoosh", "Fwooshed") {}

Fwoosh::~Fwoosh() {}

ASpell *Fwoosh::clone(void) const {
	return(new Fwoosh(*this));
}




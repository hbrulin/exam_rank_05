
#include "Fwoosh.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh() {}

Fwoosh *Fwoosh::clone(void) const {
	return (new Fwoosh(*this));
}



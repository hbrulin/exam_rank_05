
#include "Polymorph.hpp"

Polymorph::Polymorph(): ASpell("Polymorph", "turned into a sheep") {}

Polymorph::~Polymorph() {}

Polymorph *Polymorph::clone(void) const {
	return (new Polymorph(*this));
}



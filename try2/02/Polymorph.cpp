#include "Polymorph.hpp"


Polymorph::Polymorph(): ASpell("Polymorph", "was turned into a sheep") {}

Polymorph::~Polymorph() {}

ASpell *Polymorph::clone(void) const {
	return(new Polymorph(*this));
}




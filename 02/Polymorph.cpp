#include "Polymorph.hpp"

Polymorph::Polymorph(): ASpell("Polymorph", "turned to a shepp") {
}

Polymorph::~Polymorph() {
}

ASpell *Polymorph::clone(void) const {
	return(new Polymorph(*this));
}
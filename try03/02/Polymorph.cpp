#include "Polymorph.hpp"


Polymorph::Polymorph(): ASpell("Polymorph", "turned into a sheep") {
}

Polymorph::~Polymorph() {}

ASpell *Polymorph::clone() const {
	return (new Polymorph(*this)); //use of copy constructor
}


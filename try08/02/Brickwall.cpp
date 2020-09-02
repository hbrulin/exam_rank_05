
#include "Brickwall.hpp"

Brickwall::Brickwall(): ATarget("Brickwall Practice") {}

Brickwall::~Brickwall() {}

Brickwall *Brickwall::clone(void) const {
	return (new Brickwall(*this));
}



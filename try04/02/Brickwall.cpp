#include "Brickwall.hpp"

Brickwall::Brickwall(): ATarget("Brickwall Practice") {}

Brickwall::~Brickwall() {}

ATarget *Brickwall::clone(void) const {
	return(new Brickwall(*this));

}

#include "Brickwall.hpp"
		

Brickwall::Brickwall(): ATarget("Wall Practice") {} //dont forget the cobnstrucor of ATArget

Brickwall::~Brickwall() {}

ATarget *Brickwall::clone(void) const {
	return(new Brickwall(*this)); //dont forget
}


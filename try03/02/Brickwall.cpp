#include "Brickwall.hpp"


Brickwall::Brickwall(): ATarget("Brickwall Practice") {
}
Brickwall::~Brickwall() {}

ATarget *Brickwall::clone() const {
	return (new Brickwall(*this)); //use of copy constructor
}


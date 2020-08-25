#include "Dummy.hpp"
		

Dummy::Dummy(): ATarget("Dummy Practice") {} //dont forget the cobnstrucor of ATArget

Dummy::~Dummy() {}

ATarget *Dummy::clone(void) const {
	return(new Dummy(*this)); //dont forget
}


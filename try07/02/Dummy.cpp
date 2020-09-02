#include "Dummy.hpp"

Dummy::Dummy(): ATarget("Dummy") {}
Dummy::~Dummy() {}
ATarget *Dummy::clone(void) const {
	return (new Dummy(*this));
}



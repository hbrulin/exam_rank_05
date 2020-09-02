#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include "ASpell.hpp"

class Brickwall: public ATarget {

	public:
		Brickwall();
		virtual ~Brickwall();
		ATarget *clone(void) const;

};

#endif

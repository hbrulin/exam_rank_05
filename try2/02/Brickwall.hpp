#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include "ATarget.hpp"

class Brickwall: public ATarget {

	public:
		Brickwall();
		virtual ~Brickwall();

		ATarget *clone(void) const;

};


#endif

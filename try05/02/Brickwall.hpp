#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall: public ATarget {

	public:
		BrickWall();
		virtual ~BrickWall();
	
		ATarget *clone(void) const;


};

#endif

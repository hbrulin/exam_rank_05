#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"

class Brickwall: public ATarget {

	//only 3 fts
	public:
		Brickwall();
		virtual ~Brickwall();

		ATarget *clone() const;
};



#endif

#ifndef DUMMY_HPP
# define DUMMY_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"

class Dummy: public ATarget {

	//only 3 fts
	public:
		Dummy();
		virtual ~Dummy();

		ATarget *clone() const;
};



#endif

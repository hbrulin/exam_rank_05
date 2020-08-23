#ifndef DUMMY_HPP
# define DUMMY_HPP

#include "ATarget.hpp"

class Dummy: public ATarget
{
	public:
		Dummy();
		virtual ~Dummy();

		ATarget *clone(void) const; //pas besoin de remettre virtual ici??

};


#endif
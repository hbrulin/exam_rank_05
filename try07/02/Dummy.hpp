#ifndef DUMMY_HPP
# define DUMMY_HPP

#include "ASpell.hpp"

class Dummy: public ATarget {

	public:
		Dummy();
		virtual ~Dummy();
		ATarget *clone(void) const;

};

#endif

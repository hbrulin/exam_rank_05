#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Polymorph: public ASpell {

	//only 3 fts
	public:
		Polymorph();
		virtual ~Polymorph();

		ASpell *clone() const;
};



#endif

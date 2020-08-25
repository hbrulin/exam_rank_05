#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fwoosh: public ASpell {

	//only 3 fts
	public:
		Fwoosh();
		virtual ~Fwoosh();

		ASpell *clone() const;
};



#endif

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fireball: public ASpell {

	//only 3 fts
	public:
		Fireball();
		virtual ~Fireball();

		ASpell *clone() const;
};



#endif

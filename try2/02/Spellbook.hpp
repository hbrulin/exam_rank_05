#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <vector> 
#include "ASpell.hpp"
#include "ATarget.hpp"

class Spellbook {

	private:	
		std::vector<ASpell*> _spells;

		Spellbook(Spellbook const &other);
		Spellbook &operator=(Spellbook const &other);

	public:
		Spellbook();
		
		virtual ~Spellbook();

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spellName);
		ASpell *generateSpell(std::string const &spellName);
};


#endif

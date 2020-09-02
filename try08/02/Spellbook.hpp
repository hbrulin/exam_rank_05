#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <vector>

class Spellbook {

	private:
		std::vector<ASpell*> spells;

		Spellbook(Spellbook const &other);
		Spellbook &operator=(Spellbook const &other);

	public:
		Spellbook();
		virtual ~Spellbook();
		
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spellName);
		ASpell *generateSpell(std::string spellName);


};


#endif

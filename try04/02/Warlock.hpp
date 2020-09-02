#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>
#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Spellbook.hpp"

class Warlock {

	private:
		std::string _name;
		std::string _title;

		Spellbook spellbook;

		Warlock();
		Warlock(Warlock const &other);
		Warlock &operator=(Warlock const &other);

	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		
		std::string const &getName(void) const;
		std::string const &getTitle(void) const;

		void setTitle(std::string const &title);

		void introduce(void) const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spellName);
		void launchSpell(std::string const &spellName, ATarget const &target);

};


#endif

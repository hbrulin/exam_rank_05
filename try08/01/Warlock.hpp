#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <vector>

class Warlock {

	private:
		std::string _name;
		std::string _title;

		std::vector<ASpell*> spells;

		Warlock();
		Warlock(Warlock const &other);
		Warlock &operator=(Warlock const &other);

	public:
		Warlock(std::string name, std::string title);
		virtual ~Warlock();
		
		std::string const &getName(void) const;
		std::string const &getTitle(void) const;

		void setTitle(std::string const &title);

		void introduce(void) const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spellName);
		void launchSpell(std::string spellName, ATarget const &target);


};


#endif

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

//everythins is const ref
class Warlock
{
	private:
		std::string _name;
		std::string _title;

		std::vector<ASpell*> spells;

		//2 private constructors and 1 assignment operator
		Warlock();
		Warlock(Warlock const &other); //copy constructor takes a ref
		Warlock &operator=(Warlock const &other); //idem for =

	public:
		//1 public constructor
		Warlock(std::string const &name, std::string const &title);

		virtual ~Warlock();

		//getters, return refs
		std::string const &getName(void) const;
		std::string const &getTitle(void) const;

		void setTitle(std::string const &title);

		void introduce(void) const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spellName);
		void launchSpell(std::string const &spellName, ATarget const &target);
};


#endif
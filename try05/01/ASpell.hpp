#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <string>
#include <iostream>

class ATarget;

class ASpell {

	private:
		std::string _name;
		std::string _effects;

	public:
		ASpell();
		ASpell(ASpell const &other);
		ASpell &operator=(ASpell const &other);
		ASpell(std::string const &name, std::string const &effects);
		virtual ~ASpell();

		std::string const &getName(void) const;
		std::string const &getEffects(void) const;

		void launch(ATarget const &target);
	
		virtual ASpell *clone(void) const = 0;


};

#include "ATarget.hpp"

#endif

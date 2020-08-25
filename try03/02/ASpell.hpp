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

		std::string const &getName() const;
		std::string const &getEffects() const;

		void launch(ATarget const &target) const; //dont forget word const

		virtual ASpell *clone() const = 0; //dont forget word virtual

};

#include "ATarget.hpp"

#endif

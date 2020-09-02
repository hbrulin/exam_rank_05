#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <string>
#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class TargetGenerator {

	private:
		std::vector<ATarget*> types;
		//Spellbook(Spellbook const &other);
		//Spellbook &operator=(Spellbook const &other);

	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *type);
		void forgetTargetType(std::string const &name);
		ATarget *createTarget(std::string const &name);

};


#endif

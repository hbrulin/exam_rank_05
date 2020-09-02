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

		TargetGenerator(TargetGenerator const &other);
		TargetGenerator &operator=(TargetGenerator const &other);

	public:
		TargetGenerator();
		virtual ~TargetGenerator();

		void learnTargetType(ATarget *Target);
		void forgetTargetType(std::string const &name);
		ATarget *createTarget(std::string const &name);

};

#endif

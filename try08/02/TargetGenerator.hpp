#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <vector>

class TargetGenerator {

	private:
		std::vector<ATarget*> types;

		TargetGenerator(TargetGenerator const &other);
		TargetGenerator &operator=(TargetGenerator const &other);

	public:
		TargetGenerator();
		virtual ~TargetGenerator();
		
		void learnTargetType(ATarget *type);
		void forgetTargetType(std::string typeName);
		ATarget *createTarget(std::string typeName);


};


#endif

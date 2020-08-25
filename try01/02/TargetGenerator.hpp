#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <vector>
#include "ATarget.hpp"

class TargetGenerator 
{
	private:
		std::vector<ATarget*> types;

	public:
		TargetGenerator();
		virtual ~TargetGenerator();

		void learnTargetType(ATarget *type);
		void forgetTargetType(std::string const &name);
		ATarget *createTarget(std::string const &name);
};

#endif
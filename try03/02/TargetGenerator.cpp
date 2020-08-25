#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {	
	std::vector<ATarget*>::iterator ite = types.end();
	for (std::vector<ATarget*>::iterator it = types.begin(); it != ite; ++it)
	{
		delete *it;
	}
	types.clear();
}

void TargetGenerator::learnTargetType(ATarget *type) //NO CONST, pointer
{
 	if (type)
	{
		std::vector<ATarget*>::iterator ite = types.end();
		for (std::vector<ATarget*>::iterator it = types.begin(); it != ite; ++it)
		{
			if (type->getType() == (*it)->getType())
				return;
		}
		types.push_back(type->clone());
	}

}

void TargetGenerator::forgetTargetType(std::string const &name) {

	std::vector<ATarget*>::iterator ite = types.end();
	for (std::vector<ATarget*>::iterator it = types.begin(); it != ite; ++it)
	{
		if ((*it)->getType() == name)
		{
			delete *it;
			it = types.erase(it);
		}
	}

}

ATarget *TargetGenerator::createNewTarget(std::string const &name) {

	std::vector<ATarget*>::iterator ite = types.end();
	for (std::vector<ATarget*>::iterator it = types.begin(); it != ite; ++it)
	{

		if ((*it)->getType() == name)
		{
			return (*it); //no clone
		}
	}
	return(nullptr);
}











	

#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include <string>

class ASpell; //needed

class ATarget
{
	private:
		std::string _type;
	
	public:
		//all constructors and assignment are public
		ATarget();
		ATarget(std::string const &type);
		ATarget(ATarget const &other);
		virtual ~ATarget();
		ATarget &operator=(ATarget const &other);

		//getters
		std::string const &getType(void) const;

		void getHitBySpell(ASpell const &spell) const;

		//will be specified according to target
		virtual ATarget *clone(void) const = 0;

};

# include "ASpell.hpp" //needed


#endif
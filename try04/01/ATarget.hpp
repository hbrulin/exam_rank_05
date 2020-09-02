#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <string>
#include <iostream>

class ASpell;

class ATarget {

	private:
		std::string _type;

	public:

		ATarget();
		ATarget(ATarget const &other);
		ATarget &operator=(ATarget const &other);
		ATarget(std::string const &type);
		virtual ~ATarget();
		
		std::string const &getType(void) const;

		void getHitBySpell(ASpell const &spell) const; //dont forget const ref

		virtual ATarget *clone(void) const = 0;

};

#include "ASpell.hpp"

#endif

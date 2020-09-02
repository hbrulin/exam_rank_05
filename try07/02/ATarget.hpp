#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include <string>

class ASpell;

class ATarget {

	private:
		std::string _type;
	
	public:
		ATarget();
		ATarget(std::string type);
		ATarget(ATarget const &other);
		ATarget &operator=(ATarget const &other);
		virtual ~ATarget();

		std::string const &getType(void) const;

		void getHitBySpell(ASpell const &spell) const;

		virtual ATarget *clone(void) const = 0;

};

#include "ASpell.hpp"

#endif

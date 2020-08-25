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

		std::string const &getType() const;

		void getHitBySpell(ASpell const &spell) const; //dont forget const

		virtual ATarget *clone() const = 0; //dont forget word virtual

};

#include "ASpell.hpp"

#endif

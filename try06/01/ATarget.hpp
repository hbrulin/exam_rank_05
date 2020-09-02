#ifndef ATarget_HPP
# define ATarget_HPP

#include <string>
#include <iostream>

class ASpell;

class ATarget {

	private:
		std::string _type;

	public:
		ATarget();
		ATarget(std::string const &type);
		ATarget(ATarget const &other);
		virtual ~ATarget();
		ATarget &operator=(ATarget const &other);

		std::string const &getType(void) const;
		void getHitBySpell(ASpell const &spell) const;
		
		virtual ATarget *clone(void) const = 0;


};

#include "ASpell.hpp"

#endif

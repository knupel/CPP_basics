#ifndef CHILD_H
# define CHILD_H

#include "Mother.hpp"

class Child : public Mother {
	private:
		std::string name;
	public:
		Child();
		~Child();
		Child(float const x, float const y, std::string const name);

		std::string get_name() const;

		void static_talk();
		virtual void virtual_talk();
};

#endif
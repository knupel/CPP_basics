#ifndef HEADER_H
# define HEADER_H

#include <iostream>
#include <string>

class Body {
	private:
		float x;
		float y;
	public:
		Body();
		~Body();
		Body(float const x, float const y);

		float get_x() const;
		float get_y() const;

		void static_talk();
		virtual void virtual_talk();
};


class Human : public Body {
	private:
		std::string name;
	public:
		Human();
		~Human();
		Human(float const x, float const y, std::string const name);

		std::string get_name() const;

		void static_talk();
		virtual void virtual_talk();
};

#endif
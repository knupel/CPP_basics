#ifndef HEADER_H
# define HEADER_H

#include <iostream>
#include <string>
// an abstract class can have method with obligation to set by the children
//  and the other can is use like inheritance
class Patchamama_abstract {

	public:
		virtual float get_x() const = 0; // = 0 > became pure method
		virtual float get_y() const = 0; // = 0 > became pure method
		
		virtual void set(float x, float y) = 0; // = 0 > became pure method

		void message(std::string const &str); // not virtual can be call from human children
};


class Human : public Patchamama_abstract {
	private:
		float x;
		float y;
	public:
		Human();
		Human(float const x, float const y);
		~Human();

		virtual float get_x() const;
		virtual float get_y() const;
		
		virtual void set(float x, float y);
};

#endif
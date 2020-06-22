#ifndef MOTHER_H
# define MOTHER_H

#include <iostream>
#include <string>

class Mother {
	private:
		float x;
		float y;
	public:
		Mother();
		~Mother();
		Mother(float const x, float const y);

		float get_x() const;
		float get_y() const;

		void static_talk();
		virtual void virtual_talk();
};

#endif



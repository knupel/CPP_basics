#ifndef C_Integer_H
# define C_Integer_H

#include <iostream>

class Integer {
public:
	Integer(int const value);
	~Integer();


	int get_value() const;

	Integer & operator=(Integer const & rhs);
	Integer operator+(Integer const & rhs) const;

	private:
		int value;
};

std::ostream & operator<<(std::ostream & out, Integer const & rhs);

#endif
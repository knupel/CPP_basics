#ifndef C_GOOD_H
# define C_GOOD_H

class Good {
public:
	float const pi;
	int number;
	Good(float pi, int number);
	~Good();
	void method();
	void method_const() const;
}; 

#endif
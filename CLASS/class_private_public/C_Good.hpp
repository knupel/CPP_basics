#ifndef C_GOOD_H
# define C_GOOD_H

class Good {
public:
	float var_public;
	Good();
	~Good();
	void method_public();

private:
	float _var_private;
	void _method_private();
}; 

#endif
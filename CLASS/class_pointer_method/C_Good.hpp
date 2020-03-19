#ifndef C_GOOD_H
# define C_GOOD_H

class Good {
public:
	int value;
	Good(int value);
	~Good();
	int get_value() const;
}; 

#endif
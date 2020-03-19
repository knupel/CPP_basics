#ifndef C_GOOD_H
# define C_GOOD_H

class Good {
private:
	int number;
public:

	Good();
	~Good();
	int get_number() const;
	void set_number(int number);
}; 

#endif
#ifndef C_GOOD_H
# define C_GOOD_H

/**
* the private member is not totaly safe because it can be change by ref
*/
class Good {
private:
	int number;
public:
	Good();
	~Good();
	int get_number() const;
	int & get_number_ref();
	void set_number(int number);
}; 

#endif
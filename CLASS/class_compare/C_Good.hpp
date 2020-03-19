#ifndef C_GOOD_H
# define C_GOOD_H

class Good {
public:
	Good(int number);
	~Good();
	int get_number() const;
	int compare(Good *good);
private:
	int number;
}; 

#endif
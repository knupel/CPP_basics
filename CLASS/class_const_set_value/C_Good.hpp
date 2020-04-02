#ifndef C_GOOD_H
# define C_GOOD_H

class Good {
private:
	float const num;
public :
	Good();
	Good(float num);
	~Good();
	void set_num(float const num);
	float get_num() const;
}; 

#endif
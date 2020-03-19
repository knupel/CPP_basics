#ifndef C_GOOD_H
# define C_GOOD_H

class Good {
public:
	Good();
	~Good();
	static int get_instance();
	int compare(Good *good);
private:
	static int num_instance;
}; 

#endif
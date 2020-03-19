#ifndef R_BODY_H
# define R_BODY_H

class R_Body {
public:
	R_Body();
	~R_Body();
	static int get_instance();
	int compare(R_Body *body);
private:
	static int num_instance;
}; 

#endif
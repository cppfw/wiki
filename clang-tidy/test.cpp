// clang-tidy playground

int sample_global_variable;
int var;

class sample_class{
	int sample_member_variable;
	int var;

	static const int const_var = 10;

	virtual int virt_func(){
		return 10;
	}
public:
};

class derived_class : public sample_class {
public:
	int virt_func()override{
		return 20;
	}
};

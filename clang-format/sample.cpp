#include <algorithm>
#include <cmath>
#include <utki/config.hpp>
#include <morda/widgets/button/push_button.hpp>
#include "some_file.hpp"
#include "some_dir/subdir/some_file.cxx"
#include "sample.hpp"
#include "../../some/parent/dir/some_file.h"
#include <iostream>

/**
 * @brief sample class a1.
 */
class sample_class_a1
{
	int a;

public:
	sample_class_a1(int a) :a(a){}
};

class sample_class_a2
{};

class sample_class_b : public sample_class_a1, private sample_sssssssssssssssssssssssssssssssssssssssssssssssssssssssssss
{};

// TODO: the comment after : fails to format inheritance list and the comment itself
class sample_class_c ://some class comment
public sample_class_a1, public sample_class_a2
{
public:
	int a;//some comment
	int b;

	sample_class_c(int a, int b, int ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc) :
		sample_class_a1(a),
		a(a),
		b(b)
	{}

    void func(int a, int b, int cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc)
	{
		std::cout << "printing values of different variables passed in as arguments to this function" << std::endl << "the first one would be:" <<std::endl
		<<"a = " << a << std::endl;
	}
};

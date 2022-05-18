#include "sample.hpp"

#include <algorithm>
#include <cmath>
#include <iostream>

#include <morda/widgets/button/push_button.hpp>
#include <utki/config.hpp>

#include "some_file.hpp"

#include "../../some/parent/dir/some_file.h>

/**
 * @brief sample class a1.
 */
class sample_class_a1
{
	int a;

public:
	sample_class_a1(int a) :
		a(a)
	{}
};

class sample_class_a2
{};

class sample_class_b : public sample_class_a1
{};

class sample_class_c : //
	public sample_class_a1,
	public sample_class_a2
{
public:
	int a; // some comment
	int b;

	sample_class_c(int a, int b) :
		sample_class_a1(a),
		a(a),
		b(b)
	{}

	void
	func(int a, int b, int cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc)
	{
		std::cout << "a = " << a << std::endl;
	}
};
// TODO: edit this file to test basic usage of the library,
//       mainly test that linking to the library works, so just call any
//       non-inline function of the library to test it.

#include <rasterimage/image_variant.hpp>

int main(int argc, const char** argv){
    rasterimage::image_variant im({10, 20});

    std::cout << "im.dims() = " << im.dims() << std::endl;

    return 0;
}

#include <iostream>
#include "cmakeConfig.h"

int main(int argc, char** argv) {

	std::cout << "Hello World\n";
    if (argc < 2) {
        // report ver
        std::cout << argv[0] << " Version " << CMakeHelloWorld_VERSION_MAJOR << "."
            << CMakeHelloWorld_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
    }

    std::cin.get();

	return 0;
}
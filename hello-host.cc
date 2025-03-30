#include <iostream>
#include <fstream>
#include <sstream>

#include <hilti/rt/libhilti.h>
#include <spicy/rt/libspicy.h>

#include "hello.h"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }

    // Open the input file
    std::ifstream file(argv[1]);
    if (!file) {
        std::cerr << "Error: Cannot open file " << argv[1] << std::endl;
        return 1;
    }

    // Read file contents into a string
    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string input = buffer.str();

    // Initialize runtime library.
    hilti::rt::init();

    // Create stream with file content as data.
    auto stream = hilti::rt::reference::make_value<hilti::rt::Stream>(input);
    stream->freeze();

    // Feed data.
    hlt_hello::CustomHttp::Requestline::parse1(stream, {}, {});

    // Wrap up runtime library.
    hilti::rt::done();

    return 0;
}

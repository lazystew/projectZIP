#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
    // Expect: program input_file output_file
    if (argc != 3) {
        std::cerr << "Usage: compressor <input_file> <output_file>\n";
        return 1;
    }

    std::ifstream in(argv[1], std::ios::binary);
    std::ofstream out(argv[2], std::ios::binary);

    if (!in || !out) {
        std::cerr << "Error: Unable to open file(s)\n";
        return 1;
    }

    char byte;
    while (in.get(byte)) {
        out.put(byte);
    }

    in.close();
    out.close();

    return 0;
}

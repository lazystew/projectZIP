#include <iostream>
#include <string>
#include "cli.h"

void show_help(){

    std::cout<<"zippers (pzip)"<<std::endl;
    std::cout<<"Functions:"<<std::endl;
    std::cout<<"pzip compress   <input_file>"<<std::endl;
    std::cout<<"pzip extract  <archive_file>"<<std::endl;
    std::cout<<"pzip help-center"<<std::endl;

}

void handle_cli(int argc, char* argv[]) {
    std::string command = argv[1];

    if (command == "help") {
        show_help();
    }
    else if (command == "compress") {
        if (argc < 3) {
            std::cerr << "Error: No input file provided\n";
            return;
        }
        std::cout << "Compressing file: " << argv[2] << "\n";
    }
    else if (command == "extract") {
        if (argc < 3) {
            std::cerr << "Error: No archive file provided\n";
            return;
        }
        std::cout << "Extracting file: " << argv[2] << "\n";
    }
    else {
        std::cerr << "Unknown command: " << command << "\n";
        show_help();
    }
}

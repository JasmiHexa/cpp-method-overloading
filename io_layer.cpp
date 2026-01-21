#include <fstream>
#include <string>

void runIoLayer() {
    std::ifstream file;
    file.open("input.txt");

    std::string line;
    std::getline(file, line);

    file.close();
}


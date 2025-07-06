#include <iostream>
#include "includes/vertex.h"
#include <fstream>
#include <vector>
#include <string>

void readFile(std::vector<std::string>& storage ) {
    std::ifstream file("VertexData.txt");

    std::string fileOutputLine;
    while (std::getline(file,fileOutputLine)) {
        std::cout << fileOutputLine << std::endl;
    }

    file.close();
}
int main() {
    std::vector<std::string> lineStorage;
    readFile(lineStorage);
    return 0;
}
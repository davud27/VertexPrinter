#include <iostream>
#include "includes/vertex.h"
#include "includes/meshUtilitys.h"
#include <fstream>
#include <vector>
#include <string>
#include <memory>

void extractVerticesFromFile(std::vector<Vertex> &storage) {
    std::vector<float> tempArray;
    std::ifstream file("VertexData.txt");
    float word;
    while (file >> word) {
        //Clamps Colors
        tempArray.push_back(meshUtils::clampColor(word));
        if (tempArray.size() == 6) {
            storage.push_back(Vertex(tempArray[0], (tempArray[1]), tempArray[2],
                                     tempArray[3], tempArray[4], tempArray[5]));
            tempArray.clear();
        }
    }
    std::cout << "Vertices Succsufully loaded into Vector\n" << std::endl;
    file.close();
}

drawingMode selectDrawingMode() {
    std::cout << "What Drawing Mode would you like to select\n" <<
            "Option 0: Triangles\nOption 1: Lines\nOption 2: Points" << std::endl;
    int choice;
    std::cin >> choice;
    if (choice == 0) {
        return triangles;
    }
    if (choice == 1) {
        return lines;
    }
    if (choice == 2) {
        return points;
    }
    return triangles;
}


int main() {
    std::vector<Vertex> vertexStorage;
    extractVerticesFromFile(vertexStorage);
    const drawingMode mode = selectDrawingMode();
    std::cout << "Using First Function" << std::endl;
    meshUtils::printVertex(vertexStorage, mode);
    std::cout << "Using Second Function" << std::endl;
    meshUtils::printVertex(vertexStorage, mode, 0);
    meshUtils::printVertex(vertexStorage, mode, 1);
    meshUtils::printVertex(vertexStorage, mode, 2);
    meshUtils::printVertex(vertexStorage, mode, 3);
    meshUtils::printVertex(vertexStorage, mode, 4);


    return 0;
}

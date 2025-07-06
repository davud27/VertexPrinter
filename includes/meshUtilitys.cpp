//
// Created by David Garcia on 7/6/25.
//

#include "meshUtilitys.h"
#include <iostream>

namespace meshUtils {
    float clampColor(const float number) {
        if (number < 0.0) {
            return 0.0;
        }
        if (number > 1) {
            return 1.0;
        }
        return number;
    }

    std::string chooseMode(const drawingMode mode) {
        switch (mode) {
            case triangles:
                return "triangle";
            case lines:
                return "lines";
            case points:
                return "points";
            default:
                return "unknown";
        }
    }

    void printVertex(std::vector<Vertex> &storage, const drawingMode mode) {
        std::string modeString = chooseMode(mode);

        std::cout << "Drawing Mode: " << modeString << std::endl;

        for (int i = 0; i < storage.size(); i++) {
            std::cout << "Vertex #" << i << ": Position(" << storage[i].x << ", " << storage[i].y << ", " << storage[i].
                    z << "), Color(" << storage[i].r << ", " << storage[i].g << ", " << storage[i].b << ")" <<
                    std::endl;
        }
    }

    void printVertex(std::vector<Vertex> &storage, drawingMode mode, int index) {
        std::string modeString = chooseMode(mode);
        std::cout << "Drawing Mode: " << modeString << std::endl;
        std::cout << "Vertex #" << index << ": Position(" << storage[index].x << ", " << storage[index].y << ", " <<
                storage[index].
                z << "), Color(" << storage[index].r << ", " << storage[index].g << ", " << storage[index].b << ")" <<
                std::endl;
    }
} // meshutils

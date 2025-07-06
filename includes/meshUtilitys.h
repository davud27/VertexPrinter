//
// Created by David Garcia on 7/6/25.
//
#ifndef MESHUTILITYS_H
#define MESHUTILITYS_H
#include <vector>
#include "vertex.h"

namespace meshUtils {
     float clampColor(float number);

     void printVertex(std::vector<Vertex> &storage, drawingMode mode);

     void printVertex(std::vector<Vertex> &storage, drawingMode mode, int index);
} // meshutils

#endif //MESHUTILITYS_H

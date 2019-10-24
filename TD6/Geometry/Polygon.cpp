#include "Polygon.hpp"
#include <iostream>

namespace Geometry {


Polygon::Polygon(std::string lab, int a):Shape(lab){
    vertexCount = a;
}
int Polygon::getVertexCount() const{
    return vertexCount;
}

}
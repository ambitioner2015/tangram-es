#pragma once

#include "rapidjson/document.h"
#include "tileData.h"

#include <vector>

class Tile;

namespace GeoJson {
    
    void extractPoint(const rapidjson::Value& _in, Point& _out, const Tile& _tile);
    
    void extractLine(const rapidjson::Value& _in, Line& _out, const Tile& _tile);
    
    void extractPoly(const rapidjson::Value& _in, Polygon& _out, const Tile& _tile);
    
    void extractFeature(const rapidjson::Value& _in, Feature& _out, const Tile& _tile);
    
    void extractLayer(const rapidjson::Value& _in, Layer& _out, const Tile& _tile);
    
}



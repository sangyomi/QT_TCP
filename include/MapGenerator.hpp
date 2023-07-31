//
// Created by sangjun on 23. 7. 26.
//

#ifndef QT_GPS_MAP_GENERATOR_HPP
#define QT_GPS_MAP_GENERATOR_HPP

#include <iostream>
#include <fstream>
#include <iomanip>

class MapGenerator {
private:
    double x;
    double y;
public:
    void generateHTMLFile(double lat, double lng, int zoom, std::string fileName);
};


#endif //QT_GPS_MAP_GENERATOR_HPP

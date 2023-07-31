//
// Created by sangjun on 23. 7. 26.
//

#include "MapGenerator.hpp"

void MapGenerator::generateHTMLFile(double lat, double lng, int zoom, std::string fileName)
{
    std::ofstream file(fileName);
    if (file.is_open()) {
        file << "<!DOCTYPE html>\n";
        file << "<html>\n";
        file << "<head>\n";
        file << "<title>Google Maps in QWebEngineView</title>\n";
        file << "<script src=\"https://maps.googleapis.com/maps/api/js?key=AIzaSyAsaKueVev7C1aSg2xMSOQGMAr34WMCMfs&callback=initMap\" async defer></script>\n";
        file << "<script>\n";
        file << "function initMap() {\n";
        file << "var mapOptions = {\n";
        file << "center: {lat: " << std::fixed << std::setprecision(6) << lat << ", lng: " << std::fixed << std::setprecision(6) << lng << "},\n";
        file << "zoom: " << zoom << "\n";
        file << "};\n";
        file << "var map = new google.maps.Map(document.getElementById('map'), mapOptions);\n";
        file << "}\n";
        file << "</script>\n";
        file << "</head>\n";
        file << "<body>\n";
        file << "<div id=\"map\" style=\"height: 500px;\"></div>\n";
        file << "</body>\n";
        file << "</html>\n";
        file.close();
//        std::cout << "HTML file " << fileName << " created." << std::endl;
    } else {
        std::cerr << "Error creating file " << fileName << std::endl;
    }
}
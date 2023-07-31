//
// Created by sangjun on 23. 7. 26.
//

#ifndef QTTCPCLIENT_LOCATIONINFO_HPP
#define QTTCPCLIENT_LOCATIONINFO_HPP

typedef struct _GPS_DATA_
{
    double latitudeCoordinate;
    double longitudeCoordinate;
    double latitudeCoordinateInfo[1000];
    double longitudeCoordinateInfo[1000];
    double distance;
    int count;
} GPS_DATA, * pGPS_DATA;

#endif //QTTCPCLIENT_LOCATIONINFO_HPP

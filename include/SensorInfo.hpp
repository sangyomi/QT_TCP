//
// Created by sangjun on 23. 8. 10.
//

#ifndef CAMEL_RAISIM_PROJECTS_LIDARINFO_HPP
#define CAMEL_RAISIM_PROJECTS_LIDARINFO_HPP

typedef struct _LIDAR_
{
    int scanSize;
    double scanRanges[1500];
} LIDAR, * pLIDAR;

typedef struct _GPS_
{
    double latitudeCoordinate;
    double longitudeCoordinate;
    double latitudeCoordinateInfo[3000];
    double longitudeCoordinateInfo[3000];
    double distance;
    int count;
} GPS, * pGPS;

#endif //CAMEL_RAISIM_PROJECTS_LIDARINFO_HPP

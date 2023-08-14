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

#endif //CAMEL_RAISIM_PROJECTS_LIDARINFO_HPP

//
// Created by Chikee on 2022/1/28.
//

#ifndef RAYTRACINGDEMO_RAY_H
#define RAYTRACINGDEMO_RAY_H

#include "vec3.h"

class ray
{
public:
    ray() {}

    ray(const point3 &origin, const point3 &direction) : orig(origin), dir(direction) {}

    point3 origin() const { return orig; }

    vec3 direction() const { return dir; }

    point3 at(double t) const
    {
        return orig + t * dir;
    }

public:
    point3 orig;
    vec3 dir;
};

#endif //RAYTRACINGDEMO_RAY_H

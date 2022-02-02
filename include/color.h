//
// Created by chikee on 2022/2/2.
//

#ifndef RAYTRACINGDEMO_COLOR_H
#define RAYTRACINGDEMO_COLOR_H

#include "vec3.h"

#include <iostream>

void write_color(std::ostream &out, color pixel_color) {
    //write the translated [0,255] value of each color component.
    out << static_cast<int>(255.999 * pixel_color.x()) << ' '
        << static_cast<int>(255.999 * pixel_color.y()) << ' '
        << static_cast<int>(255.999 * pixel_color.z()) << '\n';
}

#endif //RAYTRACINGDEMO_COLOR_H

// #pragma once
#include <cmath>
#include "lib.hpp"

float dist(float x0, float y0, float z0, float x1, float y1, float z1) {
  float dx = x0 - x1;
  float dy = y0 - y1;
  float dz = z0 - z1;
  return sqrt(dx * dx + dy * dy + dz * dz); 
}

vec3 coord_sphere_math(float radius, float longitude, float latitude) {
	float x = radius * cos(latitude) * cos(longitude);
  float y = radius * sin(latitude) * cos(longitude);
  float z = radius * sin(longitude);
  return vec3(x,y,z);
}





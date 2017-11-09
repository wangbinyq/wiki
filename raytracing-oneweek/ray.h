#ifndef RAYH
#define RAYH

#include "vec3.h"

class ray {
public:
  ray () {}
  ray (const vec3 &a, const vec3 &b): A(a), B(b) {}
  vec3 origin() const { return A; }
  vec3 direction() const { return A; }
  vec3 point_at_parameter(float t) const { return A + t*B; }

public:
  vec3 A;
  vec3 B;
};

#endif
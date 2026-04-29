#pragma once

#include <math.h>
#include <ostream>

#ifdef VECTOR3LIB_EXPORTS
#define VECTOR3_API __declspec(dllexport)
#else
#define VECTOR3_API __declspec(dllimport)
#endif

class VECTOR3_API Vector3 {
 public:
  float x, y, z;
  Vector3(const float x, const float y, const float z) : x(x), y(y), z(z) {}
  ~Vector3() {}

  float Length() { return sqrt(x * x + y * y + z * z); }
  Vector3 Noramilzed() {
    float length = Length();
    return Vector3(x / length, y / length, z / length);
  }

  Vector3 ScalarMult(const Vector3 vector) {
    return Vector3(x * vector.x, y * vector.y, z * vector.z);
  }

  Vector3 VectorMult(const Vector3 vector) {
    return Vector3(y * vector.z - z * vector.y, x * vector.z - z * vector.x,
                   x * vector.y - y * vector.x);
  }

  Vector3 operator+(const Vector3 vector) {
    return Vector3(x + vector.x, y + vector.y, z + vector.z);
  }
  Vector3 operator-(const Vector3 vector) {
    return Vector3(x - vector.x, y - vector.y, z - vector.z);
  }
  Vector3 operator*(float mult) {
    return Vector3(x * mult, y * mult, z * mult);
  }
  friend std::ostream& operator<<(std::ostream& stream, const Vector3 vector) {
    stream << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
    return stream;
  }

 private:
};
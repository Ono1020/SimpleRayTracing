#ifndef MATH_CONSTANTS_HPP
#define MATH_CONSTANTS_HPP

#include <cmath>
#include <cstdlib>
#include <limits>
#include <memory>

// using
using std::make_shared;
using std::shared_ptr;
using std::sqrt;

// 定数
const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// ユーティリティ関数
inline double degrees_to_radians(double degrees)
{
    return degrees * pi / 180;
}

// 共通ヘッダー
#include "ray.hpp"
#include "vec3.hpp"

#endif
#ifndef PYTHONIC_INCLUDE_MATH_FLOOR_HPP
#define PYTHONIC_INCLUDE_MATH_FLOOR_HPP

#include "pythonic/include/utils/functor.hpp"
#include <cmath>

PYTHONIC_NS_BEGIN

namespace math
{
  DEFDECLARE_FUNCTOR_2(floor, std::floor);
}
PYTHONIC_NS_END

#endif

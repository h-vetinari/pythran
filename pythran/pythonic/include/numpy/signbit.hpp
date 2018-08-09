#ifndef PYTHONIC_INCLUDE_NUMPY_SIGNBIT_HPP
#define PYTHONIC_INCLUDE_NUMPY_SIGNBIT_HPP

#include "pythonic/include/utils/functor.hpp"
#include "pythonic/include/types/ndarray.hpp"
#include "pythonic/include/utils/numpy_traits.hpp"

PYTHONIC_NS_BEGIN

namespace numpy
{
#define NUMPY_NARY_FUNC_NAME signbit
#define NUMPY_NARY_FUNC_SYM std::signbit
#include "pythonic/include/types/numpy_nary_expr.hpp"
}
PYTHONIC_NS_END

#endif

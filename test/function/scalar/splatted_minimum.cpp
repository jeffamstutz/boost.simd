//==================================================================================================
/*!

  Copyright 2015 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#include <boost/simd/function/scalar/splatted_minimum.hpp>
#include <simd_test.hpp>
#include <boost/simd/detail/dispatch/meta/as_integer.hpp>
#include <boost/simd/constant/inf.hpp>
#include <boost/simd/constant/minf.hpp>
#include <boost/simd/constant/mone.hpp>
#include <boost/simd/constant/nan.hpp>
#include <boost/simd/constant/one.hpp>
#include <boost/simd/constant/zero.hpp>
#include <boost/simd/constant/pi.hpp>
#include <boost/simd/constant/three.hpp>



STF_CASE_TPL (" spatted_minimum ",  STF_NUMERIC_TYPES)
{
  namespace bs = boost::simd;

  using bs::splatted_minimum;

  // return type conformity test
   STF_EXPR_IS(splatted_minimum(T()), T);

  // specific values tests
  STF_EQUAL(splatted_minimum(bs::One<T>()), bs::One<T>());
  STF_EQUAL(splatted_minimum(bs::Zero<T>()), bs::Zero<T>());
} // end of test for signed_int_



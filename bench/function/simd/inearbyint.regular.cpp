// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

#include <simd_bench.hpp>
#include <boost/simd/function/simd/inearbyint.hpp>
#include <boost/simd/pack.hpp>
#include <cmath>

namespace nsb = ns::bench;

DEFINE_SIMD_BENCH(simd_inearbyint, boost::simd::inearbyint);

DEFINE_BENCH_MAIN()
{
  nsb::for_each<simd_inearbyint, NS_BENCH_IEEE_TYPES>(-10, 10);
}

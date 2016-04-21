//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS
  @copyright 2016 J.T. Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_COMMON_SCALAR_FUNCTION_DEC_S_HPP_INCLUDED
#define BOOST_SIMD_ARCH_COMMON_SCALAR_FUNCTION_DEC_S_HPP_INCLUDED

#include <boost/simd/constant/one.hpp>
#include <boost/simd/constant/valmin.hpp>
#include <boost/simd/function/is_not_equal.hpp>
#include <boost/simd/function/minus.hpp>
#include <boost/simd/function/selsub.hpp>
#include <boost/simd/function/saturated.hpp>
#include <boost/dispatch/function/overload.hpp>
#include <boost/config.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = boost::dispatch;
  BOOST_DISPATCH_OVERLOAD ( dec_
                          , (typename A0)
                          , bd::cpu_
                          , bd::generic_<bd::arithmetic_<A0> >
                          , bs::saturated_tag
                          )
  {
    BOOST_FORCEINLINE A0 operator() ( A0 a0
                                    , const saturated_tag &) const BOOST_NOEXCEPT
    {
      return selsub(is_not_equal(a0, Valmin<A0>()), a0, One<A0>());
    }
  };

  BOOST_DISPATCH_OVERLOAD ( dec_
                          , (typename A0)
                          , bd::cpu_
                          , bd::generic_<bd::floating_<A0> >
                          , bs::saturated_tag
                          )
  {
    BOOST_FORCEINLINE A0 operator() ( A0 a0
                                    , const saturated_tag &) const BOOST_NOEXCEPT
    {
      return a0-One<A0>();
    }
  };
} } }


#endif

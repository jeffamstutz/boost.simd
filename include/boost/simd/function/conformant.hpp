//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_CONFORMANT_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_CONFORMANT_HPP_INCLUDED

#include <boost/simd/config.hpp>
#include <boost/simd/detail/decorator.hpp>
#include <boost/simd/detail/dispatch.hpp>

namespace boost { namespace simd
{
  struct conformant_tag : decorator_<conformant_tag>
  {
    using parent = decorator_<conformant_tag>;
  };

  const detail::decorator<conformant_tag> conformant_ = {};
} }

#endif

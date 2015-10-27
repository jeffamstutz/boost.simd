//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_MINIMUM_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_MINIMUM_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-reduction

    Returns the least element of the SIMD vector

    @par Semantic:

    For every parameter of type T0

    @code
    scalar_of_t<T0> r = minimum(a0);
    @endcode

    is similar to:

    @code
      scalar_of_t<T0> r = Inf;
      for(std::size_t i=0;i<cardinal_of<T0>;++i)
        r =  r > a0[i] ? a0[i] : r;
    @endcode


    @return a value of the scalar type associated to the parameter

**/
  template<typename T> auto minimum(T const& x, T const& y) {}

  namespace functional
  {
    /*!
      @ingroup group-reduction

      Function object tied to simd::minimum

      @see simd::minimum
    **/
    const boost::dispatch::functor<tag::minimum_> minimum = {};
  }
} }
#endif

#include <boost/simd/function/definition/minimum.hpp>
#include <boost/simd/arch/common/scalar/function/minimum.hpp>
//#include <boost/simd/arch/common/function/simd/minimum.hpp>

#endif
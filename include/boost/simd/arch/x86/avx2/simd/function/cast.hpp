//==================================================================================================
/**
  Copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
**/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_X86_AVX2_SIMD_FUNCTION_CAST_HPP_INCLUDED
#define BOOST_SIMD_ARCH_X86_AVX2_SIMD_FUNCTION_CAST_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>
#include <boost/simd/detail/traits.hpp>
#include <boost/simd/detail/dispatch/meta/as_integer.hpp>
#include <boost/simd/detail/dispatch/meta/scalar_of.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = ::boost::dispatch;
  namespace bs = ::boost::simd;
  //------------------------------------------------------------------------------------------------
  // bitwise cvt int16<->int32
  BOOST_DISPATCH_OVERLOAD ( cast_
                          , (typename A0, typename A1)
                          , bs::avx2_
                          , bs::pack_<bd::int16_<A0>,bs::sse_>
                          , bd::target_<bd::scalar_<bd::int32_<A1>>>
                          )
  {
    using result = typename A0::template rebind<typename A1::type>;
    BOOST_FORCEINLINE result operator()(A0 const& a0, A1 const&) const BOOST_NOEXCEPT
    {
      return _mm256_cvtepi16_epi32(a0);
    }
  };

  //------------------------------------------------------------------------------------------------
  // bitwise cvt int32<->int64
  BOOST_DISPATCH_OVERLOAD ( cast_
                          , (typename A0, typename A1)
                          , bs::avx2_
                          , bs::pack_<bd::int32_<A0>,bs::sse_>
                          , bd::target_<bd::scalar_<bd::int64_<A1>>>
                          )
  {
    using result = typename A0::template rebind<typename A1::type>;
    BOOST_FORCEINLINE result operator()(A0 const& a0, A1 const&) const BOOST_NOEXCEPT
    {
      return _mm256_cvtepi32_epi64(a0);
    }
  };

  //------------------------------------------------------------------------------------------------
  // bitwise cvt int8<->int16
  BOOST_DISPATCH_OVERLOAD ( cast_
                          , (typename A0, typename A1)
                          , bs::avx2_
                          , bs::pack_<bd::int8_<A0>,bs::sse_>
                          , bd::target_<bd::scalar_<bd::int16_<A1>>>
                          )
  {
    using result = typename A0::template rebind<typename A1::type>;
    BOOST_FORCEINLINE result operator()(A0 const& a0, A1 const&) const BOOST_NOEXCEPT
    {
      return _mm256_cvtepi8_epi16(a0);
    }
  };

  //------------------------------------------------------------------------------------------------
  // bitwise cvt uint16<->int32
  BOOST_DISPATCH_OVERLOAD ( cast_
                          , (typename A0, typename A1)
                          , bs::avx2_
                          , bs::pack_<bd::uint16_<A0>,bs::sse_>
                          , bd::target_<bd::scalar_<bd::int32_<A1>>>
                          )
  {
    using result = typename A0::template rebind<typename A1::type>;
    BOOST_FORCEINLINE result operator()(A0 const& a0, A1 const&) const BOOST_NOEXCEPT
    {
      return _mm256_cvtepu16_epi32(a0);
    }
  };

  //------------------------------------------------------------------------------------------------
  // bitwise cvt uint32<->int64
  BOOST_DISPATCH_OVERLOAD ( cast_
                          , (typename A0, typename A1)
                          , bs::avx2_
                          , bs::pack_<bd::uint32_<A0>,bs::sse_>
                          , bd::target_<bd::scalar_<bd::int64_<A1>>>
                          )
  {
    using result = typename A0::template rebind<typename A1::type>;
    BOOST_FORCEINLINE result operator()(A0 const& a0, A1 const&) const BOOST_NOEXCEPT
    {
      return _mm256_cvtepu32_epi64(a0);
    }
  };

  //------------------------------------------------------------------------------------------------
  // bitwise cvt uint8<->int16
  BOOST_DISPATCH_OVERLOAD ( cast_
                          , (typename A0, typename A1)
                          , bs::avx2_
                          , bs::pack_<bd::uint8_<A0>,bs::sse_>
                          , bd::target_<bd::scalar_<bd::int16_<A1>>>
                          )
  {
    using result = typename A0::template rebind<typename A1::type>;
    BOOST_FORCEINLINE result operator()(A0 const& a0, A1 const&) const BOOST_NOEXCEPT
    {
      return _mm256_cvtepu8_epi16(a0);
    }
  };


} } }

#endif

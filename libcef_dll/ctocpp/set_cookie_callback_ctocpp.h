// Copyright (c) 2022 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=83c8143e3d126fca9a02f8e5ffa75bf99d291518$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_SET_COOKIE_CALLBACK_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_SET_COOKIE_CALLBACK_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_cookie_capi.h"
#include "include/cef_cookie.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefSetCookieCallbackCToCpp
    : public CefCToCppRefCounted<CefSetCookieCallbackCToCpp,
                                 CefSetCookieCallback,
                                 cef_set_cookie_callback_t> {
 public:
  CefSetCookieCallbackCToCpp();
  virtual ~CefSetCookieCallbackCToCpp();

  // CefSetCookieCallback methods.
  void OnComplete(bool success) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_SET_COOKIE_CALLBACK_CTOCPP_H_

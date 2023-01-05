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
// $hash=3e86bf9e36a3ef63e6777dcafee8847bd4965a60$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_SET_COOKIE_CALLBACK_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_SET_COOKIE_CALLBACK_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_cookie_capi.h"
#include "include/cef_cookie.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefSetCookieCallbackCppToC
    : public CefCppToCRefCounted<CefSetCookieCallbackCppToC,
                                 CefSetCookieCallback,
                                 cef_set_cookie_callback_t> {
 public:
  CefSetCookieCallbackCppToC();
  virtual ~CefSetCookieCallbackCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_SET_COOKIE_CALLBACK_CPPTOC_H_

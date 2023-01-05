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
// $hash=7d9031bd579a9d4b9ee12b54d44ab0eb4aad62c3$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_MEDIA_SINK_DEVICE_INFO_CALLBACK_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_MEDIA_SINK_DEVICE_INFO_CALLBACK_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_media_router_capi.h"
#include "include/cef_media_router.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefMediaSinkDeviceInfoCallbackCToCpp
    : public CefCToCppRefCounted<CefMediaSinkDeviceInfoCallbackCToCpp,
                                 CefMediaSinkDeviceInfoCallback,
                                 cef_media_sink_device_info_callback_t> {
 public:
  CefMediaSinkDeviceInfoCallbackCToCpp();
  virtual ~CefMediaSinkDeviceInfoCallbackCToCpp();

  // CefMediaSinkDeviceInfoCallback methods.
  void OnMediaSinkDeviceInfo(
      const CefMediaSinkDeviceInfo& device_info) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_MEDIA_SINK_DEVICE_INFO_CALLBACK_CTOCPP_H_

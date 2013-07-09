// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_BASE_CERT_VERIFY_PROC_ANDROID_H_
#define NET_BASE_CERT_VERIFY_PROC_ANDROID_H_

#include "net/base/cert_verify_proc.h"

namespace net {

// Performs certificate verification on Android by calling the platform
// TrustManager through JNI.
class CertVerifyProcAndroid : public CertVerifyProc {
 public:
  CertVerifyProcAndroid();

 protected:
  virtual ~CertVerifyProcAndroid();

 private:
  virtual int VerifyInternal(X509Certificate* cert,
                             const std::string& hostname,
                             int flags,
                             CRLSet* crl_set,
                             CertVerifyResult* verify_result) OVERRIDE;
};

}  // namespace net

#endif  // NET_BASE_CERT_VERIFY_PROC_ANDROID_H_
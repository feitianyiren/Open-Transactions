// OTLIB
// Open Transactions Pre-Compiled Headers File

#pragma once

// Include the C one.
#include "stdafx.h"

#include "TR1_Wrapper.hpp"

#ifdef OT_USE_CXX11
#undef OT_USE_CXX11
#endif
#if defined(_MSC_VER) || !defined(OPENTXS_NO_CXX11)
#define OT_USE_CXX11
#endif

#ifdef OT_USE_CHAI_STDLIB
#undef OT_USE_CHAI_STDLIB
#endif
#ifdef OPENTXS_CHAISCRIPT_5
#define OT_USE_CHAI_STDLIB
#endif

#ifndef OT_CRYPTO_USING_OPENSSL
#define OT_CRYPTO_USING_OPENSSL 1
#endif

#ifndef OT_CASH_USING_LUCRE
#define OT_CASH_USING_LUCRE 1
#endif


// for mac, this enables deprecated functions. (aka, for pthread)
#ifdef _XOPEN_SOURCE
#undef _XOPEN_SOURCE
#endif

// define fstream while _XOPEN_SOURCE isn't defined.
//#include <fstream>

#if defined(__APPLE__) && defined(OPENTXS_XOPEN_SOURCE)
#define _XOPEN_SOURCE 500
#endif



#include "gtest/gtest.h"
#include "gmock/gmock.h"


#include "otapi/Mock_OTAPI_Exec.hpp"


#include "OtMeTest.hpp"
#include "OtMeExtra.hpp"
#include "ot_utility_ot.hpp"
#include "ot_command_ot.hpp"



#ifdef _WIN32
#ifndef NO_OT_PCH
//#include "OTStorage.h>
//#include "OTSmartContract.h>
#else
#undef NO_OT_PCH
#endif
#endif

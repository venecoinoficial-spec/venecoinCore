// Copyright (c) 2022 The venecoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef venecoin_SUPPORT_EXPERIMENTAL_H
#define venecoin_SUPPORT_EXPERIMENTAL_H

// include config for experimental flag
#if defined(HAVE_CONFIG_H)
#include "config/bitcoin-config.h"
#endif //HAVE_CONFIG_H

#if defined(ALLOW_venecoin_EXPERIMENTAL)
#define EXPERIMENTAL_FEATURES_ALLOWED 1
#else
#define EXPERIMENTAL_FEATURES_ALLOWED 0
#endif // ALLOW_venecoin_EXPERIMENTAL

#define EXPERIMENTAL_FEATURE static_assert(EXPERIMENTAL_FEATURES_ALLOWED == 1, \
     "Experimental features need to be explicitly enabled during configuration.");

#endif //BITCOIN_SUPPORT_EXPERIMENTAL_H

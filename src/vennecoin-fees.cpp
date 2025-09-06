// Copyright (c) 2021 The Vennecoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/random/uniform_int.hpp>

#include "policy/policy.h"
#include "arith_uint256.h"
#include "vennecoin.h"
#include "txmempool.h"
#include "util.h"
#include "validation.h"
#include "vennecoin-fees.h"
#include "amount.h"
#ifdef ENABLE_WALLET
#include "wallet/wallet.h"
#endif

#ifdef ENABLE_WALLET

CFeeRate GetVennecoinFeeRate(int priority)
{
    switch(priority)
    {
    case SUCH_EXPENSIVE:
        return CFeeRate(COIN / 100 * 521); // 5.21 VENNE, but very carefully avoiding floating point maths
    case MANY_GENEROUS:
        return CFeeRate(CWallet::minTxFee.GetFeePerK() * 100);
    case AMAZE:
        return CFeeRate(CWallet::minTxFee.GetFeePerK() * 10);
    case WOW:
        return CFeeRate(CWallet::minTxFee.GetFeePerK() * 5);
    case MORE:
        return CFeeRate(CWallet::minTxFee.GetFeePerK() * 2);
    case MINIMUM:
    default:
        break;
    }
    return CWallet::minTxFee;
}

const std::string GetVennecoinPriorityLabel(int priority)
{
    switch(priority)
    {
    case SUCH_EXPENSIVE:
        return "Such Expensive";
    case MANY_GENEROUS:
        return "Many Generous";
    case AMAZE:
        return "Amaze";
    case WOW:
        return "Wow";
    case MORE:
        return "More";
    case MINIMUM:
    default:
        return "Minimum";
    }
}
#endif // ENABLE_WALLET

CAmount GetVennecoinMinRelayFee(const CTransaction& tx, unsigned int nBytes, bool fAllowFree)
{
    // ...existing code...
    return 0;
}

CAmount GetVennecoinDustFee(const std::vector<CTxOut> &vout, const CAmount dustLimit)
{
    // ...existing code...
    return 0;
}

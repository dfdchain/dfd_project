#pragma once

#include <network/Node.hpp>
#include <wallet/Wallet.hpp>

#include <fc/filesystem.hpp>
#include <fc/network/ip.hpp>

#include <memory>

namespace dfdcore {
    namespace rpc {
        namespace detail { class RpcClientImpl; }

        using namespace dfdcore::consensus;
        using namespace dfdcore::wallet;

        typedef vector<std::pair<ShareType, string> > Balances;

        enum GenerateTransactionFlag
        {
            sign_and_broadcast = 0,
            do_not_broadcast = 1,
            do_not_sign = 2
        };

    }
} // dfdcore::rpc
FC_REFLECT_ENUM(dfdcore::rpc::GenerateTransactionFlag, (do_not_broadcast)(do_not_sign)(sign_and_broadcast))

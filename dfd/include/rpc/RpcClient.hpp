#pragma once

#include <network/Node.hpp>
#include <rpc_stubs/CommonApiRpcClient.hpp>
#include <wallet/Wallet.hpp>

#include <fc/filesystem.hpp>
#include <fc/network/ip.hpp>

#include <memory>

namespace dfdcore {
    namespace rpc {
        namespace detail { class RpcClientImpl; }

        /**
        *  @class rpc_client
        *  @brief provides a C++ interface to a remote DFD client over JSON-RPC
        */
        class RpcClient : public dfdcore::rpc_stubs::CommonApiRpcClient
        {
        public:
            RpcClient();
            virtual ~RpcClient();

            void connect_to(const fc::ip::endpoint& remote_endpoint,
                const dfdcore::consensus::PublicKeyType& remote_public_key = dfdcore::consensus::PublicKeyType());

            bool login(const std::string& username, const std::string& password);
            virtual fc::rpc::json_connection_ptr get_json_connection() const override;
            void reset_json_connection();
        private:
            std::unique_ptr<detail::RpcClientImpl> my;
        };
        typedef std::shared_ptr<RpcClient> RpcClientPtr;
    }
} // dfdcore::rpc

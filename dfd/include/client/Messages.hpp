#pragma once
#include <consensus/block/Block.hpp>
#include <client/Client.hpp>

namespace dfdcore {
    namespace client {

        enum MessageTypeEnum
        {
            trx_message_type = 1000,
            block_message_type = 1001,
            batch_trx_message_type = 1002
        };

        struct TrxMessage
        {
            static const MessageTypeEnum type;

            dfdcore::consensus::SignedTransaction trx;
            TrxMessage() {}
            TrxMessage(dfdcore::consensus::SignedTransaction transaction) :
                trx(std::move(transaction))
            {}
        };

        struct BatchTrxMessage
        {
            static const MessageTypeEnum type;
            std::vector<dfdcore::consensus::SignedTransaction> trx_vec;
            BatchTrxMessage() {}
            BatchTrxMessage(std::vector<dfdcore::consensus::SignedTransaction> transactions) :
                trx_vec(std::move(transactions))
            {}
        };

        struct BlockMessage
        {
            static const MessageTypeEnum type;

            BlockMessage(){}
            BlockMessage(const dfdcore::consensus::FullBlock& blk)
                :block(blk), block_id(blk.id()){}

            dfdcore::consensus::FullBlock    block;
            dfdcore::consensus::BlockIdType block_id;

        };

    }
} // dfdcore::client

FC_REFLECT_ENUM(dfdcore::client::MessageTypeEnum, (trx_message_type)(block_message_type)(batch_trx_message_type))
FC_REFLECT(dfdcore::client::TrxMessage, (trx))
FC_REFLECT(dfdcore::client::BatchTrxMessage, (trx_vec))
FC_REFLECT(dfdcore::client::BlockMessage, (block)(block_id))

#pragma once

#include <consensus/operation/Operations.hpp>

namespace dfdcore {
    namespace consensus {

        struct DefineSlateOperation
        {
            static const OperationTypeEnum type;

            vector<signed_int> slate;

            void evaluate(TransactionEvaluationState& eval_state)const;
        };

    }
} // dfdcore::consensus

FC_REFLECT(dfdcore::consensus::DefineSlateOperation, (slate))

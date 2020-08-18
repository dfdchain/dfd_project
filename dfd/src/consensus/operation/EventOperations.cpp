#include "consensus/operation/EventOperations.hpp"
#include "consensus/contract/ContractEntry.hpp"
#include "consensus/transaction/TransactionEvaluationState.hpp"
#include "consensus/chainstate/ChainInterface.hpp"
#include "consensus/Exceptions.hpp"


namespace dfdcore
{
    namespace consensus
    {

        void EventOperation::evaluate(TransactionEvaluationState& eval_state)const
        {
            try {
                if (!eval_state.evaluate_contract_result)
                    FC_CAPTURE_AND_THROW(not_be_result_of_execute, (type));

                oContractEntry entry = eval_state._current_state->get_contract_entry(id);
                if (!entry.valid())
                    FC_CAPTURE_AND_THROW(contract_not_exist);

                if (event_param.length() > EVENT_PARAM_MAX_LEN)
                    FC_CAPTURE_AND_THROW(event_parameter_length_over_limit, ("the parameter length of event function is over limit"));

                eval_state.event_vector.push_back(*this);
            } FC_CAPTURE_AND_RETHROW((*this))
        }


    }
}

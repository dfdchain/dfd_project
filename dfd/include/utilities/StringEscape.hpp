#pragma once

#include <string>

namespace dfdcore {
    namespace utilities {

        std::string escape_string_for_c_source_code(const std::string& input);

    }
} // end namespace dfdcore::utilities

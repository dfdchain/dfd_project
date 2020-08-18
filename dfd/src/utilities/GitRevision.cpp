#include <stdint.h>
#include <utilities/GitRevision.hpp>

#define DFDCORE_GIT_REVISION_SHA "7e7f255f185ffaf53397084f6ca747674088f176"
#define DFDCORE_GIT_REVISION_UNIX_TIMESTAMP 1488663957
#define DFDCORE_GIT_REVISION_DESCRIPTION "DFD"

namespace dfdcore {
    namespace utilities {

        const char* const git_revision_sha = DFDCORE_GIT_REVISION_SHA;
        const uint32_t git_revision_unix_timestamp = DFDCORE_GIT_REVISION_UNIX_TIMESTAMP;
        const char* const git_revision_description = DFDCORE_GIT_REVISION_DESCRIPTION;

    }
} // end namespace dfdcore::utilities

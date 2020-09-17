#pragma once

namespace dfdcore {
    namespace client {

#ifndef DFD_TEST_NETWORK
        static const std::vector<std::string> SeedNodes
        {	
			"18.163.35.127:20110",
			"18.166.65.26:20110",
			"18.166.70.49:20110",
			"18.166.3.100:20110",
			"18.166.162.254:20110",
			"18.166.158.200:20110"
        };
#else
        static const std::vector<std::string> SeedNodes
        {

        };
#endif

    }
} // dfdcore::client

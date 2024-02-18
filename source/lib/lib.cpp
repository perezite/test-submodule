#include "lib.h"

namespace lib
{
    std::string getBuildConfigurationInfo()
    {
        #ifdef _DEBUG
            return "debug build";
        #endif

        #ifdef NDEBUG
            return "release build";
        #endif 
    }
}

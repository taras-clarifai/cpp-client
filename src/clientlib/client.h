#ifndef CLIENT_H
#define CLIENT_H

#include "clientlib_global.h"

namespace clarifai {
    class CLIENTLIB_SHARED_EXPORT Client {
    public:
        Client();
        virtual ~Client();
    };
}

#endif

#pragma once

#include "Poco/Net/SocketStream.h"
#include <Poco/Net/SocketAddress.h>

class Sucker {
public:
    Sucker();
    ~Sucker();

    int open();
    int close();

private:
    SocketAddress addr;
    StreamSocket socket;
};

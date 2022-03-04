#pragma once

#include <Poco/Net/SocketAddress.h>
#include <Poco/Net/SocketStream.h>

class Sucker {
   public:
    Sucker(std::string ip, int port);
    ~Sucker();

    void open();
    void close();

   private:
    Poco::Net::StreamSocket* socket;
    Poco::Net::SocketStream* stream;
};

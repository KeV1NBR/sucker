#include "sucker.h"

#include <Poco/Net/SocketAddress.h>
#include <Poco/Net/SocketStream.h>
#include <Poco/Net/StreamSocket.h>

using Poco::Net::SocketAddress;
using Poco::Net::SocketStream;
using Poco::Net::StreamSocket;

using namespace std;

Sucker::Sucker(string ip, int port) {
    SocketAddress address(ip, port);
    socket = new StreamSocket(address);
    stream = new SocketStream(*socket);
}

Sucker::~Sucker() {}

void Sucker::open() { *stream << "ONX47" << endl; }

void Sucker::close() { *stream << "OFX47" << endl; }

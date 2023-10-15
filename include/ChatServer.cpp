//
// Created by wqueree on 14/10/23.
//

#include "ChatServer.h"

ChatServer::ChatServer(unsigned short port)
    : port_{port}
    , endpoint_{boost::asio::ip::tcp::v4(), port_}
    , acceptor_{io_context_, endpoint_}
    , socket_{io_context_}
{}

void ChatServer::connect() {
    acceptor_.accept(socket_);
}

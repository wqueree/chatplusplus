//
// Created by wqueree on 14/10/23.
//

#ifndef CHATPLUSPLUS_CHATSERVER_H
#define CHATPLUSPLUS_CHATSERVER_H

#include <iostream>
#include <boost/asio.hpp>

class ChatServer {
public:
    explicit ChatServer(unsigned short port);
    void connect();

private:
    boost::asio::ip::port_type port_;
    boost::asio::io_context io_context_;
    boost::asio::ip::tcp::endpoint endpoint_;
    boost::asio::ip::tcp::acceptor acceptor_;
    boost::asio::ip::tcp::socket socket_;
};


#endif //CHATPLUSPLUS_CHATSERVER_H

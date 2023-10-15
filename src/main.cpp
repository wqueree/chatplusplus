//
// Created by wqueree on 14/10/23.
//

#include <iostream>
#include <boost/version.hpp>
#include "ChatServer.h"

int main() {
    std::cout << "C++ Version:\t" << __cplusplus << std::endl;
    std::cout << "Boost Version:\t" << BOOST_LIB_VERSION << std::endl;
    ChatServer s {5071};
    return 0;
}

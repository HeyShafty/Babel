/*
** EPITECH PROJECT, 2020
** B-CPP-500-REN-5-1-babel-kylian.balan
** File description:
** BabelClient
*/

#ifndef BABELCLIENT_HPP_
#define BABELCLIENT_HPP_

#include "IClient.hpp"
#include "ITcpClient.hpp"
#include <string>

namespace Babel::Client
{
    class BabelClient : public IClient {
        public:
            BabelClient(int ac, char *av[]);
            ~BabelClient() = default;

            void connect() final;
        private:
            unsigned short port;
            std::string ip;
            Network::ITcpClient *tcpClient;
            bool connected;
    };
}

#endif /* !BABELCLIENT_HPP_ */
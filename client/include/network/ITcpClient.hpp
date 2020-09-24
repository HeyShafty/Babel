/*
** EPITECH PROJECT, 2020
** B-CPP-500-REN-5-1-babel-kylian.balan
** File description:
** ITcpClient
*/

#ifndef ITCPCLIENT_HPP_
#define ITCPCLIENT_HPP_

#include <string>
#include <QtCore/QObject>

namespace Babel::Client::Network
{
    class ITcpClient
    {
        public:
            virtual ~ITcpClient() = default;

            virtual bool send(const unsigned char *data, size_t size) const = 0;
            virtual char *getData() = 0;
            virtual void connectSocket() = 0;
            virtual bool isConnected() const = 0;
        signals:
            virtual void dataAvailable() = 0;
    };
}

Q_DECLARE_INTERFACE(Babel::Client::Network::ITcpClient, "ITcpClient")

#endif /* !ITCPCLIENT_HPP_ */
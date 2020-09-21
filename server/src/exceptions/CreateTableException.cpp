/*
** EPITECH PROJECT, 2020
** B-CPP-500-REN-5-1-babel-kylian.balan
** File description:
** CreateTableException
*/

#include "exceptions/CreateTableException.hpp"

Babel::Server::Exceptions::CreateTableException::CreateTableException(const std::string &message, const std::string &component)
    : BabelServerException(message, component)
{
}

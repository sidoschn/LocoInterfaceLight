#include <tcpServer.h>
#include <exception>
#include <vector>
#include <iostream>
#include <Bits.h>
#include <sstream>
#include <stdlib.h>
#include <io.h>
//: 

http::TcpServer::TcpServer(std::string ip_address, int port) {
        : m_ip_address(ip_address), m_port(port), m_socket(), m_new_socket(), m_incomingMessage(), m_socketAddress(), m_socketAddress_len(sizeof(m_socketAddress)), m_serverMessage(buildResponse())
    
        startServer();
    }
        
    
    
    http::TcpServer::~TcpServer()
    {
        closeServer();
    }

    int http::TcpServer::startServer() {

        if (WSAStartup(MAKEWORD(2, 0), &m_wsaData) != 0)
        {
            exitWithError("WSAStartup failed");
        }
        http::m_socket = socket(AF_INET, SOCK_STREAM, 0);
        if (m_socket < 0)
        {
            exitWithError("Cannot create socket");
            return 1;
        }
        return 0;
    }

    void http::TcpServer::closeServer() {

    }


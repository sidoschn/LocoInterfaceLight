#include <tcpServer.h>
#include <exception>
#include <vector>
#include <iostream>
#include <Bits.h>
#include <sstream>
#include <stdlib.h>
#include <io.h>
#include <Windows.h>
#include <WS2tcpip.h>
//: 

http::TcpServer::TcpServer() {
    
        startServer();
    }
        
    
    
    http::TcpServer::~TcpServer()
    {
        closeServer();
    }

    int http::TcpServer::startServer() {
        WSADATA wsaData;

        if (WSAStartup(MAKEWORD(2, 0), &wsaData) != 0)
        {
            exitWithError("WSAStartup failed");
        }
        m_socket = socket(AF_INET, SOCK_STREAM, 0);
        if (m_socket < 0)
        {
            exitWithError("Cannot create socket");
            return 1;
        }
        return 0;
    }

    void http::TcpServer::closeServer() {

    }


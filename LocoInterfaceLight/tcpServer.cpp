#include <tcpServer.h>
namespace http
{
    TcpServer::TcpServer()
    {
        startServer();
    }
        
    
    
    TcpServer::~TcpServer()
    {
        closeServer();
    }

    int TcpServer::startServer() {

    }

    void TcpServer::closeServer() {

    }

} // namespace http
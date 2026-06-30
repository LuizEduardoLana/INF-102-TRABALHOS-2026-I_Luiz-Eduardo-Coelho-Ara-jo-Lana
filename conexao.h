#ifndef CONEXAO_H
#define CONEXAO_H

#include <mysql/mysql.h>

class Conexao
{
private:
    MYSQL *conn;

public:
    Conexao();
    bool conectar();
    void desconectar();
    MYSQL* getConexao();
};

#endif
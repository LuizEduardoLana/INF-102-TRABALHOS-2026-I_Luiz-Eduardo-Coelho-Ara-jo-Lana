#include "Conexao.h"
#include <iostream>

using namespace std;

Conexao::Conexao()
{
    conn = mysql_init(NULL);
}

bool Conexao::conectar()
{
    conn = mysql_real_connect(
        conn,
        "localhost",
        "root",
        "",
        "faculdade",   // 👈 MUDOU AQUI
        3306,
        NULL,
        0
    );

    if (conn == NULL)
    {
        cout << "Erro ao conectar no banco!" << endl;
        return false;
    }

    cout << "Conectado com sucesso!" << endl;
    return true;
}

void Conexao::desconectar()
{
    if (conn != NULL)
        mysql_close(conn);
}

MYSQL* Conexao::getConexao()
{
    return conn;
}
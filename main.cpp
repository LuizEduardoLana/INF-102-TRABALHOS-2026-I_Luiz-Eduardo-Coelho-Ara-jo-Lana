#include <iostream>
#include <cstdlib>
#include "AlunoDAO.h"

using namespace std;

string init;
int opcao_menu;

int main()
{
    AlunoDAO dao;

    cout << "Olá, seja bem-vindo" << endl;
    cout << "Sistema de gerenciamento de alunos" << endl;

    do
    {
        cout << "Digite 'ok' para continuar: ";
        cin >> init;

    } while (init != "ok");

    do
    {
        cout << "\nEscolha uma opcao:" << endl;
        cout << "1) Cadastro" << endl;
        cout << "2) Alteracao" << endl;
        cout << "3) Listar" << endl;
        cout << "4) Excluir" << endl;
        cout << "5) Sair" << endl;

        cin >> opcao_menu;

        switch (opcao_menu)
        {
        case 1:
            dao.cadastrar();
            break;

        case 2:
            dao.alterar();
            break;

        case 3:
            dao.listar();
            break;

        case 4:
            dao.excluir();
            break;

        case 5:
            cout << "Saindo..." << endl;
            exit(0);

        default:
            cout << "Opcao invalida!" << endl;
        }

    } while (opcao_menu >= 1 && opcao_menu <= 5);

    return 0;
}
#include <iostream>

#include <string>

#include <cstdlib>

using namespace std;





string init;

int opcao_menu;



int main()

{

    cout << "Olá, seja bem-vindo" << endl;

    cout << "Através do app, você vai conseguir gerenciar os dados dos ALUNOS, ok?" << endl;

    cin >> init;

    

    do

    {

        cout << Por favor, digite 'ok' para continuar << endl;

        cin >> init;

        

    }while(init!="ok")

    

    cout << "Beleza! Escolha o que você pretende fazer:" << endl;

    cout << " 1) Cadastro de Aluno | 2) Alteração de dados do Aluno | 3) Exibir dados do Aluno" << endl;

    cout << " 4) Excluir Aluno | 5) Sair" << endl;

    cin >> opcao_menu;

    



    

    

    do

    {

    switch(opcao_menu)

    {

        case 1:

        cout << "Cadastro de Aluno;" << endl;

        dao.cadastrar();

        break;

        

        case 2:

        cout << "Alterar dados de Aluno;" << endl;

        dao.alterar();

        break;

        

        case 3: 

        cout << "Exibir dados de Aluno" << endl;

        dao.listar();

        break;

        

        case 4:

        cout << "Excluir Aluno;" << endl;

        dao.selecionar();

        break;

        

        case 5:

        cout << "Valeu, até mais" << endl;

        exit(0);

        break;

        

        default:

            cout << "Opa! Favor  digitar um número: 1 - 2 - 3 - 4 - 5" << endl;

            cout << " 1) Cadastro de Aluno | 2) Alteração de dados do Aluno | 3) Exibir dados do Aluno" << endl;

            cout << " 4) Excluir Aluno | 5) Sair" << endl;

            cin >> opcao_menu;

    }

    }while(menu>=1&&menu<=5)

    



    return 0;

}
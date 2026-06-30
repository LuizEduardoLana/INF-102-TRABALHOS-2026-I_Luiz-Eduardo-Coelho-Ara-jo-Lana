#include "Aluno.h"
#include <iostream>

using namespace std;

Aluno::Aluno() {}

Aluno::Aluno(int id,
             string nome,
             string sobrenome,
             string curso,
             int periodo,
             double nota,
             string dataEntrada)
{
    this->id = id;
    this->nome = nome;
    this->sobrenome = sobrenome;
    this->curso = curso;
    this->periodo = periodo;
    this->nota = nota;
    this->dataEntrada = dataEntrada;
}

void Aluno::adicionarNota(double novo_valor)
{
    nota += novo_valor;
    cout << "Nota atual: " << nota << endl;
}

void Aluno::cadastrarAluno()
{
    cout << "Nome: ";
    cin >> nome;

    cout << "Sobrenome: ";
    cin >> sobrenome;

    cout << "Curso: ";
    cin >> curso;

    cout << "Periodo: ";
    cin >> periodo;

    cout << "Nota: ";
    cin >> nota;

    cout << "Data de entrada: ";
    cin >> dataEntrada;
}

void Aluno::listarAluno()
{
    cout << "ID: " << id << endl;
    cout << "Nome: " << nome << endl;
    cout << "Sobrenome: " << sobrenome << endl;
    cout << "Curso: " << curso << endl;
    cout << "Periodo: " << periodo << endl;
    cout << "Nota: " << nota << endl;
    cout << "Data de entrada: " << dataEntrada << endl;
}

void Aluno::atualizarAluno()
{
    cout << "Atualizacao ainda sera ligada ao DAO (banco de dados)." << endl;
}

void Aluno::excluirAluno()
{
    cout << "Exclusao ainda sera feita pelo DAO (banco de dados)." << endl;
}
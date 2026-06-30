#ifndef ALUNO_H
#define ALUNO_H

#include <string>
using namespace std;

class Aluno
{
private:
    int id;
    string nome;
    string sobrenome;
    string curso;
    int periodo;
    double nota;
    string dataEntrada; // corrigido (não existe "date" em C++)

public:
    Aluno();

    Aluno(int id,
          string nome,
          string sobrenome,
          string curso,
          int periodo,
          double nota,
          string dataEntrada);

    void adicionarNota(double novo_valor);

    void cadastrarAluno();
    void listarAluno();
    void atualizarAluno();
    void excluirAluno();
};

#endif
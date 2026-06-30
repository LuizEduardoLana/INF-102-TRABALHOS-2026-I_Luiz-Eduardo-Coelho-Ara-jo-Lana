#include <iostream>
#include <string>
using namespace std;

int main()
{
    class Aluno {
        private:
        int id; 
        string nome;
        string sobrenome;
        string curso;
        int periodo;
        double nota;
        date dataEntrada;
        
        public:
        Aluno(int id_public,  string nome_public,string sobrenome_public,string curso_public;int periodo_public,
        double nota_public, date dataEntrada_public)
            {
                id = id_public;
                nome = nome_public;
                sobrenome = sobrenome_public;
                curso = curso_public;
                periodo = periodo_public;
                nota = nota_public;
                dataEntrada = dataEntrada_public;
            }
    }

    return 0;
}
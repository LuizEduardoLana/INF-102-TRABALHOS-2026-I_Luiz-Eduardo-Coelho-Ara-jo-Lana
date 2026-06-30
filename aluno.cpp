    void adicionarNota(double novo_valor)
    {
        nota += novo_valor;
        cout << " A nota total agora é " << nota_public << endl;
    };
    
    void cadastrarAluno();
    
    void listarAluno()
    {
        cout << "Id: " << id_public << endl;
        cout << "Nome: " << nome_public << endl;
        cout << "Sobrenome: " << sobrenome_public << endl;
        cout << "Curso: " << curso_public << endl;
        cout << "Período: " << periodo_public << endl;
        cout << "Nota: " << nota_public << endl;
        cout << "Data de entrada: " << dataEntrada_public << endl;
    };
    void atualizarAluno();
    void excluirAluno();
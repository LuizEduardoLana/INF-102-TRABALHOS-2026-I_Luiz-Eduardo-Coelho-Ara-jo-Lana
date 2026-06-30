void AlunoDAO::cadastrar()
{
    Conexao conexao;
    if (!conexao.conectar()) return;

    string nome, sobrenome, curso, data;
    int periodo;
    double nota;

    cout << "Nome: ";
    cin >> nome;

    cout << "Sobrenome: ";
    cin >> sobrenome;

    cout << "Curso (Engenharia de Computacao / Nutricao / Direito / Odontologia): ";
    cin.ignore();
    getline(cin, curso);

    cout << "Periodo: ";
    cin >> periodo;

    cout << "Nota: ";
    cin >> nota;

    cout << "Data entrada (YYYY-MM-DD): ";
    cin >> data;

    string query =
        "INSERT INTO alunos (nome, sobrenome, curso, `período`, nota, data_entrada) VALUES ('" +
        nome + "','" +
        sobrenome + "','" +
        curso + "'," +
        to_string(periodo) + "," +
        to_string(nota) + ",'" +
        data + "')";

    mysql_query(conexao.getConexao(), query.c_str());

    cout << "Aluno cadastrado!" << endl;

    conexao.desconectar();
}
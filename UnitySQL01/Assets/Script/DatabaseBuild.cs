using Mono.Data.Sqlite;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mono.Data.Sqlite;
using System.IO;

public class DatabaseBuild : MonoBehaviour
{
    //Variavel que define o nome do Banco de Dados
    public string DatabaseName;
    //Variavel que define o caimnhoo do banco de dados
    protected string databasePath;
    //Realiza a coneção com o banco de dados
    protected SqliteConnection  Connection => new SqliteConnection($"Data Source = {this.databasePath};");
    private void Awake()
    {
        //Preciso fazer uma checagem se o DatabaseName esta
        //preenchido, isso indica que se pode criar o arquivo
        //de banco de dados, se nao tiver um nome informado
        //não como criar o arquivo
        if (string.IsNullOrEmpty(this.DatabaseName)) 
        {
            //Se o nome for vazio a logica retorna
            Debug.LogError("Data base is empty");
            return;
        
        }
        //Com isso a função que cria o Bancoo de dados eh chamada


        //-------------------------------------------------
        //Esse codigo foi criado apaenas para testes
        //Cria um banc de dados se ele nao existir
        //using (var con = new SqliteConnection("Data source = TesteDB.db"))
        //{
        //    //Abre uma conexão com o banco de dados
        //    //para ser trabalhado
        //    con.Open();
        //}
        //-----------------------------------------------
        CreateDatabaseFileNoExists();
    }
    //Metodo que cria o Banco de dados se ele nao existir ainda
    //Para criar esse bancoo de dados precisamos do
    //DatabaseName
    private void CreateDatabaseFileNoExists() 
    {
        //Precisamos salvar esse arquivo dentro de uma pasta especial
        //Pra nao precisar esta verificando as barras do caminho
        //usamos a clase Path do System
        //Caminho completo ate o nosso arquivo de banco de dados
        this.databasePath = Path.Combine(Application.persistentDataPath, this.DatabaseName);
        //Devemos criar o banco somente se elçe naoo exisitir
        //Precisamos checar isso
        //Verifica se o arquivco nao existe
        if (!File.Exists(this.databasePath)) 
        {
            SqliteConnection.CreateFile(this.databasePath);
            Debug.Log($"Database path:"+(this.databasePath));
        }
    
    }

}




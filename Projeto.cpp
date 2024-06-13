// integrantes lucas e yasmin
#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

vector<string> passageiros;
vector<string> origens;
vector<string> destinos;
vector<string> datas;

void desenhaBoasVindas()
{
    cout << " _____________________________________ \n";
    cout << "|                                     |\n";
    cout << "|       Bem vindo ao programa         |\n";
    cout << "|                de                   |\n";
    cout << "|        Passagens Aereas             |\n";
    cout << "|_____________________________________|\n\n";
}

void desenhaMenu()
{
    cout << " ________________MENU_________________ \n";
    cout << "|                                     |\n";
    cout << "|     Escolha uma opcao:              |\n";
    cout << "|        1) Cadastrar passagem        |\n";
    cout << "|        2) Listar Passagens          |\n";
    cout << "|        0) Sair                      |\n";
    cout << "|________________MENU_________________|\n";
    cout << "Opcao :";  
}

void listaDePassagems(){
    cout << " _____________________________________ \n";
    cout << "|                                     |\n";
    cout << "|       Bem vindo ao programa         |\n";
    cout << "|                de                   |\n";
    cout << "|        Lista de Passageiros         |\n";
    cout << "|_____________________________________|\n\n";


for (int i = 0; i < 5; i++)
{

    cout << "Quantidade de passageiros: " << passageiros.size() << endl;



    cout << "Passageiros : " << passageiros[i] << endl << endl;

    cout << "Origem : " << origens[i] << endl << endl;

    cout << "Destinos : " << destinos[i] << endl << endl;

    cout << "Datas : " << datas[i] << endl << endl;

}

}
void LimpaBufferDoCin()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void CadastrarPassagem()
{
    LimpaBufferDoCin();
    string nome;
    string origenso;
    string destinoso;
    string dataso;
    cout << "Digite o nome do passageiros:  ";
    getline(cin, nome);
    cout << "\n";  

cout << "Digite a origem:  ";
    getline(cin, origenso);
    cout << "\n"; 

cout << "Digite o destino:  ";
    getline(cin, destinoso);
    cout << "\n"; 

cout << "Digite a data da viagem:  ";
    getline(cin, dataso);
    cout << "\n"; 

    passageiros.push_back(nome);
    origens.push_back(origenso);
    destinos.push_back(destinoso);
    datas.push_back(dataso);
}
int main()
{

    desenhaBoasVindas();
    system("cls");
    int opcao = -1;
    string continua;
    desenhaBoasVindas();
    do
    {

        desenhaMenu();
        cin >> opcao;
        cout << endl;

        switch (opcao)
        {
        case 1:
            cout << "Voce escolheu a opcao Cadastrar passagem \n\n";
            CadastrarPassagem();
            
            break;

        case 2:
            cout << "Voce escolheu a opcao Listar passagem \n\n";
            listaDePassagems();
            break;

        case 0:
            cout << "Obrigado por utilizar o progama :) \n\n";
            break;

        default:
            cout << "Opcao invalida";
            break;
        }

    } while (opcao != 0);
    return 0;
}
#include<iostream>
#include<vector>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int main(){


    int valor;
    vector <int> lista;
    double media = 0;

    string decisao;
    int opcao;
    int soma = 0;



    do{

        //algoritmo pra completar a lista
        cout << "Digite um valor: ";
        cin >> valor;

        lista.push_back(valor);

        cout << "Deseja sair? (s ou n): " <<endl;
        cin >> decisao;

    } while(decisao != "s");


    do {


        cout << "Digite [0] para sair da aplicação" <<endl;
        cout << "Digite [1] para imprimir o somatório de seus elementos" <<endl;
        cout << "Digite [2] para imprimir a média de seus elementos" <<endl;
        cout << "Digite [3] para imprimir a média e o somatório" <<endl;
        cout << "Digite [4] substituir por zero todos os valores negativos e imprimir a média" <<endl;
        cout << "Digite [5] para substituir por zero todos os valores repetidos e imprimir a média e o somatório" <<endl;
        cout << "Digite [6] mostrar o vetor ordenado" <<endl;

        cin >> opcao;

        system("clear");

        //estrutura para modularizar a aplicação
        switch(opcao){


        case 1:

        cout << "A opção escolhida foi: imprimir o somatório" << endl;

        for( int cont = 0 ; cont < lista.size() ; cont++){
            soma += lista[cont];
        }

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;

        cout << "*------------------------------------------------*" <<endl;
        cout << "A soma dos elementos digitados é: " << soma << endl;

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "*------------------------------------------------*" <<endl;

        break;

        case 2:


        cout <<fixed <<setprecision(1);
        cout << "imprimir a média" << endl;

            for(int cont = 0 ; cont < lista.size() ; cont ++){
                media = soma / cont;
            }

        cout << "A média dos elementos digitados é: " <<media <<endl;

        break;



        case 3:

        cout << "A media e o somatório dos elementos digitados sao: " <<endl;

        cout << "Média: " <<media;
        cout << "Somatório: " <<soma;


        break;

        }

    } while(opcao != 0);


    cout << "MUITO OBRIGADO";


    return 0;
}


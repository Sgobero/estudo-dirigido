#include<iostream>
#include<vector>
#include<iomanip>
#include<stdlib.h>
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int valor;
    vector <int> lista;
    double media = 0;
    double media1 = 0;

    string decisao;
    int opcao;
    double soma = 0;
    double soma1 = 0, soma2 = 0, soma3 = 0;
    double cont;
    double total = 0;
    double cont3;
    double contvezes = 0;



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

        //system("clear");

        //estrutura para modularizar a aplicação
        switch(opcao){


        case 1:

            soma1 = 0;

        cout << "A opção escolhida foi: imprimir o somatório" << endl;

        for( int cont1 = 0 ; cont1 < lista.size() ; cont1++){
            soma1 += lista[cont1];
        }

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;

        cout << "*------------------------------------------------*" <<endl;
        cout << "A soma dos elementos digitados é: " << soma1 << endl;

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "*------------------------------------------------*" <<endl;

        break;

        //----------------------------------------------------------------------

        case 2:

        soma = 0;

        cout <<fixed <<setprecision(1);
        cout << "imprimir a média" << endl;

            for(cont = 0 ; cont < lista.size() ; cont++){
                soma += lista[cont];
            }

                media = soma / cont;


        cout << "A média dos elementos digitados é: " <<media <<endl;

        break;

        //--------------------------------------------------------------------

        case 3:

            for( int cont1 = 0 ; cont1 < lista.size() ; cont1++){
            soma2 += lista[cont1];
        }

            for(cont = 0 ; cont < lista.size() ; cont++){
            soma3 += lista[cont];
        }

                media1 = soma3 / cont;

        cout << "*------------------------------------------------*" <<endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "A media e o somatório dos elementos digitados sao: " <<endl;
        cout << "Média: " <<media1 <<endl;
        cout << "Somatório: " <<soma2 <<endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "*------------------------------------------------*" <<endl;

        break;

        //---------------------------------------------------------------------------------

        case 4:


            for(cont3 = 0 ; cont3 < lista.size() ; cont3++){
                if (lista[cont3] >= 0){
                    total = total + lista[cont3];
                    contvezes++;
                }
        }
            total = total / contvezes;

        cout << "*------------------------------------------------*" <<endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Todos os valores negativos foram substituidos por zero." <<endl;
        cout << "Sua média ficou: " <<total <<endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "*------------------------------------------------*" <<endl;



        break;
        }


    } while(opcao != 0);


    cout << "MUITO OBRIGADO";

    system("pause");
    return 0;
}

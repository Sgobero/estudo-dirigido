#include<iostream>
#include<vector>
#include<iomanip>
#include<stdlib.h>
#include <locale.h>
#include<algorithm>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int valor;
    vector <int> lista;
    vector <int> listacase5;
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
    int cont5 = 0;
    int valorAnt5;
    int valorchecagem;



    cout << "Seja bem vindo(a) ao programa do Laurentino e Sgobero!!!" <<endl <<endl;
    cout << "Para iniciar, ";
    do{

        //algoritmo pra completar a lista
        cout << "Digite um valor: " <<endl;
        cin >> valor;
        lista.push_back(valor);
        listacase5.push_back(valor);
        cout << endl;
        cout << "Deseja parar de digitar? Digite *p* para parar ou *c* para continuar digitando: " <<endl;
        cin >> decisao;

    } while(decisao != "p");

        cout << endl;
        cout << "*------------------------------------------------*" <<endl;

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
        cout << "A opção escolhida foi: imprimir a média" << endl;

            for(cont = 0 ; cont < lista.size() ; cont++){
                soma += lista[cont];
            }

                media = soma / cont;

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;

        cout << "*------------------------------------------------*" <<endl;


        cout << "A média dos elementos digitados é: " << media <<endl;

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "*------------------------------------------------*" <<endl;


        break;

        //--------------------------------------------------------------------

        case 3:

            media1 = 0;
            soma2 = 0;
            soma3 = 0;

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

            total = 0;
            cont3 = 0;

            for(cont3 = 0 ; cont3 < lista.size() ; cont3++){
                if (lista[cont3] >= 0){
                    total = total + lista[cont3];
                }
        }
            total = total / cont3;

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



    //----------------------------------------------------------------------------------------------------------------


        case 5:


        sort(lista.begin(),lista.end());

        do{

            valorAnt5 = listacase5[cont5];
            cont5++;

            if (valorAnt5 == listacase5[cont5]){

                cont5--;
                listacase5[cont5] = 0;
                cont5++;
                valorchecagem = listacase5[cont5];
                cont5++;
                if (valorchecagem != listacase5[cont5]){
                    cont5--;
                    listacase5[cont5] = 0;
                    cont5++;
                }
                cont5--;

            }

        }while (cont5 < listacase5.size());

        soma = 0;

        cout <<fixed <<setprecision(1);

            for(cont = 0 ; cont < listacase5.size() ; cont++){
                soma += listacase5[cont];
            }

                media = soma / cont;

        soma1 = 0;

        cout << "A opção escolhida foi: imprimir o somatório" << endl;

            for( int cont1 = 0 ; cont1 < listacase5.size() ; cont1++){
               soma1 += listacase5[cont1];
        }


        cout << "*------------------------------------------------*" <<endl;

        cout << endl << endl << endl << endl << endl;

        cout << "Voce escolheu a opcão: substituir por zero todos os valores repetidos e imprimir a média e o somatório" << endl << endl << endl;
        cout << "Sua média ficou: " << media << endl << endl << endl;
        cout << "Seu somatorio ficou: " << soma1 << endl << endl << endl;

        cout << endl << endl << endl << endl;

        cout << "*------------------------------------------------*" <<endl;

        break;




     //----------------------------------------------------------------------------------------------



        case 6:

        cout << "*------------------------------------------------*" <<endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << " A ordem de todos os elementos digitados é: " <<endl;

            for(double contador = 0 ; contador < lista.size() ; contador ++){
                    cout << contador + 1 <<"º: " << lista[contador] <<endl;

            }
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "*------------------------------------------------*" <<endl;



        break;


        }

    } while(opcao != 0);

        cout << "*------------------------------------------------*" <<endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "OBRIGADO POR USAR O PROGRAMA! VOLTE SEMPRE!!" <<endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "*------------------------------------------------*" <<endl;


    system("pause");
    return 0;
}

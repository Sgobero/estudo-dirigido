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
    vector <int> listacase6;
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
    double media2 = 0;
    double soma4 = 0;
    double soma5 = 0;
    int mediacase5;
    int valorescase5;



    cout << "Seja bem vindo(a) ao programa do Laurentino e Sgobero!!!" <<endl <<endl;
    cout << "Para iniciar, ";
    do{

        //algoritmo pra completar a lista
        cout << "Digite um valor: " <<endl;
        cin >> valor;
        lista.push_back(valor);
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

        //system("clear"); n deu certo ;(

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


        listacase6 = lista;
        valorescase5 = 0;
        mediacase5 = 0;
        cont5 = 0;

        sort(listacase6.begin(),listacase6.end());

        do{

            valorAnt5 = listacase6[cont5];
            cont5++;

            if (valorAnt5 != listacase6[cont5]){

                cont5--;
                valorescase5 = valorescase5 + listacase6[cont5];
                cont5++;
            }

        }while (cont5 < listacase6.size());

        mediacase5 = valorescase5 / cont5;



        cout << "*------------------------------------------------*" <<endl;

        cout << endl << endl << endl << endl << endl;

        cout << "voce escolheu a opcao: substituir por zero todos os valores repetidos e imprimir a média e o somatório" <<endl;

        cout << endl << endl << endl << endl << endl;

        cout << "*------------------------------------------------*" <<endl;

        cout << "Sua média ficou: " << mediacase5 <<endl;

        cout << "Seu somatorio ficou: " << valorescase5 <<endl;

        cout << endl << endl << endl << endl << endl;

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

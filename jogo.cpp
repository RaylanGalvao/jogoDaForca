#include  <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    char palavra[30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto;

    chances=6;
    tam=0;
    i=0;
    acerto=false;
    acertos=0;
    cout <<"bem vindo ao jogo da forca"<< endl;
    cout << "***** Tema Animais *****"<< endl;
    cout << "fale para seu amigo tampar os olhos e digite e a palavra secreta"<< endl;
    cin >> palavra;
    system("cls");

    while(palavra[i] !='\0'){
        i++;
        tam++;
    }

    for(i=0; i<30; i++){
        secreta[i]='-';
    }
    while((chances > 0)&&(acertos < tam)){
        cout << "chances restantes: "<< chances << endl;
        cout << "palavra secreta:  ";
        for(i=0; i<tam; i++){
            cout << secreta[i];
        }
        cout << endl << "digite uma letra: ";
        cin >> letra[0];

        for (i=0; i<tam; i++){
            if(palavra[i]==letra[0]){
                acerto=true;
                secreta[i]=palavra[i];
                acertos++;
            }
        }
        if (!acerto){
            chances--;
        }
        acerto=false;
        system("cls");
    }
    if (acertos==tam){
        cout << "voce venceu." << endl;
    }else {
        cout << "voce perdeu" << endl;
    }
    system("pause");
    return 0;
}
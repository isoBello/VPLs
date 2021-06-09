# include <iostream> 

using namespace std; 

int main(){
    int var = 5; // 1
    int vetor[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // 2
    int *p { 0 }; // 3

    bool compara = false; 

    //Endereço de var
    cout << &var << endl; // 4

    //Valor de var
    cout << var << endl; // 5

    //Endereço de vetor
    cout << &vetor << endl; // 6

    //Endereço de p
    cout << &p << endl; // 7

    //Valor de p
    cout << p << endl; // 8

    p = &var; // 9
    //Valor de p
    cout << *p << endl; // 10

    //Endereço de p
    cout << &p << endl; // 11

    if (var == *p) compara = true;
    cout << compara << endl; // 12 

    *p = 10; // 13
    cout << var << endl; // 14

    p = vetor; // 15
    cout << p << endl; // 16

    cout << *p << endl; // 17

    p = &vetor[0]; // 18
    cout << p << endl; // 19
    cout << *p << endl; // 20

    //for(int i = 0, *p = vetor; i < 10; i++, p++) *p = vetor[i] * 10; // 21

    // Segunda forma de fazer - manipulando estritamente a variável p:
    for(int i = 0; i < 10; i++) *(p + i) = *(p + i) * 10;
    
    for(int i = 0; i < 10; i++) cout << vetor[i] << ' ';  // 22

    cout << endl; 
    for(int i = 0, *p = vetor; i < 10; i++, p++){ // 23
        *p = vetor[i]; 
        cout << *p << ' '; 
    } 

    cout << endl; 
    for(int i = 0; i < 10; i++) cout << *(p + i) << ' '; // 24
    
    cout << endl; 

    compara = false;
    if(vetor[4] == *(p + 4)) compara = true;
    cout << compara << endl; // 25

    // Endereço de vetor[4] à p
    p = &vetor[4]; // 26
    cout << *p << endl; // 27

    cout << *(p - 4) << endl; // 28

    return 0;
}
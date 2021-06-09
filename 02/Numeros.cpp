# include <iostream>
# include <vector>
# include <iterator>
# include <sstream>
# include <string>
# include <algorithm>
using namespace std; 


void separa_pares_impares(vector<int> const &numeros);
void print(vector<int> &pares, vector<int> &impares);
void remove(vector<int> &vetor);

int main(){
    string input;

    getline(cin, input);

    istringstream is(input);

    vector<int> vetor;
    int number; 

    while( is >> number){
        vetor.push_back(number);
    }

    separa_pares_impares(vetor);

    return 0;    
}


void separa_pares_impares(vector<int> const &numeros){
    vector<int> pares;
    vector<int> impares; 
    
    for(int i = 0; i < numeros.size(); i++){
        if(numeros[i] % 2 == 0){
            pares.push_back(numeros[i]);
        }else{
            impares.push_back(numeros[i]);
        }
    }

    print(pares, impares);

}

void print(vector<int> &pares, vector<int> &impares){
    remove(pares);

    for (auto it = pares.cbegin(); it != pares.cend(); it++) {
        cout << *it << ' ';
    }

    cout << endl;

    remove(impares);

    for (auto it = impares.cbegin(); it != impares.cend(); it++) {
        cout << *it << ' ';
    }
}

void remove(vector<int> &vetor){
    auto fim = vetor.end();
    for(auto i = vetor.begin(); i != fim; ++i){
        fim = std::remove(i + 1, fim, *i);
    }

    vetor.erase(fim, vetor.end());
}


// Qual o problema desse código? 



// Resposta: Funciona perfeitamente, mas possui complexidade de O(n²). 
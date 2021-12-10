#include<iostream>
#include"lib.h"
using namespace std;

int main () {
    int dim;
    cin >> dim;
    float numeri[dim];
    for (int i=0; i<dim; i++){
        cin >> numeri[i];
    }
    numeroMassimo(numeri, dim);
    cout << numeroMassimo(numeri, dim) << endl;

    return 0;
}

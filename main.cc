#include <iostream>
using namespace std;

int main(){
    cout << "Introduce un numero para comprobar si es par o impar:" << endl;
    int num;
    cin >> num;
    
    if(num<0){
    	cout << "ERROR: Numero negativo" << endl; //fallo a encontrar con bisect
    }
    else if (num%2==0) {
        cout << "Es un numero par" << endl;
    } else {
        cout << "Es un numero impar" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main(){
    cout << "Introduce un número para comprobar si es par o impar: " ;
    int num;
    cin >> num;
    
    if (num%2==0) {
        cout << "El número " << num << " es un número par." << endl;
    } else {
        cout << "El número " << num << " es un número impar." << endl;
    }

    return 0;
}

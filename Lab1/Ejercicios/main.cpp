#include <iostream>

using namespace std;

int ejercicio1(){
    int a, b;
    cout << "Ingrese dos numeros:" << endl;
    cin >> a;
    cin >> b;

    if (b == 0) {
        cout << endl << "Error: El divisor no puede ser cero." << endl;
        return 1;
    }

    int c = a%b;
    cout << endl << "El residuo de la division " << a << "/" << b << " es: " << c << endl;
    return 0;
}

int ejercicio2(){
    int a;
    cout << "Ingrese un numero:" << endl;
    cin >> a;
    if (a%2 == 0) {
        cout << endl << a << " es par." << endl;
    }
    else {
        cout << endl << a << " es impar." << endl;
    }
    return 0;
}

int ejercicio3(){

    int a, b;
    cout << "Ingrese dos numeros:" << endl;
    cin >> a;
    cin >> b;

    if (a == b) {
        cout << endl << a << " es igual a " << b << endl;
    }
    else if (a>b) {
        cout << endl << a << " es mayor que " << b << endl;
    }
    else{
        cout << endl << b << " es mayor que " << a << endl;
    }
    return 0;
}

int ejercicio4(){

    int a, b;
    cout << "Ingrese dos numeros:" << endl;
    cin >> a;
    cin >> b;

    if (a == b) {
        cout << endl << a << " es igual a " << b << endl;
    }
    else if (a>b) {
        cout << endl << b << " es menor que " << a << endl;
    }
    else{
        cout << endl << a << " es menor que " << b << endl;
    }
    return 0;
}

int ejercicio5() {

    int a, b;
    cout << "Ingrese dos numeros:" << endl;
    cin >> a;
    cin >> b;

    int c = a/b;
    cout << endl << a << "/" << b << " = " << c << endl;
    return 0;
}

int ejercicio6() {

    int a, b, total = 1;
    cout << "Ingrese dos numeros:" << endl;
    cin >> a;
    cin >> b;

    for (int i=0; i<b; ++i) {
        total *= a;
    }

    cout << endl << a << "∧" << b << " = " << total << endl;

    return 0;
}

int ejercicio7() {

    int a, total = 0;
    cout << "Ingrese un numero:" << endl;
    cin >> a;
    int aux = a;
    for(int i=0; i<a; ++i) {
        total += aux;
        --aux;
    }
    cout << endl << "La sumatoria desde 0 hasta " << a << " es " << total << endl;
    return 0;
}

int ejercicio8() {

    int a;
    long long total = 1;
    cout << "Ingrese un numero:" << endl;
    cin >> a;
    int aux = a;
    for(int i=0; i<a; ++i) {
        total *= aux;
        --aux;
    }
    cout << endl << a << "! = " << total << endl;
    return 0;
}

int ejercicio9() {

    const float pi = 3.1416;
    int a;

    cout << "Ingrese el radio del circulo:" << endl;
    cin >> a;

    float perimetro = 2*pi*a;
    float area = pi * a * a;

    cout << endl << "Perimetro: " << perimetro << endl;
    cout << endl << "Area: " << area << endl;

    return 0;
}
int ejercicio10(){

    int a;

    do{
        cout << "Ingrese un numero entre 1 y 100:" << endl;
        cin >> a;

    }while(a>100);

    for (int i = 1; i <= 100; ++i) {
        if (i%a == 0){
            cout << endl << i << endl;}

    }

    return 0;
}
int ejercicio11(){
    int a;
    cout<<"Digite un numero"<< endl;
    cin>>a;
    for(int i=1; i<11;i++){
        cout<<a<<" * "<<i<<" = "<< a*i<<endl;

    }
    return 0;
}


int ejercicio12() {
    int N;


    cout << "Introduce un numero entero : ";
    cin >> N;
    int pot = N;
    for (int i = 1; i <= 5; ++i) {

        cout << "N^" << i << " = " << pot << endl;
        pot *= N;
    }

    return 0;
}





int ejercicio13(){
    int a,c=0;
    cout<<"Escriba un numero: ";
    cin>> a;
    cout<<"Sus divisores son : ";
    for(int i=1;i<=a;i++){
        if(a%i==0){
            cout<< i<<" ";
            c++;
        }
    }
    cout<< endl;
    return 0;
}

int ejercicio14(){

    cout << "Columna 1" << "      " << "Columna 2" << endl;
    cout << "--------------------------" << endl;

    for (int i = 1, j = 50; i <= 50; ++i, --j) {
        cout << i;
        cout << "      ";
        cout << j << endl;
    }

    return 0;
}
int ejercicio15(){
    int numero;
    int sumatoria = 0;
    do {
        cout << "Escriba un numero (0 para salir): ";
        cin >> numero;
        if (numero != 0) {
            sumatoria += numero;
        }
    } while (numero != 0);
    cout << "La sumatoria de estos numeros es: " << sumatoria << endl;

    return 0;
}
int ejercicio16(){
    int numero;
    int suma = 0;
    int i=0;
    int prom;
    do {
        cout << "Escriba un numero (0 para salir): ";
        cin>> numero;
        if  (numero !=0){
            suma +=numero;
            i=i+1;
        }
        prom= suma/i;
    } while(numero !=0);
    cout<< "El promedio es: "<< prom << endl;
    return 0;
}
int ejercicio17(){
    int numero;
    int mayor = 0;
    bool Num1 = true;

    do {
        cout << "Esciba un numero (0 para salir):" << endl;
        cin >> numero;

        if (numero != 0) {
            if (Num1) {
                mayor = numero;
                Num1 = false;
            } else if (numero > mayor) {
                mayor = numero;
            }
        }

    } while (numero != 0);
    cout << "El numero mayor es: "<< mayor << endl;
    return 0;
}
int ejercicio18(){
    int N;
    cout << "Escriba un numero: ";
    cin >> N;
    bool escuaperfecto = false;

    int i = 1;
    while (i * i <= N) {
        if (i * i == N) {
            escuaperfecto = true;
            break;
        }
        i++;
    }
    if (escuaperfecto) {
        cout << N << " Es un cuadrado perfecto" << endl;
    } else {
        cout << N << " No es un cuadrado perfecto" << endl;
    }

    return 0;
}

int ejercicio19(){

    int N;
    bool esPrimo = true;

    cout << "Escriba un número: ";
    cin >> N;

    if (N < 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i < N; i++) {
            if (N % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }
    if (esPrimo) {
        cout << N << " Es primo." << endl;
    } else {
        cout << N << " No primo." << endl;
    }

    return 0;
}
int ejercicio20(){
    int N;
    int Noriginal;
    int inverso = 0;
    int digito;

    cout << "Escriba un numero: ";
    cin >> N;

    Noriginal = N;

    while (N > 0) {
        digito = N % 10;
        inverso = inverso * 10 + digito;
        N /= 10;
    }

    if (Noriginal == inverso) {
        cout << Noriginal << " Es palindromo." << endl;
    } else {
        cout << Noriginal << " No es palindromo." << endl;
    }

    return 0;
}
int main()
{

     ejercicio20();

}

#include <iostream>
#include <string>

using namespace std;


    int main(){

    double lados = 0;

    cout << "dame cantidad de lados :";
    cin >>lados;   

    double ac = 360/lados;
    double ai =  90*(lados - 2)/lados;
    double dv = lados - 3;
    double td = lados*(lados - 3)/2;
    
    string ac1 = to_string(ac);
    string ai1 = to_string(ai);
    string dv1 = to_string(dv);
    string td1 = to_string(td);
    cout << "los rasultados son :" + ac1 + " " +ai1 + " " + dv1 + " " + td1;
    system("PAUSE");
    return 0; 
    }
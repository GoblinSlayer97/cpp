#include <iostream>
#include <string>

using namespace std;
	
	 



	 int main() {
	 
	 	
	 	
	 
    double r1=0 ,r2=0,r3=0, paralela = 0,serie = 0;
		
		cout<< "introduzca resistencia 1 ";
		cin >>r1;
		
		cout << "introduzca resistencia 2 :";
		cin >> r2;
		
		cout <<"introduzca resitencia 3" ;
		cin >> r3;

	 	paralela = 1 / (1/r1 + 1/r2 + 1/r3);
		serie = r1 + r2 + r3;
		
		
		
		std::string par = std::to_string(paralela);
		std::string ser = std::to_string(serie);
		cout << "El resultado en paralelo es " + par + " y en serie " + ser;
		system("PAUSE");
		return 0;
		
	 
}
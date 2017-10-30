//Saber la edad promedio a la que se graduan los estudiantes de la lic en fisica.
//Barranco Diaz Carmen Viridiana 
//30/10/17

#include<iostream>
using namespace std;

int main(){
	int edad[14];
	int suma=0;
for(int i=0; i<14; i++)
{
cout<<"¿A que edad te graduaste?"<<endl;
cin>>edad[i];
suma=edad[i];
}
for(int j=0; j<14; j++)
	cout<<edad[j]<< ",";
cout<<endl;
cout<<"La edad promedio de graduacion esperado es"<<suma<<endl;

return 0;
}


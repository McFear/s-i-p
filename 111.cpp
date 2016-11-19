#include <iostream>

using namespace std;
int main() 
{

setlocale(LC_ALL,"");
double R,S;
cout<<"Введите радиус окружности: ";
cin>>R;
S=3.14*R*R;
cout<<"Площадь круга с заданным радиусом = "<<S<<""<<endl;
system ("pause");

 

double a,b;
double s,p;
cout<<"Введите число a: ";
cin>>a;
cout<<"Введите число b: ";
cin>>b;
s=a*b;
p=(a+b)*2;
cout<<"Площадь прямоугольныка = "<<s<<""<<endl;
cout<<"Периметр прямоугольныка = "<<p<<""<<endl;
system ("pause");
return 0;
}
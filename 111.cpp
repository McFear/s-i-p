#include <iostream>

using namespace std;
int main() 
{

setlocale(LC_ALL,"");
double R,S;
cout<<"������� ������ ����������: ";
cin>>R;
S=3.14*R*R;
cout<<"������� ����� � �������� �������� = "<<S<<""<<endl;
system ("pause");

 

double a,b;
double s,p;
cout<<"������� ����� a: ";
cin>>a;
cout<<"������� ����� b: ";
cin>>b;
s=a*b;
p=(a+b)*2;
cout<<"������� �������������� = "<<s<<""<<endl;
cout<<"�������� �������������� = "<<p<<""<<endl;
system ("pause");
return 0;
}
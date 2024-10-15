#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    //leo los tres par�metros de la ecuaci�n
	double a, b, c; cin >> a >> b >> c;
	//calculo la discriminante de la ecuaci�n
	double d=pow(b,2)-(4*a*c);
	if(d<0)
	{
	    //si la ra�z es negativa no tiene soluci�n
		cout<<"NA";
	}
	else if(d==0)
	{
	    //si la ra�z es 0, solo hay una soluci�n
		double x=((b*-1)+sqrt(d))/(2*a);
		cout<<x*1.0;
	}
	else
	{
	    //si la ra�z es positiva tiene dos soluciones +- ( sumando y restando)
		double x1=((b*-1)+sqrt(d))/(2*a);
		double x2=((b*-1)-sqrt(d))/(2*a);
		if(x1<x2)
		{
			cout<<x1*1.0<<endl<<x2*1.0;
		}
		else
		{
			cout<<x2*1.0<<endl<<x1*1.0;
		}
	}
}

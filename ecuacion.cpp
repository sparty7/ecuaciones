#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    //leo los tres parámetros de la ecuación
	double a, b, c; cin >> a >> b >> c;
	//calculo la discriminante de la ecuación
	double d=pow(b,2)-(4*a*c);
	if(d<0)
	{
	    //si la raíz es negativa no tiene solución
		cout<<"NA";
	}
	else if(d==0)
	{
	    //si la raíz es 0, solo hay una solución
		double x=((b*-1)+sqrt(d))/(2*a);
		cout<<x*1.0;
	}
	else
	{
	    //si la raíz es positiva tiene dos soluciones +- ( sumando y restando)
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

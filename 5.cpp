#include<iostream.h>
#include<math.h>
void main()
{
	int a,b,c;
	double s,m;
	cout<<"please input a,b,c:";
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	m=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"m="<<m<<endl;
}




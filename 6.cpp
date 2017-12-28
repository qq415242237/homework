#include<iostream.h>
void main()
{
	float r,l,s,pi;
	int k;
	pi=3.14159;
	cout<<"please input r,k:";
	cin>>r>>k;
	l=2*pi*r;
	s=pi*r*r;
	if(k==1)
		cout<<"s="<<s<<endl;
	if(k==2)
		cout<<"l="<<l<<endl;
	if(k==3)
		cout<<"s="<<s<<","<<"l="<<l<<endl;
}
	

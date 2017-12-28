#include<iostream.h>
float fun(int n)
{
	int i;
	float t,s=0;
	for(i=1;i<=n;i++)
		t=1.0/(i+1);
	s=t+1.0;
	return(s);
}
void main()
{
	int n;
	float s;
	cin>>n;
	s= fun(n);
	cout<<s<<endl;
}

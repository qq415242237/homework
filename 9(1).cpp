#include<iostream.h>
int fun(int m)
{
	int i,n=1;
	int a[50];
	for(i=1;i<=m;i++)
	{
	if(i%7==0||i%11==0)
			cout<<" "<<i;
	a[n]=i;
		n++;
	}
		return(n);
}
void main()
{
	int n, m;
	cin>>m;
	fun(m);
	cout<<n<<endl;

}

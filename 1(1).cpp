#include<iostream.h>
void main()
{
	int i=1,x;
	cout<<"please input x:"<<endl;
	cin>>x;
		while(x>=10)
	{
	x=x/10;
		i++;
		}
		cout<<"i"<<endl;
	switch(i)
	{
case1:cout<<"<10"<<endl;break;
case2:cout<<"10~99"<<endl;break;
case3:cout<<"100~999"<<endl;break;
    default:cout<<">1000"<<endl;break;
	}

}

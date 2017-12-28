#include<iostream.h>
void main()
{
	int year,i=0;
	for(year=2000;year<=3000;year++)
	{
		if(year%400==0||(year%4==0&&year%100!=0))
			cout<<"\t"<<year;
		i++;
		if(i%10==0)
			cout<<endl;
	}
}
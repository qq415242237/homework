#include <iostream.h> 
 #include <stdio.h> 
#include <string.h> 
 #define N 10 
 #define M 10 
void main() 
 { 
	char a[N],b[M]; 
 	cout<<"��������Ҫ���ӵ������ַ�����:"; 
 	cin>>a>>b;    //������gets��������޷��������У�ֻ����cin�ˡ� 
 	int l,s,i; 
 	l=strlen(a); 
 	s=strlen(b); 
 	for (i=0;i<s;i++) 
 	{ 
 		a[l+i]=b[i]; 
 	} 
     cout<<"������֮��������ǣ�"; 
 	for (i=0;a[i]!='\0';i++) 
 		cout<<a[i]; 
 	cout<<endl; //��֪Ϊ��һʹ��puts��䣬����ͻᱨ����������ֻ�÷���һ���ˡ� 
 } 

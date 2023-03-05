#include<iostream>
using namespace std;
template<class t>   t add(t &a,t &b)
{
	t result=a+b;
	return result;
}
template<class T> T div(T &a,T &b)
{
	T obj=a/b;
	return obj;
}

int main()
{
	int i=2;
	int j=4;
	int a=12;
	int b=4;
	float m=2.55;
	float n=6.5;
	cout<<"\nAddition of i & j is:"<<add(i,j);
	cout<<"\nAddition of m & n is:"<<add(m,n);
	cout<<"\ndivision of a & b is:"<<div(a,b);
	return 0;
}

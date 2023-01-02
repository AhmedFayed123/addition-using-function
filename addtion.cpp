#include<iostream>
using namespace std;
 int add(int x, int y)
 {
 	int sum;
 	sum=x+y;
 	return sum;
 }
 int main()
{
	 int n,m,res;
	 cout<<"enter 1st number : ";
	 cin>>m;
	 cout<<"enter 2st number : ";
     cin>>n;
	 res=add(m,n);
	 cout<<"sum = "<<res;
	 
}

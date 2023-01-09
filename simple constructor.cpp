#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class num
{
	int x,y;
	public:
		num(int a,int b)
		{
			x=a;
			y=b;
		}
		void dpy(void)
		{
			cout<<endl<<"first=" << x;
			cout<<endl<<"second=" << y<<endl;
			
		}
};
int main()
{
	num n1(45,67);
	num n2=num(89,23);
	n1.dpy();
	n2.dpy();
}

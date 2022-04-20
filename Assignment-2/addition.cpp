#include<iostream>
using namespace std;

class Addition{
	public:
		int num_1,num_2,sum;
		void add();
};

void Addition::add()
{
	cout<<"enter the first number :";
	cin>>num_1;
	
	cout<<"enter the second number :";
	cin>>num_2;
	
	sum = num_1+num_2;
	
	cout<<"\n Addition of "<<num_1 <<" and "<<num_2<<" is "<<sum;
}

int main()
{
	Addition a;
	a.add();
}

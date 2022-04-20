#include<iostream>
using namespace std;

class Student{
	private:
		int roll_no;
		char name,gender;
		double mob_no;
		
	private:
		void getdata();
		void display_data();
		
	public:
		void input()
		{
			void getdata();
			{
				cout<<"enter your name :";
				cin>>name;
	
				cout<<"enter your roll number :";
				cin>>roll_no;
	
				cout<<"enter your gender :";
				cin>>gender;
	
				cout<<"enter your mobile number :";
				cin>>mob_no;
			}

		}
		void show()
		{
			void display_data();
			{
			cout<<"Student's name : "<<name;
			cout<<"Student's roll number : "<<roll_no;
			cout<<"Student's gender : "<<gender;
			cout<<"Student's mobile number : "<<mob_no;
			}
			
		}
};




int main()
{
	Student s1;
	s1.input();
	s1.show();
}

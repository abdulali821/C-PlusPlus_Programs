#include<iostream>
using namespace std;
int main()

{
	int x;
	char student[90][90];
	char program[90][90];
	float gpa[90];
	cout<<"Enter Number of Students: ";
	cin>>x;
	cout<<endl;
	for(int i=1;i<=x;i++)
	{
		cout<<"------------------------"<<endl;
		cout<<"Student Name: ";
		cin>>student[i];
		cout<<"Program Name: ";
		cin>>program[i];
		cout<<"Student GPA: ";
		cin>>gpa[i];
		cout<<endl;
	}
		cout<<"------------------------"<<endl;
		cout<<"     Student RECORDS    "<<endl;
		cout<<"------------------------"<<endl<<endl;
	for(int i=1;i<=x;i++)
	{
		cout<<"Student No "<<i+0<<endl;
		cout<<"Student Name: "<<student[i]<<endl;
		cout<<"Program: "<<program[i]<<endl;
		cout<<"GPA: "<<gpa[i]<<endl;
		cout<<endl<<">>>>>>><<<<<<<"<<endl<<endl;
	}
}

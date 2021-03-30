#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
struct student{
	string title;
	string name[90];
	int age[90]; 
};
void search();
void add();
int main(){
	system("cls");
	char x;
	cout<<"----------------"<<endl<<"|1. Add file   |"<<endl<<"|2. Search file|"<<endl<<"|3. exit       |"<<endl<<"----------------";
	x=getch();
	if(x=='1'){
		add();
	}
	else if(x=='2'){
		search();
	}
	else if(x=='3'){
		return 0;
	}
	else {
		system("cls");
		main();
	}
}
void search()
{
	system("cls");
	ifstream file;
	string line,fileSearch;
	cout<<"Enter File Name: ";
	cin>>fileSearch;
	fileSearch+=".txt";
	file.open(fileSearch.c_str(),ios::in);
	if (file.is_open())
	{
		system("cls");
		while(!file.eof())
			{
			getline(file,line);
			cout<<line<<endl;
			}
	}
	else
		{
		cout<<"File doesn't exist!";	
		}
	file.close();
	system("pause");
	main();	
}
void add(){
	system("cls");
	fstream file;
	string fileName;
	cout<<"Enter the file Name: ";
	cin>>fileName;
	fileName+=".txt";
	file.open(fileName.c_str(),ios::app);
	if(!file){
		cout<<"Sorry File Doesn't Create";
	}
	else{
	int y;
	int i;
	student x;
	cout<<"Enter Title: ";
	cin>>x.title;
	cout<<"Enter total "<<x.title<<"s: ";
	cin>>y;
	for(i=1;i<=y;i++)
	{
	cout<<"Enter name: ";
	cin>>x.name[i];
	cout<<"Enter Age: ";
	cin>>x.age[i];
	}
	system("cls");
	for(i=1;i<=y;i++){
	file<<"----------------------"<<endl;
	file<<x.title<<" No "<<i<<endl;
	file<<"Name: "<<x.name[i]<<endl;
	file<<"Age: "<<x.age[i]<<endl;
	file<<"----------------------"<<endl<<endl;
	}
	}
	system("pause");
	main();
}

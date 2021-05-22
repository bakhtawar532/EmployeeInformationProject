#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
class employee
{
	private:
		string id,name,address,salary;
		int age;
	public:
	void getdata()
	{
		top:
		ofstream ef("E:\\Programs\\Assignment OOP\\Employee Details\\ename.txt");
		ofstream ef1("E:\\Programs\\Assignment OOP\\Employee Details\\eid.txt");
		ofstream ef2("E:\\Programs\\Assignment OOP\\Employee Details\\eaddress.txt");
		ofstream ef3("E:\\Programs\\Assignment OOP\\Employee Details\\esalary.txt");
		ofstream ef4("E:\\Programs\\Assignment OOP\\Employee Details\\eage.txt");
		int c=1;
		for(int i=1;i<=c;i++)
		{
			system("cls");
			cout<<"\n\n\n\n\t\t\t\t\t\tEmployee Details....";
			cout<<"\n\t\t";
			for(int i=1;i<=86;i++)
			{
				cout<<'=';
			}
			cout<<"\n\t\t\tEmplyee DataSheet Edit Mode: ";
			cout<<"\n\t\t\t\tID: ";
			cin>>id;
			ef1<<id<<"\n";
			cout<<"\n\t\t\t\tName: ";
			cin>>name;
			ef<<name<<"\n";
			cout<<"\n\t\t\t\tAge: ";
			cin>>age;
			ef4<<age<<"\n";
			cout<<"\n\t\t\t\tAddress: ";
			cin>>address;
			ef2<<address<<"\n";
			cout<<"\n\t\t\t\tSalary: ";
			cin>>salary;
			ef3<<salary<<"\n";
			cout << "Record Has Been Saved ..........." << endl;
			cout<<"\n\n\t\tADD NEW: \'A\'\t\t\t\t\t\t\t\t      Back: \'B\'\n";
			char ch;
			ch=getch();
			if (ch=='A'|| ch=='a')
				{
					c++;
				}
			else 
			{
				break;
			}
		}
	}
	void search()
	{
		top:
		ifstream file("E:\\Programs\\Assignment OOP\\Employee Details\\ename.txt");
		ifstream file1("E:\\Programs\\Assignment OOP\\Employee Details\\eid.txt");
		ifstream file2("E:\\Programs\\Assignment OOP\\Employee Details\\eaddress.txt");
		ifstream file3("E:\\Programs\\Assignment OOP\\Employee Details\\esalary.txt");
		ifstream file4("E:\\Programs\\Assignment OOP\\Employee Details\\eage.txt");
		system("cls");
		cout<<"\n\n\n\n\t\t\t\t\t\tEmployee Details....";
		cout<<"\n\t\t";
		for(int i=1;i<=86;i++)
		{
			cout<<'=';
		}
		cout<<"\n\t\t\tEmplyee DataSheet Search Mode: ";
		cout<<"\n\t\t\tEnter S to Search " << endl;
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t     Back: \'B\'\n";
		char ch;
		ch=getch();
		if(ch=='S'||ch=='s')
		{
			system("cls");
			cout<<"Enter Name of Employee You Want to Search: ";
			string name1;
			cin>>name1;
			int c=1;
			bool f;
			while(!file.eof())
			{
				file>>name;
				if(name==name1)
				{
					f=true;
					for(int i=1;i<=c;i++)
					{
						file1>>id;
						file2>>address;
						file3>>salary;
						file4>>age;
					}
					system("cls");
					cout<<"\t\t\t\t\tSearch Report\n";
					for(int i=1;i<=102;i++)cout<<"=";
					cout<<"\nName\t\t\tID\t\t\tAge\t\t\tAddress\t\t\tSalary";
					cout<<"\n"<<name<<"\t\t\t"<<id<<"\t\t\t"<<age<<"\t\t\t"<<address<<"\t\t\t"<<salary;
					cout<<"\n\nMain Manu: \'M\'\t\t\t\t\t\t\t\t\t\t     Back: \'B\'\n";
					char ch;
					ch=getch();
					if(ch=='B'||ch=='b')
					goto top;
					break;
				}
				c++;
			}
			if(f!=true)
			{
				cout<<"\nName\t\t\tID\t\t\tAge\t\t\tAddress\t\t\tSalary";
				cout<<"\n\t\t\t\aRecord Not Found!!!";
				cout<<"\n\nMain Manu: \'M\'\t\t\t\t\t\t\t\t\t\t     Back: \'B\'\n";
				char ch=getch();
				if(ch=='B'||ch=='b')
				goto top;
			}
			file.close();
			file1.close();
			file2.close();
			file3.close();
			file4.close();
		}
	}	
	void clear()
	{
		ofstream file("E:\\Programs\\Assignment OOP\\Employee Details\\ename.txt");
		ofstream file1("E:\\Programs\\Assignment OOP\\Employee Details\\eid.txt");
		ofstream file2("E:\\Programs\\Assignment OOP\\Employee Details\\eaddress.txt");
		ofstream file3("E:\\Programs\\Assignment OOP\\Employee Details\\esalary.txt");
		ofstream file4("E:\\Programs\\Assignment OOP\\Employee Details\\eage.txt");
		file<<"";
		file1<<"";
		file2<<"";
		file3<<"";
		file4<<"";
	}
	void ShowRecords()
	{
		top:
		string name,id,address,salary,age;
		string a;
		char ch;
		int c=0;
		ifstream file("E:\\Programs\\Assignment OOP\\Employee Details\\ename.txt");
		ifstream test("E:\\Programs\\Assignment OOP\\Employee Details\\ename.txt");
		ifstream file1("E:\\Programs\\Assignment OOP\\Employee Details\\eid.txt");
		ifstream file2("E:\\Programs\\Assignment OOP\\Employee Details\\eaddress.txt");
		ifstream file3("E:\\Programs\\Assignment OOP\\Employee Details\\esalary.txt");
		ifstream file4("E:\\Programs\\Assignment OOP\\Employee Details\\eage.txt");
		system("cls");
		cout<<"\n\n\n\n\t\t\tEmployee Details....\n";
		for(int i=1;i<=86;i++)
		{
			cout<<'=';
		}
		while(!test.eof())
		{
			test>>a;
			c++;
		}
		cout<<"\nNo\t\tName\t\tID\t\tAge\t\tAddress\t\tSalary\n\n";
		if(c>0)
		{
			for(int i=1;i<=c-1;i++)
			{
				file>>name;
				file1>>id;
				file2>>address;
				file3>>salary;
				file4>>age;
				cout<<i<<"\t\t"<<name<<"\t\t"<<id<<"\t\t"<<age<<"\t\t"<<address<<"\t\t"<<salary<<"\n";
			}
			cout<<"\n\nNo. of Records: "<<c-1;
			cout<<"\t\t\t\t\t\t\t\tBack: \'B\'\n";
			a=getch();
		}
		else
		{
			cout<<"\t\t\tNo Record Found!!\a";
			cout<<"\n\nNo. of Records: "<<c-1;
			cout<<"\t\t\t\t\t\t\t\t\t\t\t     Back: \'B\'\n";
			ch=getch();		
		}
		if(ch=='b'||ch=='B')
			goto top;
	}
		
};
class menu:public employee
{
	public:
		void home()
		{
			system("cls");
			top:
			cout<<"\n\n\n\n\t\t\t\t\t\t    Main Menu";
			cout<<"\n\t\t";
			for(int i=1;i<=86;i++)
			{
				cout<<'=';
			}
			cout <<"\nEnter A to Add Employee:" << endl;
			cout <<"Enter S to Search Employee:" << endl;
			cout <<"Enter D to Clear All Records " << endl;
			cout <<"Enter V to View All Records... " << endl;
			cout<<"OR Enter E to Exit" << endl;
			char ch;
			ch=getch();
			switch(ch)
			{
				case 'a':
				case 'A':
					{
						employee::getdata();
						break;
					}
				case 's':
				case 'S':
					{
						employee::search();
						break;
					}
				case 'D':
				case 'd':
					{
						employee::clear();
						break;
					}
				case 'e':
				case 'E':
					{
						system("cls");
						exit(0);
						break;
					}
				case 'V':
				case 'v':
					{
						employee::ShowRecords();
						break;
					}
				default:
					{
						system("cls");
						goto top;
					}
				
			}
		}
};
int main()
{
	top:
	system("cls");
	menu obj;
	obj.home();
	goto top;
	
}

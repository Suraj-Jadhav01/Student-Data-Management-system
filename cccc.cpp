#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class student
{
	private:
		int rollno;
		char name[20];
		char gender;
		int age;
		int std;
		float marks;
	public:
		int getRollNo()
		{
			return rollno;
		}
	   student()
	   {
	   	 rollno=0;
	   	 strcpy(name,"Noname");
	   	 gender='-';
	   	 age=0;
	   	 std=1;
	     marks=0;
	   }	
	   student(int rn, char nm[20], char g, int a, int s, float m){
	   	 rollno=rn;
	   	 strcpy(name,nm);
	   	 gender=g;
	   	 age=a;
	   	 std=s;
	     marks=m;
	   }
void getData()
	   {
	   	cout<<"enter student details\n";
	   	cout<<"enter roll number :";
	   	cin>>rollno;
	   	cout<<"enter name of student :";
	   	cin>>name;
	   	cout<<"enter gender :";
	   	cin>>gender;
	   	cout<<"enter age of student :";
	   	cin>>age;
	   	cout<<"enter std :";
	   	cin>>std;
	   	cout<<"enter marks of student :";
	   	cin>>marks;
	   }
	    void showData()
	   {
	   	
		cout<<"student details\n";
		cout<<"Roll No: "<<rollno;
		cout<<"Name   : "<<name;
		cout<<"Gender : "<<gender<<endl;
		cout<<"Age    : "<<age<<endl;
		cout<<"Std    : "<<std<<endl;
		cout<<"Marks  : "<<marks<<endl;
	   }
void listData()
	   {
		cout.setf(ios::left);
		cout<<setw(10)<<rollno;
		cout<<setw(20)<<name;
		cout<<setw(10)<<gender;
		cout<<setw(5)<<age;
		cout<<setw(5)<<std;
		cout<<setw(10)<<marks;
		cout<<endl;
	   }
};
    void menu()
    {
    	cout<<"student record\n";
	}
	void heading(){
	cout.setf(ios::left);
		cout<<setw(10)<<"Rollno";
		cout<<setw(20)<<"Name";
		cout<<setw(10)<<"Gender";
		cout<<setw(5)<<"Age";
		cout<<setw(5)<<"Std";
		cout<<setw(10)<<"Marks";
		cout<<endl;	
	}		
int main()
{
   int n=0, ch, i, flag=0, rn;
   student s[10];
   do
   {
   	system("cls");
   	menu();
   	cin>>ch;
   	switch(ch)
   	{
   		case 1: s[n].getData();
   		n++;
   		cout<<"\nRecord saved successfully...\n";
   		break;
   		case 2:
   				if(n>0)
   				{
   					heading();
   					for(int i=0;i<n;i++)
   					{
   						s[i].listData();
					}
   					
				}
				else
				{
					cout<<"\nNothing to display..\n";
				} 
		break;
		case 3:
		    if(n>0)
			{
				cout<<"Enter Roll No to display: ";
				cin>>rn;
				for(i=0;i<n;i++)
				{
					if(rn==s[i].getRollNo())
					{
						s[i].showData();
						flag++;
					}
				}
			}
			else
			{
				cout<<"\nNothing to display...\n";
			}
			if(flag==0)
			{
				cout<<"\nNo such roll no found...\n";
			}
		break;
	}
	system("pause");
   }
while(ch);
}
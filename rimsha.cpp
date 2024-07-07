/*
	Name: adina mehmood
	roll number:  su91-bietm-f22-011	
*/
#include<iostream>
#include<fstream>
using namespace std;
class mess
{
	protected:
		string student1[200][30][2];
		string student2[200][30][2];
		string student3[200][30][2];
		string student4[200][30][2];
	public:
		int g()
		{
			int y;
			cout<<"ENTER YOUR ID : "<<endl;
			while(true)
			{
				cout<<"ID : ";
				cin>>y;
				y=y-1;
				if(y>=0&&y<200)
				{
					return(y);
				}
				else
				{
					continue;
				}
			}
		}
		void mess1()
		{
			ofstream mess1("mess1.txt");
			for(int a=0;a<200;a++)
			{
				mess1<<"STUDENT "<<a+1<<endl;
				for(int b=0;b<30;b++)
				mess1<<"DAY "<<b+1<<"\t"<<student1[a][b][0]<<"\t "<<student1[a][b][1]<<endl;
			}
		}
		void mess2()
		{
			ofstream mess2("mess2.txt");
			for(int a=0;a<200;a++)
			{
				mess2<<"STUDENT "<<a+1<<endl;
				for(int b=0;b<30;b++)
				mess2<<"DAY "<<b+1<<"\t"<<student2[a][b][0]<<"\t "<<student2[a][b][1]<<endl;
			}
		}
		void mess3()
		{
			ofstream mess3("mess3.txt");
			for(int a=0;a<200;a++)
			{
				mess3<<"STUDENT "<<a+1<<endl;
				for(int b=0;b<30;b++)
				mess3<<"DAY "<<b+1<<"\t"<<student3[a][b][0]<<"\t "<<student3[a][b][1]<<endl;
			}
		}
		void mess4()
		{
			ofstream mess4("mess4.txt");
			for(int a=0;a<200;a++)
			{
				mess4<<"STUDENT "<<a+1<<endl;
				for(int b=0;b<30;b++)
				mess4<<"DAY "<<b+1<<"\t"<<student4[a][b][0]<<"\t "<<student4[a][b][1]<<endl;
			}
		}
		void input()
		{
			int id,hostel,dayindex;
			id=g();
				cout<<"ENTER THE HOSTEL NO : ";
				cin>>hostel;
				cout<<"ENTER THE DAY OUT OF 30 IN A MONTH : ";
				while(true)
				{
					cout<<"day : ";
					cin>>dayindex;
					dayindex=dayindex-1;
					if(dayindex<30&&dayindex>=0)
					{
						break;
					}
					else
					continue;
				} 
				if(hostel==1)
				{
					cout<<"ENTER YOUR BREAK-FAST : ";
					cin>>student1[id][dayindex][0];
					cout<<"ENTER YOUR DINNER : ";
					cin>>student1[id][dayindex][1];
					mess1();
				}
				else if(hostel==2)
				{
					cout<<"ENTER YOUR BREAK-FAST : ";
					cin>>student2[id][dayindex][0];
					cout<<"ENTER YOUR DINNER : ";
					cin>>student2[id][dayindex][1];
					mess2();
				}
				else if(hostel==3)
				{
					cout<<"ENTER YOUR BREAK-FAST : ";
					cin>>student3[id][dayindex][0];
					cout<<"ENTER YOUR DINNER : ";
					cin>>student3[id][dayindex][1];
					mess3();
				}
				else if(hostel==4)
				{
					cout<<"ENTER YOUR BREAK-FAST : ";
					cin>>student4[id][dayindex][0];
					cout<<"ENTER YOUR DINNER : ";
					cin>>student4[id][dayindex][1];
					mess4();
				}
				else
				cout<<"user failed to enter a valid hostel number:";
		}
};
class security:public mess
{
	protected:
	int guard[4];
	public:
		void sec1()
		{
			ofstream secin("security 1.txt");
			secin<<"CHIEF = 1 in day shift\n";
			for(int a=0;a<4;a++)
			{
				secin<<"GUARD "<<a+1<<endl;
			}
			secin<<endl;
			secin<<"CHIEF = 2 in night shift\n";
			for(int a=0;a<4;a++)
			{
				secin<<"GUARD "<<a+1<<endl;
			}
			secin<<endl;
		}
		void sec2()
		{
			ofstream cocur("extra curricular activities.txt");
			cocur<<"1.CRICKET MATCH\n";
			cocur<<"2.HOCKEY MATCH\n";
			cocur<<"3.TENNIS MATCH\n";
			cocur<<"4.BADDMINTON MATCH\n";
			cocur<<"5.BOLLYBALL MATCH\n";
			cocur<<"6.TRIP TO MUSEUM \n";
			cocur<<"7.TRIP TO GREEN HILLS\n";
			cocur<<"8.BONFIRE\n";
		}
};
class clothes:public security
{
	protected:
		float cloth11[200][3]={};
		float cloth22[200][3]={};
		float cloth33[200][3]={};
		float cloth44[200][3]={};
	public:
		void cloth1()
		{
			ofstream cloth1("cloth1.txt");
			for(int a=0;a<200;a++)
			{
				cloth1<<"id= "<<a+1<<"\t"<<cloth11[a][0]<<"\t "<<cloth11[a][1]<<"\t "<<cloth11[a][2]<<endl;
			}
		}
		void cloth2()
		{
			ofstream cloth2("cloth2.txt");
			for(int a=0;a<200;a++)
			{
				cloth2<<"id= "<<a+1<<"\t"<<cloth22[a][0]<<"\t  "<<cloth22[a][1]<<"\t "<<cloth22[a][2]<<endl;
			}
		}
		void cloth3()
		{
			ofstream cloth3("cloth3.txt");
			for(int a=0;a<200;a++)
			{
				cloth3<<"id= "<<a+1<<"\t"<<cloth33[a][0]<<"\t  "<<cloth33[a][1]<<"\t "<<cloth33[a][2]<<endl;
			}
		}
		void cloth4()
		{
			ofstream cloth4("cloth4.txt");
			for(int a=0;a<200;a++)
			{
				cloth4<<"id= "<<a+1<<"\t"<<cloth44[a][0]<<"\t  "<<cloth44[a][1]<<"\t "<<cloth44[a][2]<<endl;
			}
		}
		void input3()
		{
			int id,hostel,e=0;
			id=g();
				cout<<"ENTER THE HOSTEL NO = ";
				cin>>hostel;
				if(hostel==1)
				{
					cout<<"NUMBER OF CLOTH WASHED : ";
					cin>>cloth11[id][0];
					cout<<"NUMBER OF CLOTH IRONED : ";
					cin>>cloth11[id][1];
					cloth11[id][2]=((cloth11[id][0])*12)+((cloth11[id][1])*5);
					cloth1();
				}
				else if(hostel==2)
				{
					cout<<"NUMBER OF CLOTH WASHED : ";
					cin>>cloth22[id][0];
					cout<<"NUMBER OF CLOTH IRONED : ";
					cin>>cloth22[id][1];
					cloth22[id][2]=((cloth22[id][0])*12)+((cloth22[id][1])*5);
					cloth2();
				}
				else if(hostel==3)
				{
					cout<<"NUMBER OF CLOTH WASHED : ";
					cin>>cloth33[id][0];
					cout<<"NUMBER OF CLOTH IRONED : ";
					cin>>cloth33[id][1];
					cloth33[id][2]=((cloth33[id][0])*12)+((cloth33[id][1])*5);
					cloth3();				
				}
				else if(hostel==4)
				{
					cout<<"NUMBER OF CLOTH WASHED : ";
					cin>>cloth44[id][0];
					cout<<"NUMBER OF CLOTH IRONED : ";
					cin>>cloth44[id][1];
					cloth44[id][2]=((cloth44[id][0])*12)+((cloth44[id][1])*5);
					cloth4();
				}
				else
				cout<<"user failed to enter a valid hostel number:";
		}
};
class guest:public clothes
{
	protected:
		string guest11[200][3];
		string guest22[200][3];
		string guest33[200][3];
		string guest44[200][3];
		int record1[200]={};
		int record2[200]={};
		int record3[200]={};
		int record4[200]={};
	public:
		void guest1()
		{
			ofstream guest1("guest1.txt");
			for(int a=0;a<200;a++)
			{
				guest1<<"id= "<<a+1<<"\t"<<guest11[a][0]<<"\t "<<guest11[a][1]<<"\t"<<guest11[a][2]<<endl;
			}
		}
		void guest2()
		{
			ofstream guest2("guest2.txt");
			for(int a=0;a<200;a++)
			{
				guest2<<"id= "<<a+1<<"\t"<<guest22[a][0]<<"\t  "<<guest22[a][1]<<"\t"<<guest22[a][2]<<endl;
			}
		}
		void guest3()
		{
			ofstream guest3("guest3.txt");
			for(int a=0;a<200;a++)
			{
				guest3<<"id= "<<a+1<<"\t"<<guest33[a][0]<<"\t  "<<guest33[a][1]<<"\t"<<guest33[a][2]<<endl;
			}
		}
		void guest4()
		{
			ofstream guest4("guest4.txt");
			for(int a=0;a<200;a++)
			{
				guest4<<"id= "<<a+1<<"\t"<<guest44[a][0]<<"\t  "<<guest44[a][1]<<"\t"<<guest44[a][2]<<endl;
			}
		}
		void input2()
		{
			int id,hostel,d;
			id=g();
				cout<<"ENTER THE HOSTEL NO = ";
				cin>>hostel;
				if(hostel==1)
				{
					while(record1[id]<3)
					{
						cout<<"ENTER YOU GUEST"<<record1[id]+1<<" NAME : ";
						cin>>guest11[id][record1[id]];
						cout<<"ENTER ANOTHER GUEST:\n1.YES\n2.NO\nCHOICE : ";
						cin>>d;
						record1[id]++;
						if(d==1)
						{
							continue;
						}
						else
						break;
					}
					guest1();
				}
				else if(hostel==2)
				{
				while(record1[id]<3)
					{
						cout<<"ENTER YOU GUEST"<<record2[id]+1<<" NAME : ";
						cin>>guest22[id][record2[id]];
						cout<<"enter another guest:\n1.YES\n2.NO\nCHOICE : ";
						cin>>d;
						record2[id]++;
						if(d==1)
						{
							continue;
						}
						else
						break;
					}
					guest2();
				}
				else if(hostel==3)
				{
					while(record3[id]<3)
					{
						cout<<"ENTER YOU GUEST"<<record3[id]+1<<" NAME : ";
						cin>>guest33[id][record3[id]];
						cout<<"enter another guest:\n1.yes\n2.NO\nCHOICE : ";
						cin>>d;
						record3[id]++;
						if(d==1)
						{
							continue;
						}
						else
						break;
					}
					guest3();
				}
				else if(hostel==4)
				{
					while(record4[id]<3)
					{
						cout<<"ENTER YOU GUEST"<<record4[id]+1<<" NAME = ";
						cin>>guest44[id][record4[id]];
						cout<<"enter another guest:\n1.YES\n2.no\nchoice = ";
						cin>>d;
						record4[id]++;
						if(d==1)
						{
							continue;
						}
						else
						break;
					}
					guest4();
				}
				else
				cout<<"user failed to enter a valid hostel number:";
		}
};
class salary:public guest
{
	private:
		long int hostelcash;
		long int totalexpensis;
		long int profit;
	public:
		void f1()
		{
			hostelcash=(10000*800)+(1000*800)+(800*2000);
			for(int a=0;a<200;a++)
			{
				hostelcash=hostelcash+cloth11[a][2]+cloth22[a][2]+cloth33[a][2]+cloth44[a][2];
			}
		}
		void f2()
		{
			totalexpensis=4*(25000+15000+40000+5000);
		}
		void f3()
		{
			profit=hostelcash-totalexpensis;
		}
		void s1()
		{
			ofstream sal("salary.txt");
			sal<<"HOSTEL 1\tMANAGER = 25K\tCOOK = 15K\tSWEEPERS = 40k\tSERVING BOY = 5k\n";
			sal<<endl;
			sal<<"HOSTEL 2\tMANAGER = 25K\tCOOK = 15K\tSWEEPERS = 40k\tSERVING BOY = 5k\n";
			sal<<endl;
			sal<<"HOSTEL 3\tMANAGER = 25K\tCOOK = 15K\tSWEEPERS = 40k\tSERVING BOY = 5k\n";
			sal<<endl;
			sal<<"HOSTEL 4\tMANAGER = 25K\tCOOK = 15K\tSWEEPERS = 40k\tSERVING BOY = 5k\n";
			sal<<endl;
			sal<<"TOTAL HOSTELS CASH = "<<hostelcash<<endl;
			sal<<endl;
			sal<<"TOTAL HOSTELS EXPENSIS = "<<totalexpensis<<endl;
			sal<<endl;
			sal<<"TOTAL HOSTELS PROFIT = "<<profit<<endl;
			sal<<endl;
		}
};
class lost:public salary
{
	protected:
		int lost11[200][2]={};
		int lost22[200][2]={};
		int lost33[200][2]={};
		int lost44[200][2]={};
	public:
		void lost1()
		{
			ofstream lost1("lost1.txt");
			for(int a=0;a<200;a++)
			{
				lost1<<"id= "<<a+1<<"\t"<<lost11[a][0]<<"\t "<<lost11[a][1]<<endl;
			}
		}
		void lost2()
		{
			ofstream lost2("lost2.txt");
			for(int a=0;a<200;a++)
			{
				lost2<<"id= "<<a+1<<"\t"<<lost22[a][0]<<"\t  "<<lost22[a][1]<<endl;
			}
		}
		void lost3()
		{
			ofstream lost3("lost3.txt");
			for(int a=0;a<200;a++)
			{
				lost3<<"id= "<<a+1<<"\t"<<lost33[a][0]<<"\t  "<<lost33[a][1]<<endl;
			}
		}
		void lost4()
		{
			ofstream lost4("lost4.txt");
			for(int a=0;a<200;a++)
			{
				lost4<<"id= "<<a+1<<"\t"<<lost44[a][0]<<"\t  "<<lost44[a][1]<<endl;
			}
		}
		void input4()
		{
			int id,hostel;
			cout<<"ENTER THE ID OF THE STUDENT = ";
			 cin>>id;
			 id=id-1;
				while(true)
				{
					if(id<200&&id>=0)
					break;
					else
					{
					cout<<"please re-enter a valid id: ";
					cin>>id;
					continue;
					}
				}
				cout<<"ENTER THE HOSTEL NO : ";
				cin>>hostel;
				if(hostel==1)
				{
					cout<<"NUMBER OF THINGS THAT LOST : ";
					cin>>lost11[id][0];
					lost11[id][1]=((lost11[id][0])*100);
					lost1();
				}
				else if(hostel==2)
				{
					cout<<"NUMBER OF THINGS THAT LOST : ";
					cin>>lost22[id][0];
					lost22[id][1]=((lost22[id][0])*100);
					lost2();
				}
				else if(hostel==3)
				{
					cout<<"NUMBER OF THINGS THAT LOST : ";
					cin>>lost33[id][0];
					lost33[id][1]=((lost33[id][0])*100);
					lost3();				
				}
				else if(hostel==4)
				{
					cout<<"NUMBER OF THINGS THAT LOST : ";
					cin>>lost44[id][0];
					lost44[id][1]=((lost44[id][0])*100);
					lost4();
				}
				else
				cout<<"USER FAILED TO ENTER A VALID HOSTEL NUMBER:";
		}
};
class management:public lost
{
	public:
	void m1()
	{
		int u,id;
		id=g();
		cout<<"ENTER HOSTEL NUMBER : ";
		cin>>u;
		if(u==1)
		{
			cout<<"YOUR TOTAL BILL IS GIVEN BELOW : "<<endl;
			cout<<"MESS clothes : "<<cloth11[id][2]<<endl;
			cout<<"MESS MEAL : 10000\n"<<endl;
			cout<<"HOSTEL FEE : 10000\n"<<endl;
			cout<<"TRIP FEE : 10000\n"<<endl;
			cout<<"LOST FEE : "<<lost11[id][1]<<endl;
			cout<<"TOTAL BILL : "<<(cloth11[id][2])+10000+20000+lost11[id][1]<<endl;	
	    }
	    if(u==2)
		{
			cout<<"YOUR TOTAL BILL IS GIVEN BELOW : "<<endl;
			cout<<"MESS clothes : "<<cloth22[id][2]<<endl;
			cout<<"MESS MEAL : 10000\n"<<endl;
			cout<<"HOSTEL FEE : 10000\n"<<endl;
			cout<<"TRIP FEE : 10000\n"<<endl;
			cout<<"LOST FEE : "<<lost22[id][1]<<endl;
			cout<<"TOTAL BILL : "<<(cloth22[id][2])+10000+20000+lost22[id][1]<<endl<<endl;	
	    }
	    if(u==3)
		{
			cout<<"YOUR TOTAL BILL IS GIVEN BELOW : "<<endl;
			cout<<"MESS clothes : "<<cloth33[id][2]<<endl;
			cout<<"MESS MEAL : 10000\n"<<endl;
			cout<<"HOSTEL FEE : 10000\n"<<endl;
			cout<<"TRIP FEE : 10000\n"<<endl;
			cout<<"LOST FEE : "<<lost33[id][1]<<endl;
			cout<<"TOTAL BILL : "<<(cloth33[id][2])+10000+20000+lost33[id][1]<<endl;	
	    }
	    if(u==4)
		{
			cout<<"YOUR TOTAL BILL IS GIVEN BELOW : "<<endl;
			cout<<"MESS clothes : "<<cloth44[id][2]<<endl;
			cout<<"MESS MEAL : 10000\n"<<endl;
			cout<<"HOSTEL FEE : 10000\n"<<endl;
			cout<<"TRIP FEE : 10000\n"<<endl;
			cout<<"LOST FEE : "<<lost44[id][1]<<endl;
			cout<<"TOTAL BILL : "<<(cloth44[id][2])+10000+20000+lost44[id][1]<<endl;	
	    }
}
};
int main()
{
	management instance;
	cout<<" HOSTEL MANAGEMENT SYSTEM \n";
	int choise;
	while(true)
	{
		cout<<"1.MESS\n2.GUEST.\n3.CLOTHES.\n4.LOST.\n5.BILL.\n6.EXIT\nCHOICE : ";
		cin>>choise;
		int id,hotel;
		switch(choise)
		{
			case 1:
				instance.input();
				break;
			case 2:
				instance.input2();
				break;
			case 3:
				instance.input3();
				break;
			case 4:
				instance.input4();
				break;
			case 5:
				instance.m1();
				break;
			case 6:
				instance.f1();
				instance.f2();
				instance.f3();
				instance.sec1();
				instance.sec2();
				instance.s1();
				exit(0);
				break;
		}
	}
}


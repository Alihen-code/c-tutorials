#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
class student
{
	private:
		int age,num_dose;
		char std_id[20],vac_name[10];
		
		public:
			student()
			{
				strcpy(std_id,"Bc210406480");
				strcpy(vac_name,"sinovac");
				age=20;
				num_dose=1;

			}

		student(const char id[],const char name [],int a, int d)
	{ 
	strcpy(std_id,id);
	strcpy(vac_name,name);
	age=a;
	num_dose=d;
	}
	void setId(const char id[])
	{ 
	strcpy(std_id,id);
	}
	void setVaccine(const char name[])
	{ 
	strcpy(vac_name,name);
	
	}
	void setAge(int a)
	{
		age=a;
	}
		void setDose(int d)
	{ 
	num_dose=d;
	}
		char* getId()
		{ 
		return std_id;
		}
			char* getVaccine()
			{
				return vac_name;
			}
		int getAge()
		{ 
		return age;
		}
		int getDose()
		{ 
		return num_dose;
		}
				friend void display(student std)
				{ 
				cout<<"\n Student ID: "<<std.std_id;
				cout<<"\n Age: "<<std.age;
				cout<<"\n Vaccination: "<<std.vac_name;
				cout<<"\n Vaccinated Doses: "<<std.num_dose;
				}
				
};

  	main()
  	{
  		student std1,std2("BC123456789","sinopharm",21,2),std3;
  		std3.setId("MC123456789");
  		std3.setVaccine("Moderna");
  		std3.setAge(22);
  		std3.setDose(3);
  		cout<<"Printing std1 object Value using display() .... ";
  		display(std1);
  		cout<<"\n\n Printing std2 object value using display()....";
  		display(std2);
  		cout<<"\n\n Printing std3 object value using getter() method ...";
  		cout<<"\n Student ID: "<<std3.getId();
  		cout<<"\n Student Age: "<<std3.getAge();
  		cout<<"\n Vaccination: "<<std3.getVaccine();
  		cout<<"\n Vaccinated Doses: "<<std3.getDose();
  		getch();
  		return 0;
	  }
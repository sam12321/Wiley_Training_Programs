// Composite Patterns 

#include<iostream>
#include<vector>
using namespace std;

class Employee
{
	public:
		int eid;
		string dept;

		Employee(int eid,string &dept)
		{
			this->eid=eid;
			this->dept=dept;
		}
		
		void showEmployee()
		{
			cout<<"EmpID: "<<eid<<endl<<"DEpt: "<<dept<<endl;
		}

		vector<Employee> sub;

		void addSub(Employee obj)
                {
                        sub.push_back(obj);
                }

};

class Principal: public Employee
{
	public:
		Principal(int id,string dept): Employee(id,dept)
	{
	}
};

class HOD: public Employee
{
	public:
                HOD(int id,string dept): Employee(id,dept)
        {
        }

};

class Faculty: public Employee
{
	public:
                Faculty(int id,string dept): Employee(id,dept)
        {
        }

};

int main()
{
	Principal principal(1,"ADMIN");
	//principal.showEmployee();

	HOD cse(11,"cse-HOD");
	HOD ece(12,"ece-HOD");
	HOD mech(13,"mech-HOD");

	Faculty cse_f1(111,"CSE_fac-1");
	Faculty cse_f2(112,"CSE_fac-2");
	Faculty cse_f3(113,"CSE_fac-3");
	
	cse.addSub(cse_f1);
	cse.addSub(cse_f2);
	cse.addSub(cse_f3);

	Faculty ece_f1(121,"ECE_fac-1");
	Faculty ece_f2(122,"ECE_fac-2");
	Faculty ece_f3(123,"ECE_fac-3");
	
       	ece.addSub(ece_f1);
        ece.addSub(ece_f2);
        ece.addSub(ece_f3);

	Faculty mech_f1(211,"mech_fac-1");
	Faculty mech_f2(212,"mech_fac-2");
	Faculty mech_f3(213,"mech_fac-3");

	mech.addSub(mech_f1);
        mech.addSub(mech_f2);
        mech.addSub(mech_f3);

	principal.addSub(cse);
        principal.addSub(ece);
        principal.addSub(mech);

	for(Employee hod: principal.sub)
	{
		cout<<"HOD: "<<hod.eid<<" dept: "<<hod.dept<<endl;
		for(Employee fac:hod.sub)
		{
			cout<<"HOD: "<<fac.eid<<" dept: "<<fac.dept<<endl;

		}
	}
}

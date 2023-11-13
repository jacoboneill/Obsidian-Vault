---
tags:
  - AQA-A-Level
  - Computer-Science
  - Note
page: 51
---
# Aggregation
> [!definition]
> Aggregation is when a class uses an object or many objects made from other classes.

An example in real-life would include:
- Managers and Employees make up the work force.
- Job roles can be taken on by managers or employees.
- Job roles define what the managers and employees do as part of the workforce.

In C++ this would look like:
```cpp
#include <iostream>
#include <vector>

using std::string;
using std::vector;

class JobRole{
	public:
		JobRole(string job_role) :
			m_job_role(job_role)
			{}
		
		string getJobRole(){
			return m_job_role;
		}
	
	private:
		string m_job_role;
};

class Employee{
	public:
		vector<JobRole> job_roles;
		
		void addRole(string job_role){
			job_roles.push_back(JobRole(job_role));
		}
		
		string listJobRoles(){
			string list;
			for(int i = 0; i < job_roles.size(); i++){
				list += "- " + job_roles[i].getJobRole();
				if(i != job_roles.size() - 1){
					list += '\n';
				}
			}
			return list;
		}
};

class Manager : public Employee{
	public:
        Manager(){
            job_roles.push_back(JobRole("Manager"));
        }
};

int main(){
	Employee john_smith;
	john_smith.addRole("Technician");
	john_smith.addRole("Engineer");
	
	Manager jane_doe;
	jane_doe.addRole("Board Member");
	
	std::cout << "John Smith: \n" << john_smith.listJobRoles() << std::endl;
	std::cout << "\n------------------\n" << std::endl;
	std::cout << "Jane Doe: \n" << jane_doe.listJobRoles() << std::endl;
	
	return 0;
}

/*
 * OUTPUT:
 *   John Smith:
 *   - Technician
 *   - Engineer
 * 
 *   ------------------
 * 
 *   Jane Doe:
 *   - Manager
 *   - Board Member
 */
```
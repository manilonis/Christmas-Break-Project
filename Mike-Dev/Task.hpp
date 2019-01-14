#include <string>
#include "User.hpp"
#include "Issue.hpp"
#include <vector>

using namespace std;
class Task{
private:
	static int current_num;
	int id_num;
	string name;
	string description;
	User* assigned_to;
	User* assigned_by;
	vector<Issue*>* issues;
public:
	Task(string, string, User*, User*);
	Task(string, string, User*, User*, vector<Issue*>*);
	int get_id();
	string get_name();
	string get_description();
	User* get_assigned(int);
	~Task();
};
#include <string>
#include "User.hpp"

using namespace std;
class Task{
private:
	static int current_num;
	int id_num;
	string name;
	string description;
	User* assigned_to;
	User* assigned_by;
public:
	Task(string, string, User*, User*);
	int get_id();
	string get_name();
	string get_description();
	User* get_assigned(int);
};
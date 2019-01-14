#include <string>
#include <vector>
#include "Task.hpp"

using namespace std;

class Goal{
private:
	static int current_num;
	int id_num;
	string name;
	string description;
	vector<Task*>* tasks;

public:
	Goal(string, string);
	Goal(string, string, vector<Task*>*);
};
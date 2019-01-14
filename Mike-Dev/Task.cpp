#include "Task.hpp"

using namespace std;

int Task::current_num = 0;

Task::Task(string n, string desc, User* a_by, User* a_to){
	name = n;
	description = desc;
	assigned_by = a_by;
	assigned_to = a_to;
	id_num = current_num + 1;
	current_num++;
	issues = NULL;
}

Task::Task(string n, string desc, User* a_by, User* a_to, vector<Issue*>* i){
	name = n;
	description = desc;
	assigned_by = a_by;
	assigned_to = a_to;
	id_num = current_num + 1;
	current_num++;
	issues = i;
}

int Task::get_id(){
	return id_num;
}

Task::~Task(){
	for(vector<Issue*>::iterator it = issues->begin(); it != issues->end(); ++it) {
    	delete(*it);
 }
 delete(issues);
}
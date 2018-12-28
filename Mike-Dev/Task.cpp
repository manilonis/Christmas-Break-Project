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
}

int Task::get_id(){
	return id_num;
}
#include "Goal.hpp"

int Goal::current_num = 0;

Goal::Goal(string n, string d){
	name = n;
	description = d;
	id_num = current_num + 1;
	current_num++;
	tasks = NULL;
}

Goal::Goal(string n, string d, vector<Task*>* t){
	name = n;
	description = d;
	id_num = current_num + 1;
	current_num++;
	tasks = t;
}

Goal::~Goal(){
	for(vector<Task*>::iterator it = tasks->begin(); it != task->end(); ++it) {
    	delete(*it);
 	}
 delete(tasks);
}
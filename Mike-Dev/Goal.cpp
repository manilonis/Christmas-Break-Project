#include "Goal.hpp"

int Goal::current_num = 0;

Goal::Goal(string n, string d){
	name = n;
	description = d;
	id_num = current_num + 1;
	current_num++;
}
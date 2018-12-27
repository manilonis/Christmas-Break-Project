#include "Issue.hpp"

using namespace std;

Issue::Issue(int id, string n, string d){
	id_num = id;
	name = n;
	description = d;
}

int Issue::get_id_num(){
	return id_num;
}

string Issue::get_name(){
	return name;
}

string Issue::get_desript(){
	return description;
}
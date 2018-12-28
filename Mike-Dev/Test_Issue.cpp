#include "Issue.hpp"
#include "Task.hpp"
//#include "User.hpp"
#include <string>
#include <iostream>

using namespace std;

int main(){
	Issue *i = new Issue(1, "First", "The First");
	Issue *i2 = new Issue(2, "Child", "Child", i);
	cout << i->get_id_num() << "\n" ;
	cout << i2->get_parent()->get_name() << "\n";

	Task *t1 = new Task("First Task", "First Task", new User("one"), new User("two"));
	Task *t2 = new Task("Second Task", "Second Task", new User("three"), new User("Four"));

	cout << t1->get_id() << "\n";
	cout << t2->get_id() << '\n';

	


	delete(i);
	delete(i2);
	delete(t1);
	delete(t2);

}
#include "Issue.hpp"
#include <string>
#include <iostream>

using namespace std;

int main(){
	Issue *i = new Issue(1, "First", "The First");
	Issue *i2 = new Issue(2, "Child", "Child", i);
	cout << i->get_id_num() << "\n" ;
	cout << i2->get_parent()->get_name() << "\n";

	delete(i);
	delete(i2);

}
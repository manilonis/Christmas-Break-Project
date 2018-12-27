#include "Issue.hpp"
#include <string>
#include <iostream>

using namespace std;

int main(){
	Issue *i = new Issue(1, "First", "The First");
	cout << i->get_id_num() << "\n" ;

}
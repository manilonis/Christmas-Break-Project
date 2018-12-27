#include <string>
using namespace std;

class Issue{
 private:
 	int id_num;
 	string name;
 	string description;
 	Issue* parent;

 public:
 	Issue(int, string, string);
 	Issue(int, string, string, Issue*);
 	int get_id_num();
 	string get_name();
 	string get_desript();
 	Issue* get_parent();
};
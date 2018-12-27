#include <string>
using namespace std;

class Issue{
 private:
 	int id_num;
 	string name;
 	string description;

 public:
 	Issue(int, string, string);
 	int get_id_num();
 	string get_name();
 	string get_desript();
};
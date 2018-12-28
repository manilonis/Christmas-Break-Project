#include <string>

using namespace std;

class Goal{
private:
	static int current_num;
	int id_num;
	string name;
	string description;

public:
	Goal(string, string);
};
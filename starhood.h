#include <iostream>
#include <string>
using namespace std;




class holder
{
public:
string name;
string address;
int id;
int blance;
int brancheid;

holder*next;
};

class branche{
public:
string name;
string manger;
int id;
branche *next;

holder *head;
holder* tail;

branche();

};
class starhood
{
private :
	branche *head;
    branche *tail;
   
     branche temp ;
	 int Count;
     int cnt;
     bool found;
public :
	starhood();
	// ADD new brunch 
	void inb();
	//ADD NEW Holder
	void inh();
	//search in holders by name
	void search_by_name();
	//update holder info 
	void update_holder_info();
	//sort holders by blance in desending order
	void sort_by_blanced();
	//sort holders by blance in assending order
	void sort_by_blancea();
	//display all the branchs
	void displayb ();
	// display brunch by id 
	void displayb_by_id ();
	//display the holders in a branche
	void displayh ();
	//delete holders 
	void delh();
	// delete holders after deleting branch 
	void del_B_h(int y);
	// delete branche 
	void delb();
	//display sorted holders
	void displayhsorted ();
};


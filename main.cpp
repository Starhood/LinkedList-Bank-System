#include "starhood.h"
starhood s;
int main()
{

	
	system("CLS");
	cout<<"To add branches Please Press 1\n";//done
	cout<<"To add holders in a branch  Please Press 2\n";//done
	cout<<"To Display all the branches Please Press 3\n";//done
	cout<<"To search for a certain branches Please Press 4\n";//done
	cout<<"To Display holders in a certain branches Please Press 5\n";//done
	cout<<"To search for a certain holder by name Please Press 6\n";//done
	cout<<"To update a certain holder Please Press 7\n";//done
	cout<<"To sort the all the holders by balance Please Press 8\n";//done
	cout<<"To remove  a certain holder Please Press 9\n";//done
	cout<<"To remove a certain branches Please Press 10\n";
	
	int x;
	cin>>x;
	switch (x)
	{
		case 1:
			cout<<"how many branch u wanna add!!\n";
			int bnum;cin>>bnum;
			
			for(int i =0;i<bnum;i++)
			s.inb();
			break;
		case 2:
			cout<<"how many Holder u wanna add!!\n";
			int hnum;cin>>hnum;

			for(int i =0;i<hnum;i++)
			s.inh();
			break;
		case 3 :
			s.displayb();
			break;
		case 4:
			s.displayb_by_id();
			break;
		case 5:
			s.displayh();
			break;
		case 6:
			s.search_by_name();
			break;
		case 7:
			s.update_holder_info();
			break;
		case 9:
			s.delh();
			break;
			
		case 10:
			s.delb();
			break;
		case 8:
			s.sort_by_blanced();
				
				break;
	
	}
	cout <<"If you wanna try again press y\n";
	char re ; cin>>re;
	while (re=='y')main();
return 0;
}
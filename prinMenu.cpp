#include"includes.h"
#include"classes.h"
#include"declarations.h"

int printMenu()
{
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif

	cout<<"====================================================="<<endl;
	cout<<"______Library Inventory Manager______"<<endl;
	cout<<"| 0-:  Quit"<<endl;
	cout<<"| 1-:  Display All Collections."<<endl;
	cout<<"| 2-:  Display Books Collection"<<endl;
	cout<<"| 3-:  Display Periodicals Collection"<<endl;
	cout<<"| 4-:  Display DVDs Collection"<<endl;
	cout<<"| 10-: CheckOut Book"<<endl;
	cout<<"| 11-: CheckOut Periodical"<<endl;
	cout<<"| 12-: CheckOut DVD"<<endl;
	cout<<"| 21-: CheckIn Book"<<endl;
	cout<<"| 22-: CheckIn Periodical"<<endl;
	cout<<"| 23-: CheckIn DVD"<<endl;
	cout<<"====================================================="<<endl;

#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

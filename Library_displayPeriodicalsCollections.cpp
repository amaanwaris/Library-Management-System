#include"includes.h"
#include"classes.h"

int Library::displayPeriodicalsCollections()
{
	int i;
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif
	cout<<"____PERIODICALS COLLECTIONS____\n";
	for( i = 0; i < (long)pEriodicals.size(); i++)
	{
		pEriodicals[i].displayPeriodicalsCollections(i);	
	}
#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

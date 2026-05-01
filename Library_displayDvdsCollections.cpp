#include"includes.h"
#include"classes.h"

int Library::displayDvdsCollections()
{
	int i;
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif
	cout<<"____DVDS COLLECTIONS____\n";
	for( i = 0; i < (long)dVds.size(); i++)
	{
		dVds[i].displayDvdsCollections(i);	
	}
#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

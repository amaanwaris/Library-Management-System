#include"includes.h"
#include"classes.h"

int Library::displayAllCollections()
{
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif
	displayBooksCollections();
	displayPeriodicalsCollections();
	displayDvdsCollections();

#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

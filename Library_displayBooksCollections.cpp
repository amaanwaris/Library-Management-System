#include"includes.h"
#include"classes.h"

int Library::displayBooksCollections()
{
	int i;
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif
	cout<<"____BOOKS COLLECTIONS____\n";
	for( i = 0; i < (long)bOoks.size(); i++)
	{
		bOoks[i].displayBooksCollections(i);	
	}
#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

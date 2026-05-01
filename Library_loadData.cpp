#include"includes.h"
#include"classes.h"

int Library::loadData()
{
	int count, i;
	Book oBuk;
	Periodical oPer;
	Dvd oDvd;
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif
	ifstream oBookFile("books.dat");
	if( oBookFile.is_open() )
		count =parseCount(oBookFile);	
	for (i = 0; i < count; i++)
	{
		oBuk.load(oBookFile);
		bOoks.push_back(oBuk);
	}
	oBookFile.close();

	ifstream oPerFile("periodicals.dat");
	if( oPerFile.is_open() )
		count =parseCount(oPerFile);	
	for (i = 0; i < count; i++)
	{
		oPer.load(oPerFile);
		pEriodicals.push_back(oPer);
	}
	oPerFile.close();

	ifstream oDvdFile("dvds.dat");
	if( oDvdFile.is_open() )
		count =parseCount(oDvdFile);	
	for (i = 0; i < count; i++)
	{
		oDvd.load(oDvdFile);
		dVds.push_back(oDvd);
	}
	oDvdFile.close();

#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

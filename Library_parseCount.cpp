#include"includes.h"
#include"classes.h"

int Library::parseCount(ifstream &oFil)
{
	int count;
	string line, label, dummy;
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif
	if( getline(oFil, line) )
	{
		stringstream ss(line); // reads whole file. but line-by-line
		ss>>label>>count;
		getline(oFil, dummy);
		return count;
	}
#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return count;
}

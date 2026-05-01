#include"includes.h"
#include"classes.h"

bool Book::checkIn()
{
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif
	if (state == ON_SHELF)
	{
		return false;
	}
	else
	{
		state =  ON_SHELF;
		return true;
	}
#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

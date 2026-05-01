#include"includes.h"
#include"classes.h"

bool Dvd::checkOut()
{
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif
	if (state == CHECKED_OUT)
	{
		return false;
	}
	else
	{
		state = CHECKED_OUT;
		return true;
	}
#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

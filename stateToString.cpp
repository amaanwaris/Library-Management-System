#include"includes.h"
#include"classes.h"

string stateToString(ItemState state)
{
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif
	return (state == ON_SHELF)?" [ON_SHELF]":
		(state == CHECKED_OUT)? "[CHECKED_OUT]":
		"[CHECKED_IN]";
#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
}

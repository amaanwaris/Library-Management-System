#include"includes.h"
#include"classes.h"
#include"declarations.h"

int Dvd::displayDvdsCollections(int id)
{
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif

//	cout<<"____DVDS Collection___"<<endl;
	cout<<"Artist:"<<artist<<endl;
	cout<<"Title:"<<title<<endl;
	cout<<"Label:"<<label<<endl;
	cout<<"Date:"<<date<<endl;
	cout<<"State: "<<stateToString(state)<<endl;
	cout<<endl;
#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

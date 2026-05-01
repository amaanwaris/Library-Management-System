#include"includes.h"
#include"classes.h"

int Dvd::load(ifstream &file)
{
	 string line, empty;

#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif
	getline(file, artist);
	getline(file, title);
	getline(file, label);
	getline(file, date);
	state=ON_SHELF;
	getline(file, empty);


#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

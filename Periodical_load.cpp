#include"includes.h"
#include"classes.h"

int Periodical::load(ifstream &file)
{
	string line, empty;

#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif
	getline(file, author);
	getline(file, pubDate);
	getline(file, title);
	getline(file, pubLocation);
	getline(file, pageRange);
	state=ON_SHELF;
	getline(file, empty);

#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

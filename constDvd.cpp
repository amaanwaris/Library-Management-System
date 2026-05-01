#include"includes.h"
#include"classes.h"

Dvd::Dvd()
{
#ifdef DEBUG
	cout<<__func__<<": Begin(ZERO Dvd)."<<endl;
#endif

	artist.clear();
	title.clear();
	date.clear();
	label.clear();
	state=ON_SHELF;

#ifdef DEBUG
	cout<<__func__<<": End(ZERO Dvd)."<<endl;
#endif
}

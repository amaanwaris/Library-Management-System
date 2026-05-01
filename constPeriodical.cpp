#include"includes.h"
#include"classes.h"

Periodical::Periodical()
{
#ifdef DEBUG
	cout<<__func__<<": Begin(ZERO Periodical)."<<endl;
#endif
	author.clear();
	pubDate.clear();
	title.clear();
	pubLocation.clear();
	pageRange.clear();
	state=ON_SHELF;

#ifdef DEBUG
	cout<<__func__<<": End(ZERO Periodical)."<<endl;
#endif
}

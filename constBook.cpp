#include"includes.h"
#include"classes.h"

Book::Book()
{
#ifdef DEBUG
	cout<<__func__<<": Begin(ZERO BOOK)."<<endl;
#endif
	author.clear();
	pubDate.clear();
	title.clear();
	pubLocation.clear();
	pubName.clear();
	state = ON_SHELF;
#ifdef DEBUG
	cout<<__func__<<": End(ZERO BOOK)."<<endl;
#endif
}

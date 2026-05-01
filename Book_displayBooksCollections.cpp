#include"includes.h"
#include"classes.h"
#include"declarations.h"

int Book::displayBooksCollections(int id)
{
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif

	//cout<<"___BOOKS COLLECTION____"<<endl;
	cout<<"Author: "<<author<<endl;
	cout<<"Publication Data: "<<pubDate<<endl;
	cout<<"Tittle: "<<title<<endl;
	cout<<"Publication Location: "<<pubLocation<<endl;
	cout<<"Publication Name : "<<pubName<<endl;
	cout<<"State: "<<stateToString(state)<<endl;
	cout<<endl;


#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

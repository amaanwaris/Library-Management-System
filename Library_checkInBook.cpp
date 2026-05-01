#include"includes.h"
#include"classes.h"

int Library::checkInBook()
{
	int id;
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif

	cout<<"Enter Book Id "<<endl;
	cin>>id;
	if((id>=0) && (id<bOoks.size()))
	{
		if(!bOoks[id].checkIn())
		{
			cout<<"SORRY: Book Already On Shelf."<<endl;
		}
		else
		{
			cout<<" Book " <<id<< " Checked In Successfully "<<endl;
			
		}
	}
	else
	{
		cout<<"Invalid Book Id."<<endl;
	}
#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

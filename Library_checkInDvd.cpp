#include"includes.h"
#include"classes.h"

int Library::checkInDvds()
{
	int id;
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif

	cout<<"Enter DVDs Id "<<endl;
	cin>>id;
	if((id>=0) && (id<dVds.size()))
	{
		if(!dVds[id].checkIn())
		{
			cout<<"SORRY: DVDs Already On Shelf."<<endl;
		}
		else
		{
			cout<<" DVDs " <<id<< " Checked In. Successfully "<<endl;
			
		}
	}
	else
	{
		cout<<"Invalid DVDs Id."<<endl;
	}
#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

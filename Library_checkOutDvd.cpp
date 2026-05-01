#include"includes.h"
#include"classes.h"

int Library::checkOutDvds()
{
	int id;
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif

	cout<<"Enter DVDs Id "<<endl;
	cin>>id;
	if((id>=0) && (id<dVds.size()))
	{
		if(!dVds[id].checkOut())
		{
			cout<<"SORRY: DVDs Already CheckOut."<<endl;
		}
		else
		{
			cout<<" DVDs " <<id<< " CheckOut. Successfully "<<endl;
			
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

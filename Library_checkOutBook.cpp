#include"includes.h"
#include"classes.h"

int Library::checkOutBook()
{
	int id;
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif

	cout<<"Enter Book Id "<<endl;
	cin>>id;
	if((id>=0) && (id<bOoks.size()))
	{
		if(!bOoks[id].checkOut())
		{
			cout<<"SORRY: Book Already CheckOut."<<endl;
		}
		else
		{
			cout<<" Book " <<id<< " CheckOut. Successfully "<<endl;
			
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

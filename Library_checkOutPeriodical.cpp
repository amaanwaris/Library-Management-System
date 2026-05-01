#include"includes.h"
#include"classes.h"

int Library::checkOutPeriodicals()
{
	int id;
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif

	cout<<"Enter Periodical Id "<<endl;
	cin>>id;
	if((id>=0) && (id<pEriodicals.size()))
	{
		if(!pEriodicals[id].checkOut())
		{
			cout<<"SORRY: Periodical Already CheckOut."<<endl;
		}
		else
		{
			cout<<" Periodical " <<id<< " CheckOut. Successfully "<<endl;
			
		}
	}
	else
	{
		cout<<"Invalid Periodical Id."<<endl;
	}
#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

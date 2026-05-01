#include"includes.h"
#include"classes.h"
#include"declarations.h"

int main()
{
	int choice;
//	Book oB;
//	Periodical oP;
//	Dvd oD;
	Library lb;	
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif
	lb.loadData();
	while(1)
	{
		printMenu();
		if( !(cin >> choice) )
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			continue;
		}
#ifdef DEBUG
		cout<<__func__<<": Choice:"<<choice<<endl;
#endif
		switch(choice)
		{
			case 0:
				exitProgram();
				break;
			case 1:
				lb.displayAllCollections();
				break;
			case 2:
				lb.displayBooksCollections();
				break;
			case 3:
				lb.displayPeriodicalsCollections();
				break;
			case 4:
				lb.displayDvdsCollections();
				break;
			case 10:
				lb.checkOutBook();
				break;
			case 11:
				lb.checkOutPeriodicals();
				break;
			case 12:
				lb.checkOutDvds();
				break;
			case 21:
				lb.checkInBook();
				break;
			case 22:
				lb.checkInPeriodicals();
				break;
			case 23:
				lb.checkInDvds();
				break;
			default:
				print("Invalid Choice\n");
		}
	}
#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

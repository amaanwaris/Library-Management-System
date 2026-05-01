using namespace std;

typedef enum ItemState
{
	ON_SHELF,
	CHECKED_OUT,
	CHECKED_IN
}ItemState;

class Book
{
	private:
		string author;
		string pubDate;
		string title;
		string pubLocation;
		string pubName;
		ItemState state;
	public:
		Book();
		int load(ifstream&);
		int displayBooksCollections(int);
		bool checkOut();
		bool checkIn();
};

class Periodical
{
	private:
		string author;
		string pubDate;
		string title;
		string pubLocation;
		string pageRange;
		ItemState state;
	public:
		Periodical();
		int load(ifstream&);
		int displayPeriodicalsCollections(int);
		bool checkOut();
		bool checkIn();

};

class Dvd
{
	private:
		string artist;
		string title;
		string label;
		string date;		
		ItemState state;
	public:
		Dvd();
		int load(ifstream&);
		int displayDvdsCollections(int);
		bool checkOut();
		bool checkIn();

};

class Library
{
	private:
		vector<Book> bOoks;
		vector<Periodical> pEriodicals;
		vector<Dvd> dVds;
		int parseCount(ifstream&);	//parse file to count no. of items
	public:
		Library();
		int loadData();
		int displayAllCollections();
		int displayBooksCollections();
		int displayPeriodicalsCollections();
		int displayDvdsCollections();
		int checkOutBook();
		int checkOutPeriodicals();
		int checkOutDvds();
		int checkInBook();
		int checkInPeriodicals();
		int checkInDvds();
};

#include"includes.h"
#include"classes.h"
#include"declarations.h"

int exitProgram()
{
#ifdef DEBUG
	cout<<__func__<<": Begin."<<endl;
#endif
	exit(EXIT_SUCCESS);
#ifdef DEBUG
	cout<<__func__<<": End."<<endl;
#endif
	return 0;
}

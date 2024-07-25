#include "Movie.h"
#include <iostream>
using namespace std;


bool Movie::isLongMovie(int min)
{
	if (min > 135)
	{
		return true;
	}
	else
		return false;
}




ostream& operator << (ostream )
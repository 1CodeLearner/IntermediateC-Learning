#include <conio.h>

void print( const char* s )
{
	for( ; *s != 0; s++ )
	{
		_putch( *s );
	}
}

void read( char* buf,int maxSize )
{
	const char* const pEnd = buf + maxSize;
	for( char c = _getch(); c != 13 && (buf + 1 < pEnd); c = _getch(),buf++ )
	{
		_putch( c );
		*buf = c;
	}
	*buf = 0;
}

int str2int( const char* s )
{
	// scan to start point
	const char* p = s;
	for( ; *p >= '0' && *p <= '9'; p++ );
	p--;

	int val = 0;
	int place = 1;
	// convert place values and accumulate
	for( ; p >= s; p-- )
	{
		val += (*p - '0') * place;
		place *= 10;
	}

	return val;
}

int GetFibAt(int loc) {
	if (loc <= 1)
		return loc; 
	return GetFibAt(loc - 1) + GetFibAt(loc - 2);
}

char* IntToString(int integer) {
	char what[] = "Test";
	return what;
}
int StringToInt(const char* str) {
	int decimalPlace = 1; 
	const char* pEnd = str; 
	for (; *pEnd >= 48 && *pEnd <= 57; pEnd++);
	pEnd--; 
	int value = 0;
	for (; *pEnd >= 48 && *pEnd <= 57; pEnd--) {
		value += *pEnd * decimalPlace; 
		decimalPlace *= 10;
	}
	return value; 
}

int main()
{
	//print( "How many pubes? " );
	//char answer[69];
	//read( answer,69 );

	//GetFibAt(10);

	//const int pubeCount = str2int( answer );

	//print( "\n" );
	//for( int n = 0; n < pubeCount; n++ )
	//{
	//	print( "Pubes! " );
	//}
	
	const char* test = "123456What's up";

	int get = StringToInt(test);

	int val = -1;
	//char input[30];
	//print("Type in fib location: ");
	//read(input, 30);
	//int index = StringToInt(input);
	//int fibNumber = GetFibAt(index);
	//char* answer = IntToString(fibNumber);
	//print("Fib number: ");
	//print(answer);



	while( !_kbhit() );
	return 0;
}
#include <iostream>
using namespace std ;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int rows ;
	
	cout << "Rows = " ;
	cin >> rows ;
	
	for ( int x = 1 ; x <= rows ; x ++ )
	{
		for ( int y = 1 ; y <= rows  ; y ++ )
		{
			if ( x == 1 || x == rows || x == rows / 2 + 1 )
			{
				cout << "* " ;
			}
			else if ( x <= rows / 2 && y == 1 )
			{
				cout << "* " ;
			}
			else if ( x >= rows / 2 && y == rows )
			{
				cout << "* " ;
			}
			else 
			cout << "  " ;
		}
		cout << endl ;
	}
	
	return 0;
}

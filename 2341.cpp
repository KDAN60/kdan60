#include <iostream>
#include <conio.h>
#include <string>

int main()
{
    using namespace std;
    string zdanie;
    cout<<"prosz� wpisa� zdanie, kt�re b�dzie wy�wietlone od ko�ca: "<<endl;
    getline( cin,zdanie );
    int wiel=zdanie.length();		
	cout<<wiel<<endl;
    for(int i= wiel; i>=0; i--)
	{
	cout<<zdanie[i];
	}
    
    
    
}

#include <iostream>
#include <conio.h>
#include <string>

int main()
{
    using namespace std;
    string zdanie;
    cout<<"proszê wpisaæ zdanie, które bêdzie wyœwietlone od koñca: "<<endl;
    getline( cin,zdanie );
    int wiel=zdanie.length();		
	cout<<wiel<<endl;
    for(int i= wiel; i>=0; i--)
	{
	cout<<zdanie[i];
	}
    
    
    
}

#include <iostream>
#include <conio.h>
#include <string>

int main()
{
    using namespace std;
    string zdanie;
    cout<<"input word that you want reversed: "<<endl;
    getline( cin,zdanie );
    int wiel=zdanie.length();		
	cout<<wiel<<endl;
    for(int i= wiel; i>=0; i--)
	{
	cout<<zdanie[i];
	}
    
    
    
}

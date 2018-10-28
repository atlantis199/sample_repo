// 

#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
	int length,odd=0,even=0;
	cin >> length;
	int pos[length/2],tmp=length-1;
	for(int i=0;i<length/2;i++) {
		cin >> pos[i];
	}
	sort( pos, pos + length/2 );
	for(int i=length/2;i>0;i--) 
	{
		if(tmp-pos[i-1] > 0 )
			odd = odd + (tmp - pos[i-1]);
		else
			odd = odd - (tmp - pos[i-1]); 
		tmp = tmp - 2;
	}
	tmp = length;
	for(int i=length/2;i>0;i--) 
	{
		if(tmp-pos[i-1] > 0 )
			even = even + (tmp - pos[i-1]);
		else
			even = even - (tmp - pos[i-1]); 
		tmp = tmp - 2; 
	}
	if( odd > even )
	{
		cout << even << endl;
	} 
	else
	{
		cout << odd << endl;
	}
}

//246415


#include<cstring>
#include<iostream>
#include<cstdlib>

using namespace std;

int main (int argc, char * argv[])
{
	int i,j,l,x,z,n,num[100],sum,y,rem,nn[100];
	char str[100],arr[100][100];
	
	cout<<"Input:";
	cin>>str;
	x=0;
	z=0;
	l=0;
		
	cout<<"Output:";
	while(str[x]!='\0')
	{
	    if(str[x]=='a'&&str[x+1]=='b'&&str[x+2]=='b'&&str[x+3]=='b')
	      { 
	        z++;
		  }
		  
		if(str[x]=='a')
		{
			l++;
	    }  
		x++;  
	}
	
	if(z==l)
	{
		cout<<"Accepted";
	}
	else
	{
		cout<<"Not";
	}
	
	cout<<endl;
	
	system("PAUSE");
	return EXIT_SUCCESS;
}

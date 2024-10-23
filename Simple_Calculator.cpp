
#include<iostream>
using namespace std;
int main()
{
	double a,b,c;
	char op;
	cout<<"Enter two number:";
	cin>>a>>b;
	cout<<"Enter your operation(+,-,*,/):";
	cin>>op;
	switch(op)
	{
		case '+':
		{
			c=a+b;
			cout<<c;
			break;
	}
	    case '-':
	    	{
	    		c=a-b;
	    		cout<<c;
	    		break;
			}
		case '*':
			{
				c=a*b;
				cout<<c;
				break;
			}
		case '/':
			{
				c=a/b;
				cout<<c;
				break;
			}
			
			default:
				cout<<"Enter a valid operation";
}
return 0;
}

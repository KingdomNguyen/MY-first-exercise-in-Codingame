#include <iostream>
const int MAX=100;
using namespace std;
int main()
{
	int n,k,x=1,tmp;
    double res,out;
    int arr[MAX];
    cout<<"Enter k: ";
    cin>>k;
    if(k<=0 ||k>MAX)
    {
    	cout<<"Please enter k again\n";
    	main();
	}
    else
    {
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<k;i++)
	{
		cout<<"Value of a["<< i <<"]: ";
		cin>>arr[i];
	}
	for(int i=0;i<k;i++)
	{
     	cout<<arr[i]<<" ";
    } 
	
	for(int i=0;i<k;i++)
	{
		x *=arr[i];
	}
	cout<<"\nValue is: "<<x;
	while(x>0)
	{
		tmp=x%10;
		res=res*10+tmp;
		x=x/10;
		out=res/n;
	}
	cout<<"\nValue after reservation: "<<res;
	cout<<"\nOutput is: "<<out;
}
}

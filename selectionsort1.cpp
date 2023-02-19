#include<iostream>
using namespace std;

int main()
{
    int i,j,n,loc,temp,min,a[20],pass;

    cout<<"****SELECTION SORT**** \n";

    cout<<" Enter the number of elements:";
    cin>>n;
    cout<<"\n Enter the elements\n";
    

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;              
            }
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
        
         if( temp!=a[i]){
         	
         	cout<<"\n Iteration "<<i<<" : ";
        				
        				pass=i+1;
        				
		        	for (int i=0;i<n;i++)
			        {
			           cout<<a[i]<< " ";
			        	}
			        		cout << endl;
			    }
    }
    
    cout<<"\nNumber of passes required to sort the array: \n"<<pass;
		    
    cout<<"\n Selection Sorted list is as follows\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}



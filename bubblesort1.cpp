#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i,j,temp,pass;

    cout<<"****BUBBLE SORT**** \n";

    cout<<"Enter the size of array (Max 20): ";    
    cin>>n; 
    
    cout<<"Enter the array elements: ";
		    for(i=0;i<n;i++){        	
		            cin>>a[i];            
		        }        
            for(i=1;i<n;i++)
			{           	
        			for(j=0;j<(n-i);j++)
					{
            			if(a[j]>a[j+1])
							{		
					                temp=a[j];
					                a[j]=a[j+1];
					                a[j+1]=temp;
					        }      
			        }			        
			        if(temp!=a[i]){
        	
        		cout<<"\n Iteration "<<i<<" : ";        				
        				pass=i+1;		
		        	for (int i=0;i<n;i++)
			        {
			            cout<<a[i]<< " ";
			        	}
			        		cout << endl;
			        	}			        			        
    		}
	            cout<<"Array after bubble sort:";	            
	            for(i=0;i<n;++i)
				{
		            cout<<" "<<a[i];
		        }
        return 0;
}

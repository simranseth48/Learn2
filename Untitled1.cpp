#include<bits/stdc++.h>
using namespace std;
vector<int>searchRange( vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    //Power of dynamic and engaging mindset

    
    
vector<int>sol;
long l=0,r=A.size()-1;
long start=-1;
long end=-1;
long mid;
while(l<=r&&mid>=0&&mid<A.size())
{
    mid=l+(r-l)/2;
   // cout<<mid<<endl;
   if(A[0]==B)
   start=0;
   if(A[A.size()-1]==B)
   end=A.size()-1;
    else if(mid>0&&A[mid]==B&&A[mid-1]!=B)
    {
    //     for(int i=mid;i>=l;i--)
    //     {if(A[i]==B)
    //         start=i;
    //         else
    //         break;
    //     }
    //   // cout<<start<<" ";
    //     for(int i=mid;i<=r;i++)
    //     {if(A[i]==B)
    //         end=i;
    //         else
    //         break;
    //     }
    //     break;
    
    start=mid;
    l=mid+1;
    //cout<<"start"<<start<<endl;
        
    }
    
     if(mid<A.size()&&A[mid]==B&&A[mid+1]!=B)
    {
        end=mid;
        r=mid-1;
    //    cout<<"end"<<end<<endl;
    }
    
    
    if(mid>=0&&A[mid]>B)
    r=mid-1;
     if(mid>=0&&A[mid]<B)
    l=mid+1;
    if(start!=-1)
    {
        if(end!=-1)
        break;
    }
    
}
//cout<<start<<" "<<end;
if(start==-1&&end==-1)
{
    sol.push_back(-1);
    sol.push_back(-1);
}
else
{cout<<start<<endl;
    sol.push_back(start);
    sol.push_back(end);
}
return sol;
}
int main()
{
	vector<int> a;
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	int k;
	cin>>k;
	vector<int> sol= searchRange(a,k);
	for(int i=0;i<2;i++)
	{
		cout<<sol[i]<<endl;
	}
	return 0;
	
}

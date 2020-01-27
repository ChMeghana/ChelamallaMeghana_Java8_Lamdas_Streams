
#include <bits/stdc++.h>
using namespace std;
#define long long int
signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   int n,k;
	   cin>>n>>k;
	   int cnt=round(k/2);
	   int s[n],i,p;
	       int max=n/k;
	       int min=max;
	       int rem=n%k;
	       if(rem>0)
	       {
	           if(rem>=cnt){
	           max+=1;
	           int res=(cnt*max)+((k-cnt)*min);
	           cout<<res<<"\n";
	           //cout<<"max  "<<max<<" "<<min<<" "<<cnt<<"\n;";
	           }
	           else
	           {
	               max+=1;
	               int res=(rem*max)+((k-rem)*min);
	               cout<<res<<"\n";
	           }
	       }
	       else
	       {
	           cout<<n<<"\n";
	       }
	}
	return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
#define long long int
signed main() {
	// your code goes here
	int n;
	cin>>n;
	int c=0,s[n],i;
	for(i=0;i<n;i++)
	{
	cin>>s[i];
	if(s[i]==0)
	c++;
	}
	int b[c],s1[n]={};
	for(i=1;i<=n;i++)
	{
	    s1[s[i-1]]++;
	}
	int x;
	for(i=0;i<n;i++)
	{
	    if(s[i]==0)
	    {
	        for(int j=1;j<=n;j++)
	        {
	            if(s1[j]==0)
	            {
	                    for(int k=1;k<=n;k++)
	                    {
	                        if(s1[k]==0)
	                        {
	                            s1[k]=1;
	                            s[i]=k;
	                        }
	                    
	                }
	            }
	        }
	    }
	}
	int p=(n*(n+1))/2;
	for(int i=0;i<n;i++)
	{
	    p-=s[i];
	}
	for(int i=0;i<n;i++)
	{
	    if(s[i]==0)
	    cout<<p<<" ";
	    else
	cout<<s[i]<<" ";
	}
	return 0;
}

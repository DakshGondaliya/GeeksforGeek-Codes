/* Question - https://practice.geeksforgeeks.org/contest-problem/sp-greatest-digital-root/0/ */

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    long N, r, k=0;
	    long sum;
	    cin >> N;
	    long no,max = 0;
	    vector<long> a(N);
	    for(long j=1;j<=N;j++)
	    {
	        if(N%j==0)
	        {
	            a[k] = j;
	            k++;
	        }
	    }
      
	    a.resize(k);	
	    vector<long> b(k);
      
	    for(long j=0;j<k;j++)
	    {
	    	b[j] = a[j];
	    	sum = 0;
	        while(a[j] != 0)
	        {
    	        r = a[j] % 10;
    	        sum += r;
    	        a[j] /= 10;
	        }
	        if(sum >= max)
	        {
	            max = sum;
	            no = b[j];
	        }
	    }
	    cout << no << " " << max << "\n";
	}
	
	return 0;
}

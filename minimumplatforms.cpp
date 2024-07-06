class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    Tc-2N(LOGN+N)
    Sc-0(1)
    int findPlatform(int arr[], int deep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(deep, deep+n);
    	int i=0, j=0, cnt=0, maxCnt=0;
    	while(i<n && j<n){
    	    if(arr[i]<=deep[j]){
    	        cnt++;
    	        i++;
    	    }
    	    else{
    	        cnt--;
    	        j++;
    	    }
    	    maxCnt=max(maxCnt, cnt);
    	}
    	
     return maxCnt;	
    }
};

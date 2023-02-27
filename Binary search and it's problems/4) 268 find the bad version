// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(long long n) {
      long long start=0;
      long long end=n;
    int k=0;
    while(start<end){
        long long mid=(start+end)/2;
        if(isBadVersion(mid)==false){
            start=mid+1;
            
        }
        else{
          
            end=mid;
        }
        
    }
    return(start);
    }
};


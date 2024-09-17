// First negative in every window of size k

// Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.

//  Input : 
// N = 5
// A[] = {-8, 2, 3, -6, 10}
// K = 2
// Output : 
// -8 0 -6 -6
// Explanation :
// First negative integer for each window of size k
// {-8, 2} = -8
// {2, 3} = 0 (does not contain a negative integer)
// {3, -6} = -6
// {-6, 10} = -6

typedef long long ll;
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                   
                                   
                 
            int i=0;
            int j =0;
            vector<ll>result;
            deque<ll>temp;
            
            
            while(j<N){
                
                if(A[j] < 0 ){
                   temp.push_back(A[j]);
                }
                
                if(j-i+1 == K){
                    if(!temp.empty()){
                        result.push_back(temp.front());
                    }
                    else{
                        result.push_back(0);
                    }
                    
                    if(A[i] < 0 && !temp.empty() ){
                        temp.pop_front();
                    }
                    i++;
                }
                j++;
            }
            return result;
                                                 
 }
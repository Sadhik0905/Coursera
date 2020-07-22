#include<bits/stdc++.h>

using namespace std;

// Code Starts Here
int a[100001];
int N,k,f;

bool reSum(int n, int sum){ 
   if (sum == 0) 
     return true; 
   if (n == 0 && sum != 0) 
     return false; 
   if (a[n-1] > sum) 
     return reSum(n-1, sum); 
   return reSum(n-1, sum) || reSum(n-1, sum-a[n-1]); 
} 


int Valid(){
    if(f <=k ){
        for(int i=0;i<N && f<=k ;i++){
            if(a[i] == f){
                return 1;
            }
        }
    }
    
    sort(a,a+N);
    int range = -1;
    int sum   = 0;
    for(int i=0;i<N;i++){
        if(a[i] > k){
            range = i;
            break;
        }
        sum += a[i];
    }
    
    if(a[N-1] <= k){
        range = N;
        sum += a[N-1];
    }

    if(sum >= f && reSum(range,f)){
        return 1;
    }
    return 0;
}


int main(){
    int tc;
    cin >> tc;
    
    while(tc--){
        cin >> N;
        for(int i=0;i<N;i++){
            cin >> a[i];
        }
        cin >> f;
        cin >> k;
        if(Valid()){
            cout << "Yes" << endl;
        }
        else{
            cout << "No"  << endl;
        }
    }
	return 0;
}





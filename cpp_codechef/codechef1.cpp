#include<bits/stdc++.h>
using namespace std;

void display(int * arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}


int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}
 
// Function to find gcd of array of
// numbers
int findGCD(int *arr, int n)
{
  int result = arr[0];
  int sumOfGcd = 0;
  for (int i = 0; i < n; i++)
  {
    result = gcd(arr[i], result);
    sumOfGcd += result;
 
  }
  return sumOfGcd;
}

bool permutation(int * arr, int n , int sum){ 
    // sort(arr, arr+n);
    int real_sum ;
    do{
         real_sum = findGCD(arr, n);
        //  cout<<real_sum<< " ";
        //  display(arr, n);
        if(real_sum == sum){
            return true;
        }

}
    while(next_permutation(arr, arr +n));

    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a, sum;
        cin>>a>>sum;
        int * arr = new int(a);
        for(int i=1; i<=a; i++){
            arr[i] = i;
        }
        if(permutation(arr, a, sum))
        {
            display(arr,a);
        }
        else{
            cout<<-1;
        }
        
        
    }


    return 0;
}
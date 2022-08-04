#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[10][10];
    int m, n;
    cin>>m>>n;
    for(int i=0; i<m ; i++){
        for(int j=0 ; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int max_col_sum = INT_MIN , max_row_sum = INT_MIN;
    int col_sum =0, row_sum =0;
    int row_index=0 , col_index=0;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            row_sum = row_sum + arr[i][j];
        }
        if(row_sum>max_row_sum){
            max_row_sum  = row_sum; 
            row_index = i;
        }
        row_sum = 0;
    }


    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++){
            col_sum = col_sum + arr[i][j];
        }
        if(col_sum>max_col_sum){
            max_col_sum  = col_sum; 
            col_index = j;
        }
        col_sum =0;
    }

    if(max_row_sum>= max_col_sum){
        cout<<row_index<<" " << max_row_sum;
    } 
    else{
        cout<<col_index <<" "<< max_col_sum;
    }

    
    return 0;
}
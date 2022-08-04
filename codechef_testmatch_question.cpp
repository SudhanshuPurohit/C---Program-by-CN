#include<iostream>
#include<vector>
using namespace std;

int main()
{   int n;
    cin>> n;
    while(n--){
        vector<int> score;
        int drawMatch =0 , indiaWin =0,  englandWin = 0;
        for(int i=0; i<5; i++){
            int value;
            cin >> value;
            score.push_back(value);
        }

        for(int i=0; i<score.size(); i++){
            if(score[i] == 0){
                drawMatch++;
            }
            else if(score[i] == 1){
                indiaWin++;
            }
            else{
                englandWin++;
            }
        }
        if(indiaWin>englandWin){
            cout<<"india";
        }
        else if (englandWin>indiaWin){
            cout<< "england";
        }
        else{
            cout<<"draw";
        }
        
    }
    


    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int total_salary = 0 , basic;
    char allow ;

    cout<<"Enter your basic salary and grade --> ";
    cin >> basic >> allow;

    if(allow == 'A'){
        total_salary = 1700;
    }
    else if(allow == 'B'){
        total_salary = 1500;
    }
    else{
        total_salary = 1300;
    }
    
    total_salary = round(total_salary + basic + basic*(0.2) + basic*0.5 - basic*0.11);
    cout<<"Your Total Salary Per Month is = "<<total_salary;

        // cout<<round(1.2)<<endl;
        // cout<<lround(-1.2)<<endl;
        // cout<<round(1.5)<<endl;
        // cout<<round(-1.5)<<endl;
        // cout<<lround(-0.1112)<<endl;
        // cout<<lround(-0.0)<<endl;


    return(0);
}


#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    //cout<<rand()<<"\n";

    int randomNum = rand() % 101;
    cout<<randomNum;
    return 0;
}
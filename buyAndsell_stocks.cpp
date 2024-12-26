#include<iostream>
#include<vector>
using namespace std;

int findMaxProfit(vector<int>prices){
    int maxProfit=0;
    int bestBuy=prices[0];
    for(int i=1;i<prices.size();i++){
        if(prices[i]>bestBuy){
            maxProfit=max(maxProfit,prices[i]-bestBuy);
        }
        bestBuy=min(bestBuy,prices[i]);
    }
    return maxProfit;
}

int main(){
    vector<int>prices={7,2,1,3,9,4};
    int maxProfit=findMaxProfit(prices);
    cout<<"The max profit is "<<maxProfit;
return 0;
}
//Knapsack problem 
//Here basically we are given two arrays , a weight array containning weight of the items
//And a value array containning the prices of the items
//Aim of the problem is we have to maximise the profit or say have to find the maximum value subset of val array
// Given that the sum of the weight of the selected items is less than the given sum

//So in this , top down approach has been used, i.e (Memoization + Recursive calls)
//We first need to have a base condition upon the input variables which will actually vary ,which are w,n
//Then we initialize a matrix with row size = n+1(no of items in each of the array) 
//And column size = w+1 
//We use memset to initialize all the cells in the matrix equal to -1
//And 0th row and 0th column are initialized depending upon base condition which returns value if n=0 or w=0
//We start taking items from the last element of the array and we decide if we want to put into the knapsack bag or not
//If the weight of the element is greater than the given weight then we simply reject it
//Else if weight is less , we can either include it or reject it
//We use max function for computing the max profit , by including the value of the item which is included and 
//running the recursive call on rest of the n-1 items and by not including the current item and running the 
//recursive call simmilarly on rest of the items
//So it will recursively run the function from n to 0 and will give the value for t[n][w]
//which comprises of our max profit 
//As we are building a logic from start to end => top down approach

#include <bits/stdc++.h>
using namespace std;
int knapsack(int wt[],int val[],int w, int n);
void ks(int wt[],int val[],int w,int n,string curr = "");
int dp[5][8];

int main() {
    memset(dp,-1,sizeof(dp));
    int wt[] = {1,3,4,5};
    int val[] = {1,5,5,9};
    int n=4,w=7;
    cout<<knapsack(wt,val,w,n)<<endl;
    ks(wt,val,w,n);
    return 0;
}

int knapsack(int wt[],int val[], int w, int n) {
    if(n==0 || w==0) {
        dp[n][w] = 0;
        return dp[n][w];
    } 
    if(dp[n][w] != -1) {
        return dp[n][w];
    }
    if(wt[n-1] <=w) {
        dp[n][w] = max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),
        knapsack(wt,val,w,n-1));
        return dp[n][w];
    }
    else {
        dp[n][w] = knapsack(wt,val,w,n-1);
        return dp[n][w];
    }
}

//Printing the subset
void ks (int wt[],int val[],int w,int n,string curr) {
    if(n==0 || w==0) {
        cout<<curr<<endl;
        return;
    }
    if(w < wt[n-1]) {
        ks(wt,val,w,n-1,curr);
    }
    else {
        if(dp[n][w] == dp[n-1][w]) {
            ks(wt,val,w,n-1,curr);
        }
        if(dp[n][w] == val[n-1]+dp[n-1][w-wt[n-1]]) {
            curr = curr+ " "+ to_string(val[n-1]);
            ks(wt,val,w-wt[n-1],n-1,curr);
        }
    }
}
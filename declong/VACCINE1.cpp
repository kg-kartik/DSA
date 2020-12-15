#include<bits/stdc++.h>
using namespace std;

int main() {
    int done,dtwo,vone,vtwo,p,sum=0,count=0,mind=0;
    cin>>done>>vone>>dtwo>>vtwo>>p;
    
    mind = min(done,dtwo);
    if(mind != 1) {
        count = count+mind-1;
    }

    while(p > sum) {
        while(done != dtwo) {
            if(done < dtwo) {
                sum = sum+vone;
                done++;
            }
            else {
                sum = sum+vtwo;
                dtwo++;
            }
            
            if(p >= sum) {
                count++;   
            }
            else {
                break;
            }
        }
        if(p >= sum) {
            sum = sum+vone+vtwo;
            count++;   
        }
        else {
            break;
        }
    }   
    cout<<count;
}
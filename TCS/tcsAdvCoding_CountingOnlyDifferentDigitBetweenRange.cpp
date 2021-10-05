#include<bits/stdc++.h>
using namespace std;

int findElement(vector <int> v, int element){
    for(auto i : v){
        if( i == element){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n1, n2;
    cin>>n1>>n2;
    int c = 0;
    for(int i= n1; i<= n2; i++){
        int num = i;
        vector <int> v;
        while(num != 0){
            int r = num % 10;
            if( findElement(v, r) ){
                // cout<<"breaking \n";
                break;
                v.push_back(r);
            }
            else{   // if no. not in vector
                v.push_back(r);
            }
            num = num/10;
        }
        
        if(num == 0){
            c++;
        }
    }

    cout<<c;
}

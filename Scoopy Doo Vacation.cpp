#include<bits/stdc++.h>
using namespace std;


bool Prime(int n) {
    bool answer = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            answer = false;
        }
    }
    return answer;
}


int main(){
	int n;
cin>>n;
	if(n==1){
		cout<<"2";
		return 0;
	}


    for(int i=0, count=0;count<=n;i++){ 
        if(Prime(i)){
            count++;
            if(count==n){
                cout<<i;
            }
        }
    }




		
}
	
	
	
	


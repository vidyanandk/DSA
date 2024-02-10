#include <bits/stdc++.h>
using namespace std;

//  function for kundan test
vector<string> fun(vector<string>&sk,string word){
	map<char,int> mpp;
	vector<string> ans;
	for(int i=0;i<sk.size();i++){
		for(int j=0;j<word.size();j++){
                if(sk[i][j]==word[j]){mpp[word[j]]++;}
                
				 else if(sk[i][j]!=word[j] && sk[i][j]=='_'){

				}

		}
	}
}




int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int s;
	    cin>>s;
	    string n;
	    cin>>n;
	    int i=0;
	   while(n[i]=='0' && i<s){
	       i++;
	   }
       cout<<i<<endl;
	   if(i<s-2)
	   {for(int j=i+1;j<s;j++){
	       n[j]='0';
	   }}
	    cout<<n<<endl;
	}













	return 0;
}

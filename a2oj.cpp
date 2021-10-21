	#include <iostream>
	#include <vector>
using namespace std;
	 
	int main()
	{
	    string s;
	    cin>>s;
	    vector<char> v;
    for(int i=0; i<s.length(); i++){
	        v.push_back(s[i]);
	        // cout<<v[i];
	    }
	    for(int i=0; i<v.size(); i++){
	        if(v[i]<97 && v[i]>64){
	            v[i]=v[i]+32;
	        }
	        if(v[i]=='a' || v[i]=='e' || v[i]=='i' || v[i]=='y' || v[i]=='o' || v[i]=='u'){
	            vector<char> :: iterator it=v.begin()+i;
	            v.erase(it);
	            i--;
	        }
	        
	    }
	    for(int i=0; i<v.size(); i++){
	        cout<< "." << v[i];
	    }
}

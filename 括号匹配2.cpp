#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
#include<stack> 
using namespace std;
bool usi(string s){
        stack<char>stacha;
        for(int i = 0; s[i] != '\0'; i++){
            char c = s[i];
            switch(c)
            {
                case '(':
                    stacha.push('(');
                    break;
                    
                case '{':
                    stacha.push('{');
                    break;
                    
                case '[':
                    stacha.push('[');
                    break;
                    
                case ')':
                    if(stacha.empty()) return false;
                    if(stacha.top() != '(') return false;
                    else stacha.pop();
                    break;
                    
                case '}':
                    if(stacha.empty()) return false;
                    
                    if(stacha.top() != '{') return false;
                    else stacha.pop();
                    break;
                    
                case ']':
                    if(stacha.empty()) return false;
                    
                    if(stacha.top() != '[') return false;
                    else stacha.pop();
                    break;
            }
        }
        if(stacha.empty()) return true;
        else return false;
    }
int main(){
      int n;
      cin>>n;
      string a;
      while(n--){
      	cin>>a;
      	if(usi(a)){
      		cout<<"Yes"<<endl;;
		  }else{
		  	cout<<"No"<<endl;
		  }
	  }
}


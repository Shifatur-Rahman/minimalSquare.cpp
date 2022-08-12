#include<iostream>
using namespace std;
int main(){

int t, l, w, sum, result, minimum, maximum, temp;
cin>>t;
while(t--){
	cin>>l>>w;
	minimum = std::min(l, w);
	sum = minimum + minimum;
	maximum = std::max(l, w);
	result = std::max(sum, maximum);
	temp = (result*result);
    cout<<temp<<endl;

}

}



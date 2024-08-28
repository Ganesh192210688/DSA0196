 #include<iostream>
using namespace std;
int prime(int n){
	int count = 0;
	for(int i = 1; i<=n; i++){
		if(n % i == 0){
			count++;
		}
	}
	if(count == 2){
		cout<<"it is prime"<<endl;
	}
	else{
		cout<<"it is not prime"<<endl;
	}
	return n;
}


int main(){
	
	int n;
	cin>>n;
	int g = prime(n);
	return 0;
}
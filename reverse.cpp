#include <iostream>
using namespace std;

reverse(char* str){
	int len;
	while(str[len] != '\0'){
		len++;
	}
	cout<<"Total length of string is: "<<len<<endl;
	
for(int i=0; i<len/2; i++){
char temp = str[i]; //assigning 1st index to temp in 1st iteration
str[i] = str[len-i-1]; //assigning last index value to 1st index
str[len-i-1] = temp; //assigning 1st index value to last index

//in this swaping procces the last value is assigned to 1st index
//and the first index value to last index and so on on every iteration
	}
}

int main(){
	char str[100];
	cout<<"Enter a string: ";
	cin>>str;
	
	reverse(str);
	cout<<"The reversed value is: "<<str<<endl;
}

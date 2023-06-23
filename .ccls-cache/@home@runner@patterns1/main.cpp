#include<iostream>
using namespace std;
int main()
{
int rows;
int columns;
cout<<"Enter the number of rows"<<"\n";
cin>>rows;
cout<<"Enter the maximum number of columns: "<<"\n";
cin>>columns;
for( int i=0;i<=rows;i++){
for (int j=0;j<i;j++){
cout<<"*";
}
cout<<" "<<endl;
}
for(int i=0;i<=rows;i++){
	for(int j=i;j<=rows;j++){
		cout<<"*";
		}
	cout<<"\n";
}

}
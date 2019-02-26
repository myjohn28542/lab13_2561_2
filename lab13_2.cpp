#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double d[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cin>>d[i][j];
		}
	}
	
}

void showMatrix(const bool d[][N]){
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<d[i][j]<< " ";
		}
		cout<<"\n";
	}
}

void findLocalMax(const double d[][N], bool c[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(d[i][j] > d[i][j-1] && d[i][j]  > d[i][j+1] && d[i][j]  > d[i+1][j] && d[i][j]  > d[i-1][j]){
				c[i][j]=1;
			}else {
				c[i][j]=0;
			}
			if(i==0 or j==0 or i==4 or j==4){
				c[i][j]=0;
			} 
		}
	}
}
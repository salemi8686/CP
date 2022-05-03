#include <iostream>
#include <math.h>
using namespace std;
int main(){
const int N=2;
int i,j,k;
int A[N][N];
int B[N][N];
int C[N][N];
int D[N][N];
cout<<"Matrix A:\n";
for(i=0; i < N; i++)
 for(j=0; j < N; j++)
    cin >> A[i][j];
    
cout << "Matrix B:\n";
for(i=0; i < N; i++)
 for(j=0; j < N; j++)
    cin>>B[i][j];
    
    
cout << "Matrix A+B:\n";
for(i=0; i < N; i++){
 for(j=0; j < N; j++){
    C[i][j]=0;
    C[i][j]=A[i][j]+B[i][j];
    cout << C[i][j] << " ";
 }
 cout<<endl;
}
  
cout<<"Matrix 4*A-2*B="<<endl;
for(int i=0;i<N;i++){
     for(int j=0;j<N;j++){
         C[i][j]=0;
         C[i][j]=4*(A[i][j])-2*(B[i][j]);
         cout<<C[i][j]<<" ";
     }
     cout<<endl;
 }
cout<<"Matrix 2*B+4*A="<<endl;;
for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        C[i][j]=0;
        C[i][j]+=2*(B[i][j])+4*(A[i][j]);
        cout<<C[i][j]<<" ";
    }cout<<endl;
}

return 0;
}


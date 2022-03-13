#include <iostream>
using namespace std;

int main(){
    int t;
    cout<<"Enter the no. of testcase : ";
    cin>>t;
    while(t--){
        cout<<"Enter no. of row and colums respectively : ";
        int p,n;
        cin>>p>>n;
        cout<<"Enter the matrix : \n";
        int arr[p][n];
        for(int i=0;i<p;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }

        int r=0,c=0;
        int max=1;
        int ans=0;

        while(max!=0){
            max=0;
            r=-1; c=-1;
            int count=0;
            for(int i=0;i<p;i++){
                for(int j=0;j<n;j++){
                    if(arr[i][j]==1){
                        count++;
                    }
                }

                if(max<count){
                    max=count;
                    r=i;
                }
                count=0;
            }

            for(int i=0;i<n;i++){
                for(int j=0;j<p;j++){
                    if(arr[j][i]==1){
                        count++;
                    }
                }

                if(max<count){
                    max=count;
                    r=-1;
                    c=i;
                }
                count=0;
            }

#include<iostream>
#include<vector>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0;
    int k=0;
    while(i<n && i<m){
if(arr1[i]<arr2[j]){
    arr3[k+1]=arr1[i+1];
}
else{
    arr3[k++]=arr2[j++];
}
}
while(i<n){
    arr3[k++]=arr1[i++];

}
while(j<m){
    arr2[k++]=arr2[j++];
}
void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
}

int main(){
    int a[5]={1,2,3,45,6};
    int b[4]={98,2,33,49};
    int c[0]={0};
    merge(arr1,5,arr2,3,arr3);
    print(arr3,8);
    return 0;
    
}

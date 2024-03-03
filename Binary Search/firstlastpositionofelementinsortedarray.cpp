#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
int s=0,e=n-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
    if(arr[mid]==key){
        ans=mid;
        e=mid-1;

    }
    else if(key>arr[mid]){
        s=mid+1;

    }
    else if(key<arr[mid]){
        e=mid-1;

    }
    mid=s+(e-s)/2;
}
return ans;
}
int lastOcc(int arr[],int n,int key){
int s=0,e=n-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e){
    if(arr[mid]==key){
        ans=mid;
        s=mid+1;

    }
    else if(key>arr[mid]){
        s=mid+1;

    }
    else if(key<arr[mid]){
        e=mid-1;

    }
    mid=s+(e-s)/2;
}
return ans;
}


int main(){
    int even[10]={1,2,3,3,3,3,3,3,3,5};
    // find first and last occurance value of any index in given array.
    cout<<"first Occurance of 3 is "<<firstOcc(even,10,3)<<endl;
    cout<<"last  Occurance of 3 is "<<lastOcc(even,10,3)<<endl;
    
    // number of times occuring value of 3 in given value of array 
    // (last occurance index-first occurance index + 1)
    cout<<lastOcc(even,10,3)-firstOcc(even,10,3)+1<<endl;
    return 0;
    
}
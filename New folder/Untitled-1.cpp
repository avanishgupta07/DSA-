#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=mid){
        if(arr[mid]==mid){
            return mid;}
            if(key>arr[mid]){
                start=mid+1;
            }
            else{ //key < arr[mid]
            end = mid - 1;
        }
     mid=start+(end-start)/2;
     }
}
int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={9,6,3,8,5};
    int evenIndex=binarySearch(even,6,6);
    cout<<evenIndex<<endl;
    int oddIndex=binarySearch(odd,5,9);
    cout<<oddIndex<<endl;
    return 0;

}
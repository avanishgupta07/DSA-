#include<iostream> 
using namespace std;
void printArray(int arr[],int size){
cout<<"printing the array"<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<"";
}
cout<<"printing Done"<<endl;
}
int main(){
    int third=15;
    printArray(third,15);


}


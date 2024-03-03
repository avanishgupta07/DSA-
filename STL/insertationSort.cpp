void insertionSort(int n,vector<int> &arr){
    for(int i=1;i<=n;i++){
        int temp=arr[i];
        int j=i-1;
        for(j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            }
            arr[j+1]=temp;
        }
}

/*input =2
4
4 12 11 20
6
6 5 4 3 2 1
output =
4 11 12 20
1 2 3 4 5 6
*/

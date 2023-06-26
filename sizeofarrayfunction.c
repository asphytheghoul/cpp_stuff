int size_of_array(int arr[]){
    return sizeof(arr)/sizeof(arr[0]);
}

int main(){
    int arr[] = {1,2,3,4,5};
    printf("Size of array: %d\n",size_of_array(arr));
    return 0;
}
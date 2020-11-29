#include <stdio.h>
#include <math.h>

int binary_search(int a[],int x,int l,int r){
    
    while(l<=r){
        int m;
        m=(l+r)/2;
        floor(m);
        
        if(x==a[m]){
            return m;
        }
        
        if(x>a[m])
            l=m+1;
    
        else
            r=m-1;
        
    return -1;
        
    }
}


int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 10; 
    int result = binary_search(arr, 0, n - 1, x); 
    (result == -1) ? printf("Element is not present"
                            " in array") 
                   : printf("Element is present at "
                            "index %d", 
                            result); 
    return 0; 
} 

#include <iostream>

using namespace std;

int removeDuplicates(int A[], int n) {
    if(n == 0) return 0;

    int index = 0;

    for(int i=0; i<n; i++)
    {
        if(A[index] == A[i])
        {

            continue;
        }
        index++;
        A[index] = A[i];
    }
    cout<<"New array is "<<A[index]<<endl;
    return index+1;
}


int main(){

    int x[10] = {1,1,6};
    int n = 3;
    int z = removeDuplicates(x, n);
    cout<<"Length is "<<z;
}

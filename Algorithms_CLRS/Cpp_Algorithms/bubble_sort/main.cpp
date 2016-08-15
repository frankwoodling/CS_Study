// Bubble sort
// A: vector of numbers

#include <iostream>
#include <vector>

//using namespace std;

std::vector<int> bubble_sort(std::vector<int> A){
    for(int i = 0; i < A.size(); i++){
        for(int j = A.size() -1 ; j > 0; j--){
            if(A[j] < A[j-1]){
                int temp = A[j-1];
                A[j-1] = A[j];
                A[j] = temp;
            }
        }
    }
    return A;
}



int main(){
//    vector<int> vec = {1, 5, 7, 3, 2, 9};
//    vector<int> vec = {-1, 450, 0, 7, -36, -1};
    std::vector<int> vec = {9, 8, 7, 3, 2, 1};

    std::vector<int> vec_sorted = bubble_sort(vec);

    for(int i = 0; i < vec_sorted.size(); i++)
    {
        std::cout << vec_sorted[i] << " ";
    }

    return 0;
}
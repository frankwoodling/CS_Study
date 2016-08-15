// Insertion sort
// Input is a vector of numbers
// Output is a vector of numbers in ascending order

#include <iostream>
#include <vector>

std::vector<int> insertion_sort(std::vector<int> a){
    for(int j = 2; j < a.size(); j++){
        int key = a[j];
        // insert a[j] into the sorted sequence A[1..j-1]
        int i = j - 1;

        while(i > -1 and a[i] > key){
            a[i+1] = a[i];
            i = i - 1;
        }
        a[i+1] = key;
    }

    return a;
}

int main(){
    std::vector<int> vec(6);

    //vec = {5, 2, 4, 6, 1, 3};
    //vec = {1, 1, 1, 4, 1, 2};
    vec = {31, 41, 59, 26, 41, 58};
    vec = insertion_sort(vec);

    for(int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    return 0;
}


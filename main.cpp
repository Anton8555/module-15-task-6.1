#include <iostream>
#include <vector>

int main() {
    // example from job description
    std::vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // other examples
//    std::vector<int> a = {-2, 1, -3, 4, 100, 100, -1, 2, 1, -5, 4};
//    std::vector<int> a = {-2, -1, -3, -4, -1, -2, -1, -5, 4, 4};
//    std::vector<int> a = {1, 3, -2, -1, -3, -4, -1, -2, -1, -5};


    int i,j, sum, sum_max;

    // task completion
    // initialization
    i = 0;
    j = a.size()-1;
    sum = 0;
    for(int ind=i; ind<=j; ind++)
        sum += a[ind];
    sum_max = sum;
    // work
    for(int ind_i=0; ind_i<a.size(); sum-=a[ind_i++]) {
        int sum2 = sum;
        for (int ind_j = (a.size() - 1); ind_j >= ind_i; sum2 -= a[ind_j--])
            if (sum2 > sum_max) {
                sum_max = sum2;
                i = ind_i;
                j = ind_j;
            }
    }

    // result output
    std::cout << "i=" <<  i << ", j=" << j << ", sum_max=" << sum_max << std::endl;

    return 0;
}

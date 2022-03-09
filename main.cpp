#include <iostream>
#include <vector>

int main() {
    // example from job description
    std::vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // other examples
//    std::vector<int> a = {-2, 1, -3, 4, 100, 100, -1, 2, 1, -5, 4};
//    std::vector<int> a = {-2, -1, -3, -4, -1, -2, -1, -5, 4, 4};
//    std::vector<int> a = {1, 3, -2, -1, -3, -4, -1, -2, -1, -5};


    int i,j, minus_pos, sum,sum_max;

    // task completion (Algorithm Kadane)
    // initialization
    i = 0;
    j = 0;
    sum = 0;
    sum_max = a[0];
    minus_pos = -1;
    // work
    for(int r=0; r<a.size(); r++)
    {
        sum += a[r];

        if( sum > sum_max )
        {
            sum_max = sum;
            i = minus_pos+1;
            j = r;
        }

        if( sum < 0 )
        {
            sum = 0;
            minus_pos = r;
        }
    }

    // result output
    std::cout << "i=" <<  i << ", j=" << j << ", sum_max=" << sum_max << std::endl;

    return 0;
}

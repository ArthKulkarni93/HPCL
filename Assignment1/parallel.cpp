#include<bits/stdc++.h>
#include <omp.h>

using namespace std;

int main() {

    #pragma omp parallel
    {
        int tid = omp_get_thread_num();
        cout << "Hello world from " << tid << "\n";
    }
}

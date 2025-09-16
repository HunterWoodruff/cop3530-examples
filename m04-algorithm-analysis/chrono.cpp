#include <iostream>
#include <chrono>
using namespace std;

int main() {
    // Start the clock
    auto start = std::chrono::high_resolution_clock::now();
    // Call the function to be measured
    algorithm(parameter);
int a =5, b= 10;
swap(a, b);
  cout << a << "was swapped with << b << endl;

    // Stop the clock
    auto end = std::chrono::high_resolution_clock::now();
    // Calculate the duration
    std::chrono::duration<double> duration = end - start;
    // Print the duration in seconds
    std::cout << "Function took " << duration.count() << " seconds." << std::endl;
    return 0;
}

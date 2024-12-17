#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    string read;
    double sum,mean,dev;
    int N = 0;
    ifstream source("score.txt");
    while (getline(source, read))
    {
        sum = sum + pow(stod(read),2);
        mean = mean + stod(read);
        // cout << sum << endl;
        N++;
    }
    mean = (mean/N);
    dev = sqrt((sum/N)-pow(mean,2));

    cout << "Number of data = " << N << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << dev << endl;
}
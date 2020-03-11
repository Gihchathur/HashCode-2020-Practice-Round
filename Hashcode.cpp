/*MAYURA PAVAN MANAWADU*/
/*Department of Computer Engineering - USJ*/

#include <iostream>
#include<vector>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

long long int finalSum = 0;
vector<long long int> finalArray;
vector<long long int> a;
long long int M, N;

int main() {

    long long int i, n;
    vector<bool> check;
    bool tmpBool;

    ifstream example;
    example.open("e_also_big.in");
    long long int x;
    if (!example) {
        cerr << "Unable to open file datafile.txt";

    }
    vector<long long int> data;
    while (example >> x) {
        cout << x << endl;
        data.push_back(x);
    }

    //bool check[n];
   // cout << "Maximum Slices of Pizza: "<<endl;
   // cin >> M;
    // cout << "Enter the number of types of Pizzas"<<endl;
    //cin >> N;

    M = data[0];
    N = data[1];

    for (long long int i = 0; i < N; i++)
    {
        tmpBool = false;
        check.push_back(tmpBool);
    }
    //char a[n];


    long long int tmpA;
    //cout << "\n";
    for (i = 2; i < N + 2; i++) {
        // cout << "Enter " << i + 1 << " element: ";

        a.push_back(data[i]);
        //check[i] = false;
    }
    long long int tmpSum=0;
    long long int count = 0;
    for (i = N-1;i>=0; i--) {
        tmpSum += a[i];
        if (tmpSum <= M)
        {
            finalSum = tmpSum;
            check[i] = true;
            count++;
        }
        else
        {
            tmpSum = finalSum;
            continue;
        }

    }

    ofstream outfile;
    outfile.open("alsobig.txt");
    outfile << count << endl;
    for (long long int i = 0; i < check.size(); i++)
    {
        if (check[i])
        {
            outfile << i << " ";
        }
    }

    //outfile << finalArray.size() << endl;


    // cout << finalArray.size() << endl;

    cout << "done";
    return 0;
}
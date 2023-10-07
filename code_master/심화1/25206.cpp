#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    string str;
    double score = 0;
    string grade;
    double total = 0;
    vector<double> sum;
    double result = 0;
    
    for (int i = 0; i < 20; i++){
        cin >> str >> score >> grade;
        if (grade != "P"){
            total += score;
            if (grade == "A+")
                sum.push_back(score * 4.5);
            else if (grade == "A0")
                sum.push_back(score * 4.0);
            else if (grade == "B+")
                sum.push_back(score * 3.5);
            else if (grade == "B0")
                sum.push_back(score * 3.0);
            else if (grade == "C+")
                sum.push_back(score * 2.5);
            else if (grade == "C0")
                sum.push_back(score * 2.0);
            else if (grade == "D+")
                sum.push_back(score * 1.5);
            else if (grade == "D0")
                sum.push_back(score * 1.0);
            else if (grade == "F")
                sum.push_back(score * 0.0);
        }
    }
    

//    for (int i = 0; i < sum.size(); i++){
//        cout << sum[i] << ", ";
//    }
    result = accumulate(sum.begin(), sum.end(), 0.0);
   // cout << result << endl;
    cout << fixed;
    cout.precision(6);


    cout << result / total << endl;
}

#include <bits/stdc++.h>
using namespace std;

double calculateCharge(double t);

int main() {
    double sumCharge=0, charge, sumTime=0;
    int userNum=0, userSum = 3;

    cout << "How long did you parking your car yesterday?" << endl;
    cout << "Please enter like this in order." << endl;
    vector<double> time(userSum);

    for (int i=0; i<userSum; i++) {
        cout << "user " << i+1 << " time is: ";
        cin >> time.at(i);
        sumTime += time.at(i);
    }
    

    cout << left << setw(5) << "car" << right << setw(10) << "time" << right << setw(10) << "charge" << endl;
    for (int i=0; i<userSum; i++) {
        charge = calculateCharge(time.at(i));
        sumCharge += charge;
        cout << left << setw(5) << i+1;
        cout << right << setiosflags(ios::fixed | ios::showpoint) << setw(10) << setprecision(1) << time.at(i);
        cout << right << setiosflags(ios::fixed | ios::showpoint) << setw(10) << setprecision(2) << charge;
        cout << endl;
    }

    cout << left << setw(5) << "sum";
    cout << right << setiosflags(ios::fixed | ios::showpoint) << setw(10) << setprecision(1) << sumTime;
    cout << right << setiosflags(ios::fixed | ios::showpoint) << setw(10) << setprecision(2) << sumCharge;
    cout << endl;

    return 0;

}

double calculateCharge(double t) {
    double charge=0;

    charge += 2;

    if (t > 3.0) charge += 0.5 * (t - 3.0);

    if (charge > 10.0) return 10.0;
    else return charge;
}

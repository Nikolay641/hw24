#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
    ////task 1
    //int n = 0;
    //string s;
    //cout << "Input int number: "; cin >> n;
    //cout << "Input string: ";
    //cin.ignore();
    //getline(cin, s);
    //if (n > s.length()) {
    //    s.insert(0, n - s.length(), '.');
    //}
    //else if (n < s.length()) {
    //    s.erase(0, s.length() - n);
    //}
    //cout << s;

    ////task 2
    //int n1 = 0, n2 = 0;
    //string s1, s2;
    //cout << "Input int number(1): "; cin >> n1;
    //cout << "Input string(1): "; cin >> s1;
    //cout << "Input int number(2): "; cin >> n2;
    //cout << "Input string(2): "; cin >> s2;
    //string s = s1.substr(0, n1) + s2.substr(s2.length() - n2);
    //cout << s;

    ////task 3
    //char c = 0;
    //string s;
    //cout << "Input char: "; cin >> c;
    //cout << "Input text: "; cin >> s;
    //for (int i = 0; i < s.length(); i++) {
    //    if (s[i] == c) {
    //        s.insert(i, 1, c);
    //        i++;
    //    }
    //}
    //cout << s;

    ////task 4
    //char c = 0;
    //string s, s0;
    //cout << "Input char: "; cin >> c; cin.ignore();
    //cout << "Input text: "; getline(cin, s);
    //cout << "Input word for insert: "; cin >> s0;
    //for (int i = 0; i < s.length(); i++) {
    //    if (s[i] == c) {
    //        s.insert(i, s0);
    //        i += s0.length();
    //    }
    //}
    //cout << s;

    //task 5
    //char c = 0;
    //string s, s0;
    //cout << "Input char: "; cin >> c; cin.ignore();
    //cout << "Input text: "; getline(cin, s);
    //cout << "Input word for insert: "; cin >> s0;
    //for (int i = 0; i < s.length(); i++) {
    //    if (s[i] == c) {
    //        s.insert(i + 1, s0);
    //        i += s0.length();
    //    }
    //}
    //cout << s;

    //task 6
    //string s, s0;
    //cout << "Input text: "; getline(cin, s);
    //cout << "Input word: "; cin >> s0;
    //int i = 0;
    //for (int i = 0; i < s.length(); i++) {
    //    if (s.find(s0, i) != -1) {
    //        cout << "True\n";
    //        break;
    //    }
    //    else {
    //        cout << "False\n";
    //        break;
    //    }
    //}

    ////task 7
    //string s, s0;
    //cout << "Input text: "; getline(cin, s);
    //cout << "Input word: "; cin >> s0;
    //int n = 0;
    //int i = 0;
    //while (s.find(s0, i) != -1) {
    //    n++;
    //    i = s.find(s0, i) + 1;
    //}
    //cout << n;

    ////task 8
    //string s, s0;
    //cout << "Input text: "; getline(cin, s);
    //cout << "Input word: "; cin >> s0;
    //s.erase(s.find(s0), s0.length());
    //cout << s;

    ////task 9
    //string s, s0;
    //cout << "Input text: "; getline(cin, s);
    //cout << "Input word: "; cin >> s0;
    //while (s.find(s0) != -1) {
    //    s.erase(s.find(s0), s0.length());
    //}
    //cout << s;

    ////task 10
    //string s, s1, s2;
    //cout << "Input text: "; getline(cin, s);
    //cout << "Input word: "; cin >> s1;
    //cout << "Input word for replace: "; cin >> s2;
    //int i = s.find(s1);
    //if (i != -1) {
    //    s.replace(i, s1.length(), s2);
    //}
    //else cout << "Not found";
    //cout << s;

    ////task 11
    //string s, s1, s2;
    //cout << "Input text: "; getline(cin, s);
    //cout << "Input word: "; cin >> s1;
    //cout << "Input word for replace: "; cin >> s2;
    //while (s.find(s1) != -1) {
    //    int i = s.find(s1);
    //    s.replace(i, s1.length(), s2);
    //}
    //cout << s;

    ////task 12 and task 13(Works together)
    //string s, result;
    //cout << "Input text: "; getline(cin, s);
    //for (int i = 0; i < s.length(); i++) {
    //    if (i % 2 != 0) {
    //        result += s[i];
    //    }
    //}
    //for (int i = s.length() - 1; i < s.length(); i--) {
    //    if (i % 2 == 0) {
    //        result += s[i];
    //    }
    //}
    //cout << "Task 12: " << result << endl;
    ////------------------------------
    //s = result;
    //result = "";
    //int i = 0, j = s.length() - 1;
    //while (i <= j){
    //    if (i == j) {
    //        result += s[j];
    //        break;
    //    }
    //    result += s[j];
    //    result += s[i];
    //    i++; j--;
    //}
    //cout << "Task 13: " << result << endl;

    ////task 14
    //string fileName;
    //cout << "Input file name: "; cin >> fileName;
    //ofstream file(fileName + ".txt");
    //if (file.is_open()) {
    //    cout << "True\n";
    //    file.close();
    //}
    //else cout << "False\n";

    ////task 15
    //int n = 0;
    //cout << "Input number: "; cin >> n;
    //ofstream file("Task15.txt");
    //if (file.is_open()) {
    //    for (int i = 1; i <= n * 2; i++) {
    //        if (i % 2 == 0) {
    //            file << i << " ";
    //        }
    //    }
    //    cout << "Done\n";
    //    file.close();
    //}

    ////task 16
    //int n = 0;
    //cout << "Input n: "; cin >> n;
    //ofstream file1("Task16(a).txt");
    //ofstream file2("Task16(b).txt");
    //ofstream file3("Task16(c).txt");
    //if (file1.is_open() && file2.is_open() && file3.is_open()) {
    //    for (int i = 0; i < n; i++)
    //    {
    //        file1 << i << " ";
    //        file2 << i << " ";
    //        file3 << i << " ";
    //    }
    //    file1.close();
    //    file2.close();
    //    file3.close();
    //}

    //ifstream File1("Task16(a).txt");
    //ifstream File2("Task16(b).txt");
    //ifstream File3("Task16(c).txt");
    //ofstream File4("Task16(d).txt");
    //if (File1.is_open() && File2.is_open() && File3.is_open() && File4.is_open()) {
    //    int nA, nB, nC;
    //    for (int i = 0; i < n; i++) {
    //        File1 >> nA;
    //        File2 >> nB;
    //        File3 >> nC;
    //        File4 << nA << " " << nB << " " << nC << " ";
    //    }
    //    File1.close();
    //    File2.close();
    //    File3.close();
    //    File4.close();
    //}
    //cout << "\nDone\n";

    ////task 17
    //ifstream file1("Dates.txt");
    //ofstream file2("Days.txt");
    //ofstream file3("Month.txt");
    //if (file1.is_open() && file2.is_open() && file3.is_open()) {
    //    string readText;
    //    while(getline(file1, readText)){
    //        string day = readText.substr(0, 2);
    //        string month = readText.substr(3, 2);
    //        file2 << day << " ";
    //        file3 << month << " ";
    //    }
    //    file1.close();
    //    file2.close();
    //    file3.close();
    //    cout << "Done\n";
    //}

    ////task 18
    //ifstream file1("Dates.txt");
    //ofstream file2("SummerMonth.txt");
    //if (file1.is_open() && file2.is_open()) {
    //    string summerMonth;
    //    while (getline(file1, summerMonth)) {
    //        if (summerMonth.substr(3, 2) == "06" || summerMonth.substr(3, 2) == "07" || summerMonth.substr(3, 2) == "08") {
    //            file2 << summerMonth << " ";
    //        }
    //    }
    //    file1.close();
    //    file2.close();
    //    cout << "Done\n";
    //}

    ////task 19
    //ifstream file1("f1.txt");
    //ifstream file2("f2.txt");
    //ofstream file3("g(task19).txt");
    //if (file1.is_open() && file2.is_open() && file3.is_open()) {
    //    string from, to, text;
    //    file2 >> from;
    //    file2 >> to;
    //    while (getline(file1,text))
    //    {
    //        int pos = 0;
    //        while ((pos = text.find(from, pos)) != string::npos) {
    //            text.replace(pos, from.length(), to);
    //            pos += to.length();
    //        }
    //        file3 << text << endl;
    //    }
    //    file1.close();
    //    file2.close();
    //    file3.close();
    //}

    ////task 20
    //ifstream file1("f.txt");
    //ofstream file2("g(task20).txt");
    //if (file1.is_open() && file2.is_open()){
    //    string lastName, firstName, patronymic;
    //    int choise = 0;
    //    cout << "Choise option(1 or 2): "; cin >> choise;
    //    while (file1 >> lastName >> firstName >> patronymic) {
    //        if (choise == 1) {
    //            file2 << firstName << lastName << patronymic << endl;
    //        }
    //        else if (choise == 2){
    //            file2 << lastName[0] << ". " << firstName[0] << ". " << patronymic[0] << "." << endl;
    //        }
    //    }
    //    cout << "\nDone\n";
    //}
}
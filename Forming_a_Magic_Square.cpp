#include <bits/stdc++.h>

using namespace std;
int ashish0(vector<vector<int>> s)
{
    int sum = 0;
    sum = abs(8 - s[0][0]) + abs(3 - s[0][1]) + abs(4 - s[0][2]) + abs(1 - s[1][0]) + abs(5 - s[1][1]) + abs(9 - s[1][2]) + abs(6 - s[2][0]) + abs(7 - s[2][1]) + abs(2 - s[2][2]);
    return sum;
}
int ashish1(vector<vector<int>> s)
{
    int sum = 0;
    sum = abs(6 - s[0][0]) + abs(1 - s[0][1]) + abs(8 - s[0][2]) + abs(7 - s[1][0]) + abs(5 - s[1][1]) + abs(3 - s[1][2]) + abs(2 - s[2][0]) + abs(9 - s[2][1]) + abs(4 - s[2][2]);
    return sum;
}
int ashish2(vector<vector<int>> s)
{
    int sum = 0;
    sum = abs(2 - s[0][0]) + abs(7 - s[0][1]) + abs(6 - s[0][2]) + abs(9 - s[1][0]) + abs(5 - s[1][1]) + abs(1 - s[1][2]) + abs(4 - s[2][0]) + abs(3 - s[2][1]) + abs(8 - s[2][2]);
    return sum;
}
int ashish3(vector<vector<int>> s)
{
    int sum = 0;
    sum = abs(4 - s[0][0]) + abs(9 - s[0][1]) + abs(2 - s[0][2]) + abs(3 - s[1][0]) + abs(5 - s[1][1]) + abs(7 - s[1][2]) + abs(8 - s[2][0]) + abs(1 - s[2][1]) + abs(6 - s[2][2]);
    return sum;
}
int ashish4(vector<vector<int>> s)
{
    int sum = 0;
    sum = abs(8 - s[0][0]) + abs(1 - s[0][1]) + abs(6 - s[0][2]) + abs(3 - s[1][0]) + abs(5 - s[1][1]) + abs(7 - s[1][2]) + abs(4 - s[2][0]) + abs(9 - s[2][1]) + abs(2 - s[2][2]);
    return sum;
}
int ashish5(vector<vector<int>> s)
{
    int sum = 0;
    sum = abs(6 - s[0][0]) + abs(7 - s[0][1]) + abs(2 - s[0][2]) + abs(1 - s[1][0]) + abs(5 - s[1][1]) + abs(9 - s[1][2]) + abs(8 - s[2][0]) + abs(3 - s[2][1]) + abs(4 - s[2][2]);
    return sum;
}
int ashish6(vector<vector<int>> s)
{
    int sum = 0;
    sum = abs(2 - s[0][0]) + abs(9 - s[0][1]) + abs(4 - s[0][2]) + abs(7 - s[1][0]) + abs(5 - s[1][1]) + abs(3 - s[1][2]) + abs(6 - s[2][0]) + abs(1 - s[2][1]) + abs(8 - s[2][2]);
    return sum;
}
int ashish7(vector<vector<int>> s)
{
    int sum = 0;
    sum = abs(4 - s[0][0]) + abs(3 - s[0][1]) + abs(8 - s[0][2]) + abs(9 - s[1][0]) + abs(5 - s[1][1]) + abs(1 - s[1][2]) + abs(2 - s[2][0]) + abs(7 - s[2][1]) + abs(6 - s[2][2]);
    return sum;
}
int formingMagicSquare(vector<vector<int>> s)
{
    int a0 = ashish0(s);
    int a1 = ashish1(s);
    int a2 = ashish2(s);
    int a3 = ashish3(s);
    int a4 = ashish4(s);
    int a5 = ashish5(s);
    int a6 = ashish6(s);
    int a7 = ashish7(s);
    if (a0 > a1)
        a0 = a1;
    else
        a1 = a0;
    if (a2 > a3)
        a2 = a3;
    else
        a3 = a2;
    if (a4 > a5)
        a4 = a5;
    else
        a5 = a4;
    if (a6 > a7)
        a6 = a7;
    else
        a7 = a6;
    if (a0 > a2)
        a0 = a2;
    else
        a2 = a0;
    if (a4 > a6)
        a4 = a6;
    else
        a6 = a4;
    if (a0 > a4)
        return a4;
    else
        return a0;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++)
    {
        s[i].resize(3);

        for (int j = 0; j < 3; j++)
        {
            cin >> s[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

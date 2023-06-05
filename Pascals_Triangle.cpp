#include<vector>

vector < vector < long long int >> printPascal(int n) {
    vector < vector < long long int >> triangle;
    vector < long long int > temp;

    temp.push_back(1);
    triangle.push_back(temp);
    for (int i = 1; i < n; i++) {
        temp.clear();
        for (int j = 0; j <= i; j++) {
            if (j == i || j == 0) {
                temp.push_back(1);
            } else {
                temp.push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]);
            }
        }
        triangle.push_back(temp);
    }
    return triangle;
}

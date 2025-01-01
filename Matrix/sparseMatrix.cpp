#include <iostream>
using namespace std;

struct element {
    int i; // Row
    int j; // Column
    int x; // Non-zero value
};

struct sparse {
    int m;     // Rows
    int n;     // Columns
    int num;   // Number of non-zero elements
    element* ele; // Pointer to array of elements
};

void create(sparse* s) {
    cout << "Enter the dimensions of the matrix (rows, columns): ";
    cin >> s->m >> s->n;
    cout << "Enter the number of non-zero elements: ";
    cin >> s->num;

    s->ele = new element[s->num];
    cout << "Enter the non-zero elements (row, column, value):\n";
    for (int i = 0; i < s->num; i++) {
        cout << "Element " << i + 1 << ":\n";
        cout << "Row: ";
        cin >> s->ele[i].i;
        cout << "Column: ";
        cin >> s->ele[i].j;
        cout << "Value: ";
        cin >> s->ele[i].x;
    }
}

sparse* add_sparse_mat(sparse* s1, sparse* s2) {
    if (s1->m != s2->m || s1->n != s2->n) {
        return nullptr; // Dimensions mismatch
    }

    sparse* sum = new sparse;
    sum->m = s1->m;
    sum->n = s1->n;
    sum->num = 0;
    sum->ele = new element[s1->num + s2->num];

    int p = 0, q = 0, r = 0;
    while (p < s1->num && q < s2->num)
    {
        if (s1->ele[p].i < s2->ele[q].i ||
            (s1->ele[p].i == s2->ele[q].i && s1->ele[p].j < s2->ele[q].j))
        {
            sum->ele[r++] = s1->ele[p++];
        }
        else if (s2->ele[q].i < s1->ele[p].i ||
                 (s2->ele[q].i == s1->ele[p].i && s2->ele[q].j < s1->ele[p].j))
        {
            sum->ele[r++] = s2->ele[q++];
        }
        else
        {
            sum->ele[r] = s1->ele[p];
            sum->ele[r++].x = s1->ele[p++].x + s2->ele[q++].x;
        }
    }

    for (; p < s1->num; p++) {
        sum->ele[r++] = s1->ele[p];
    }
    for (; q < s2->num; q++) {
        sum->ele[r++] = s2->ele[q];
    }

    sum->num = r;
    return sum;
}

void display(sparse s) {
    int k = 0;
    cout << "\nMatrix:\n";
    for (int i = 0; i < s.m; i++) {
        for (int j = 0; j < s.n; j++) {
            if (k < s.num && i == s.ele[k].i && j == s.ele[k].j) {
                cout << s.ele[k++].x << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << "\n";
    }
}

int main() {
    sparse s1, s2, *add;
    create(&s1);
    create(&s2);

    add = add_sparse_mat(&s1, &s2);

    if (!add)
    {
        cout << "Addition failed due to dimension mismatch.\n";
    }
    else
    {
        cout << "=============================================\n";
        display(*add);

        // Cleanup
        delete[] add->ele;
        delete add;
    }

    // Cleanup
    delete[] s1.ele;
    delete[] s2.ele;

    return 0;
}

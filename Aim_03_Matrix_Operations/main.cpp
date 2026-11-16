#include <iostream>
#include <vector>
using namespace std;

using Matrix = vector<vector<int>>;

// Function to input a matrix
Matrix inputMatrix(int rows, int cols)
{
    Matrix A(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
    }

    return A;
}

// Function to display a matrix
void displayMatrix(const Matrix& A)
{
    for (const auto& row : A)
    {
        for (int value : row)
        {
            cout << value << "\t";
        }
        cout << endl;
    }
}

// Function for matrix addition
Matrix addMatrices(const Matrix& A, const Matrix& B)
{
    int rows = A.size();
    int cols = A[0].size();

    Matrix result(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }

    return result;
}

// Function for matrix subtraction
Matrix subtractMatrices(const Matrix& A, const Matrix& B)
{
    int rows = A.size();
    int cols = A[0].size();

    Matrix result(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = A[i][j] - B[i][j];
        }
    }

    return result;
}

// Function for matrix multiplication
Matrix multiplyMatrices(const Matrix& A, const Matrix& B)
{
    int rows = A.size();
    int cols = B[0].size();
    int common = B.size();

    Matrix result(rows, vector<int>(cols, 0));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            for (int k = 0; k < common; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return result;
}

// Function to display transpose of a matrix
Matrix transposeMatrix(const Matrix& A)
{
    int rows = A.size();
    int cols = A[0].size();

    Matrix result(cols, vector<int>(rows));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[j][i] = A[i][j];
        }
    }

    return result;
}

int main()
{
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    if (r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0)
    {
        cout << "Invalid matrix dimensions.";
        return 1;
    }

    cout << "Enter elements of Matrix A:\n";
    Matrix A = inputMatrix(r1, c1);

    cout << "Enter elements of Matrix B:\n";
    Matrix B = inputMatrix(r2, c2);

    int choice;

    do
    {
        cout << "\n----- MATRIX OPERATIONS -----\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Transpose\n";
        cout << "0. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                if (r1 == r2 && c1 == c2)
                {
                    cout << "Matrix Addition:\n";
                    displayMatrix(addMatrices(A, B));
                }
                else
                {
                    cout << "Addition not possible. Dimensions must be equal.\n";
                }
                break;

            case 2:
                if (r1 == r2 && c1 == c2)
                {
                    cout << "Matrix Subtraction:\n";
                    displayMatrix(subtractMatrices(A, B));
                }
                else
                {
                    cout << "Subtraction not possible. Dimensions must be equal.\n";
                }
                break;

            case 3:
                if (c1 == r2)
                {
                    cout << "Matrix Multiplication:\n";
                    displayMatrix(multiplyMatrices(A, B));
                }
                else
                {
                    cout << "Multiplication not possible. Columns of A must equal rows of B.\n";
                }
                break;

            case 4:
            {
                int matrixChoice;

                cout << "Transpose of which matrix? (1 for A, 2 for B): ";
                cin >> matrixChoice;

                if (matrixChoice == 1)
                {
                    cout << "Transpose of Matrix A:\n";
                    displayMatrix(transposeMatrix(A));
                }
                else if (matrixChoice == 2)
                {
                    cout << "Transpose of Matrix B:\n";
                    displayMatrix(transposeMatrix(B));
                }
                else
                {
                    cout << "Invalid matrix choice.\n";
                }

                break;
            }

            case 0:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}
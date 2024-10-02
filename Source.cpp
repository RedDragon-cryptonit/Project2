#include <iostream> 
using namespace std;

void sumAndNumOfPositiveAboveDiagonal(int A[][3], int N) {
  setlocale(LC_ALL, "ru");
  int sum = 0;
  int num = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      if (A[i][j] > 0) {
        sum += A[i][j];
        num++;
      }
    }
  }
  cout << "Число положительных элементов матрицы выше диагонали равно: " << num << endl;
  cout << "Сумма этих чисел равна: " << sum << endl;
}

int main() {
  const int N = 3, M = 3;
  int matrix[N][M] = { { 3, 2, 999},
                       { 8, 10, 11},
                       { -4, 5, -100} };
  for (int x = 0; x < N; x++) {
    for (int y = 0; y < M; y++) {
      cout << matrix[x][y] << " ";
    }
    cout << "\n";
  }
  sumAndNumOfPositiveAboveDiagonal(matrix, N);
  return 0;
}
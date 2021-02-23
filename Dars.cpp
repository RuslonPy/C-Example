#include <bits/stdc++.h>
using namespace std;
// ����� ������� ���������
void sysout(double **a, double *y, int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << a[i][j] << "*x" << j;
      if (j < n - 1)
        cout << " + ";
    }
    cout << " = " << y[i] << endl;
  }
  return;
}
double * gauss(double **a, double *y, int n)
{
  double *x, max;
  int k, index;
  const double eps = 0.00001;  // ��������
  x = new double[n];
  k = 0;
  while (k < n)
  {
    // ����� ������ � ������������ a[i][k]
    max = abs(a[k][k]);
    index = k;
    for (int i = k + 1; i < n; i++)
    {
      if (abs(a[i][k]) > max)
      {
        max = abs(a[i][k]);
        index = i;
      }
    }
    // ������������ �����
    if (max < eps)
    {
      // ��� ��������� ������������ ���������
      cout << "javob olish imkoni yo'q";
      cout << index << " A matritsasi" << endl;
      return 0;
    }
    for (int j = 0; j < n; j++)
    {
      double temp = a[k][j];
      a[k][j] = a[index][j];
      a[index][j] = temp;
    }
    double temp = y[k];
    y[k] = y[index];
    y[index] = temp;
    // ������������ ���������
    for (int i = k; i < n; i++)
    {
      double temp = a[i][k];
      if (abs(temp) < eps) continue; // ��� �������� ������������ ����������
      for (int j = 0; j < n; j++)
        a[i][j] = a[i][j] / temp;
      y[i] = y[i] / temp;
      if (i == k)  continue; // ��������� �� �������� ���� �� ����
      for (int j = 0; j < n; j++)
        a[i][j] = a[i][j] - a[k][j];
      y[i] = y[i] - y[k];
    }
    k++;
  }
  // �������� �����������
  for (k = n - 1; k >= 0; k--)
  {
    x[k] = y[k];
    for (int i = 0; i < k; i++)
      y[i] = y[i] - a[i][k] * x[k];
  }
  return x;
}
int main()
{
  double **a, *y, *x;
  int n;
  system("chcp 1251");
  system("cls");
  cout << "Tenglamalar sonini kiriting: ";
  cin >> n;
  a = new double*[n];
  y = new double[n];
  for (int i = 0; i < n; i++)
  {
    a[i] = new double[n];
    for (int j = 0; j < n; j++)
    {
      cout << "a[" << i << "][" << j << "]= ";
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << "y[" << i << "]= ";
    cin >> y[i];
  }
  sysout(a, y, n);
  x = gauss(a, y, n);
  for (int i = 0; i < n; i++)
    printf("x[%d]=%.2f\n", i, x[i]);
  cin.get(); cin.get();
  return 0;
}


#pragma once
#include <iostream>

class Matrix{
private:
  const int numRows;
  const int numCols;
  int **contents;

public:
  Matrix(int nRows, int nCols);
  ~Matrix();

  void setMatrixValue(int row, int col, int value);
  int  getMatrixValue(int row, int col) const;

  int getMatrixRows() const;
  int getMatrixCols() const;

  Matrix operator+(const Matrix &other) const;
  Matrix operator*(const Matrix &other) const;
};

std::ostream& operator<<(std::ostream &os, const Matrix &m);

//
//  Matrix.cpp
//  Matrix
//
//  Created by Sunho Hwang on 31/10/2019.
//  Copyright © 2019 Sunho Hwang. All rights reserved.
//

#include "Matrix.hpp"
#include <iostream>

Matrix::Matrix(int nrows, int ncols) : numRows(nrows) , numCols(ncols) {
    contents = new int*[nrows];
    for (int i = 0; i < nrows ; i++)
        contents[i] = new int[ncols];
}

Matrix::~Matrix() {
    for (int i = 0; i < numRows; i++)
      delete[] contents[i];
    delete[] contents;
}

void Matrix::setMatrixValue(int row,int col, int value) {
    contents[row][col] = value;
    
}

int Matrix::getMatrixValue(int row, int col) const {
    return contents[row][col];
}

int Matrix::getMatrixCols() const {
    return numCols;
}
int Matrix::getMatrixRows() const {
    return numRows;
}

Matrix Matrix::operator+(const Matrix &other) const {
    Matrix Mat(numRows, numCols);
    for(int i=0;i<numRows;i++)
             for(int j=0;j<numCols;j++)
                 Mat.contents[i][j]+=other.contents[i][j]+contents[i][j];
    return Mat;
}

Matrix Matrix::operator*(const Matrix &other) const {
      Matrix Mat(numCols,other.numRows);
      for(int i=0;i<numRows;i++)
          for(int j=0;j<other.numCols;j++)
            for(int k =0;k<numCols;k++)
                Mat.contents[i][j]+=contents[i][k]*other.contents[i][j];
      return Mat;
}



std::ostream & operator<<(std::ostream &os, const Matrix &m) {
    const int rows = m.getMatrixRows();
    const int cols = m.getMatrixCols();
    for(int r=0; r< rows;r++)
    {
      for(int c=0; c< cols;c++)
      {
          os<<m.getMatrixValue(r, c)<<" ";
      }

     os<<std::endl;
    }
 
    return os;
}
    


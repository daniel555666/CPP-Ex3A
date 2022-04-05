#include <iostream>
#include <vector>
#include "Matrix.hpp"
#include <stdexcept>
#include <fstream>
#include <sstream>

using namespace std;
using namespace zich;

Matrix::Matrix(vector<double> arr, int row, int col)
{
    this->arr = arr;
    this->rows = row;
    this->cols = col;
}

Matrix Matrix::operator+(const Matrix &other) { return *this; }
Matrix &Matrix::operator+=(const Matrix &other) { return *this; }
Matrix Matrix::operator-(const Matrix &other) { return *this; }
Matrix &Matrix::operator-=(const Matrix &other) { return *this; }
Matrix &Matrix::operator++() { return *this; }
Matrix &Matrix::operator--() { return *this; }
Matrix Matrix::operator-() { return *this; }
Matrix Matrix::operator+() { return *this; }
Matrix Matrix::operator+(double num) { return *this; }
Matrix Matrix::operator-(double num) { return *this; }

bool Matrix::operator==(const Matrix &other) { return true; }
bool Matrix::operator!=(const Matrix &other) { return true; }
bool Matrix::operator<=(const Matrix &other) { return true; }
bool Matrix::operator<(const Matrix &other) { return true; }
bool Matrix::operator>=(const Matrix &other) { return true; }
bool Matrix::operator>(const Matrix &other) { return true; }

Matrix Matrix::operator*(const Matrix &other) { return *this; }
Matrix &Matrix::operator*=(double num) { return *this; }
Matrix Matrix::operator*(double num) { return *this; }
Matrix &Matrix::operator*=(const Matrix &other) { return *this; }

namespace zich
{

    ostream &operator<<(ostream &output, const Matrix &mat) { return output << "work"; }
    istream &operator>>(istream &input, Matrix &mat) { return input; }
    Matrix operator*(double num, Matrix &mat){return mat;}
}
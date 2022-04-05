#include<iostream>
#include<vector>
#include <stdexcept>
#include <fstream>
#include <sstream>

using namespace std;

namespace zich{

    class Matrix{
        private:
            vector<double>arr;
            int rows;
            int cols;

        public:
            Matrix(vector<double> arr,int row,int col);

            Matrix operator+(const Matrix &other);      
            Matrix& operator+=(const Matrix &other); 
            Matrix operator-(const Matrix &other);
            Matrix& operator-=(const Matrix &other);  
            Matrix& operator++();          
            Matrix& operator--();  
            Matrix operator-();  
            Matrix operator+();  
            Matrix operator+(double num); 
            Matrix operator-(double num);      
 

            bool operator==(const Matrix &other);
            bool operator!=(const Matrix &other);
            bool operator<=(const Matrix &other);
            bool operator<(const Matrix &other);
            bool operator>=(const Matrix &other);
            bool operator>(const Matrix &other);

            Matrix operator*(const Matrix &other);  
            Matrix& operator*=(double num);  
            Matrix operator*(double num);   
            Matrix& operator*=(const Matrix &other); 

            
            friend ostream& operator<< (ostream& output, const Matrix& mat);
            friend istream& operator>> (istream& input , Matrix& mat);
            friend Matrix operator*(double num,Matrix& mat);


    };
}
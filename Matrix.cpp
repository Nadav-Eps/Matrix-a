#include "Matrix.hpp"
#include <iostream>
using namespace std;
const int tmp =100;

namespace zich
{

Matrix& Matrix::operator+() { 
    return *this; }
Matrix& Matrix::operator-() { 
    return *this; }  
Matrix Matrix::operator +(const Matrix &nm){
    std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    Matrix bloof(identity,3,3);
    return bloof;
}
Matrix Matrix::operator*(const Matrix &nm) { 
    Matrix bloof(identity,3,3);
    return bloof;
 }
Matrix Matrix::operator*(const double num) { 
    Matrix bloof(identity,3,3);
    return bloof;
 }
Matrix &Matrix::operator +=(const Matrix &nm){
    return *this;
}
Matrix &Matrix::operator +=(const double num){
    return *this;
}
Matrix &Matrix::operator *=(const Matrix &nm){
    return *this;
}
Matrix& Matrix::operator*=(const double num) { 
    return *this; 
    }
Matrix Matrix::operator -(const Matrix &nm){
    std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    Matrix bloof(identity,3,3);
    return bloof;
}
Matrix &Matrix::operator -=(const Matrix &nm){
    return *this;
}
Matrix &Matrix::operator -=(const double num){
    return *this;
}
Matrix Matrix::operator --(int n){
    std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    Matrix bloof(identity,3,3);
    return bloof;
}
Matrix Matrix::operator ++(int n){
    std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    Matrix bloof(identity,3,3);
    return bloof;
}
Matrix Matrix::operator --(){
    std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    Matrix bloof(identity,3,3);
    return bloof;
}
Matrix Matrix::operator ++(){
    std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    Matrix bloof(identity,3,3);
    return bloof;
}
bool Matrix::operator ==(const Matrix &nm) const {
     return false; }
bool Matrix::operator !=(const Matrix &nm) const {
     return false; }
bool Matrix::operator >(const Matrix &nm) const{
                return false;
        }
bool Matrix::operator <(const Matrix &nm) const{
                return false;
        }
bool Matrix::operator <=(const Matrix &nm) const{
                return false;
        }
bool Matrix::operator >=(const Matrix &nm) const{
                return false;
        }
std::ostream &operator <<(std::ostream &out, const Matrix &nm){
                return (out << "hello world");
        }
std::istream &operator >>(std::istream &in, Matrix &nm){
                int nadi = tmp;
                return(in >> nadi);
        }
Matrix operator*(double num, Matrix &nm){
    std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    Matrix bloof(identity,3,3);
        return bloof;
}
}
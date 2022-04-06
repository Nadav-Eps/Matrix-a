#include <iostream>
#include <string.h>
#include <vector>


using namespace std;

namespace zich {
   class Matrix{
      private :
        std::vector<double> identity;
        int row;
        int col;

      public :
   Matrix(std::vector<double> vec,int r,int c) : identity(vec),row(r),col(c)
   {

   }   
   Matrix& operator+();
   Matrix& operator-();
   Matrix operator*(const Matrix &nm);
   Matrix operator*(const double num);

//Binary operators
   Matrix operator+(const Matrix &nm);
   Matrix &operator+=(const Matrix &nm);
   Matrix &operator+=(const double num);
   Matrix &operator*=(const Matrix &nm);
   Matrix &operator*=(const double num);
   Matrix operator-(const Matrix &nm);
   Matrix &operator-=(const Matrix &nm);
   Matrix &operator-=(const double num);

//Operators that increments the object they work on
   Matrix operator --();
   Matrix operator --(int);
   Matrix operator ++();
   Matrix operator ++(int);

   //Cmoparation operators
   bool operator ==(const Matrix& nm)const;
   bool operator !=(const Matrix& nm)const;
   bool operator >(const Matrix& nm)const;
   bool operator <(const Matrix& nm)const;
   bool operator <=(const Matrix& nm)const;
   bool operator >=(const Matrix& nm)const;

   //friends function 
   //multiplication and in&out
   friend ostream& operator <<(ostream& out, const Matrix& nm);
   friend istream& operator >>(istream& in, Matrix& nm);
   friend Matrix operator*(double num, Matrix& nm);

   };
}

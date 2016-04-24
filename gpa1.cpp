#include<iostream>
using namespace std;
// Please write your code, within the "BEGIN-END" blocks given below.
// A "BEGIN-END" block is identified as follows :
//
// "//// BEGIN: Some string DONT_ERASE_xx_yy"
//
//
// "//// END: Some other string DONT_ERASE_xx_yy"
//
// where "xx" is the block number and "yy" is the
// marks allocated for the block
//
// The FIRST block (BLOCK 1 i.e. DONT_ERASE_01_0) carries 0 marks and
// is a placeholder for your personal information, to be written as a comment.
//
// WARNING :
// (1) Do NOT write any cout or cin statements
// (2) Do NOT delete or modify the existing code i.e. main function, comments, blocks, etc.
// (3) Write your code in between BEGIN and END of the respective blocks only
// (4) Do NOT rename the .cpp file

//// ---------------------------------------------------------------------------
//// BEGIN: Fill your details as comments below DONT_ERASE_01_0
//// Name:
////
//// END: Fill your details as comments above DONT_ERASE_01_0
//// ---------------------------------------------------------------------------
long long int SSD323 (long long int n)
{
  long long int temp = n , sum = 0;
  while (temp > 0)
  {
    int r = temp % 10;
    sum += r * r;
    temp /= 10;
  }
  return (sum * 323);
}

int Check (int n)
{
  int pow10 = 10 , temp = n;
  while (temp / pow10 > 0)
  {
    pow10 *= 10;
  }
  int r = n % 10;
  pow10 /= 10;
  n /= 10;
  n += (r * pow10);
  return n;
}

int l2(int n)
{
  int count = 1 , i = 0;
  int A[2];
  while (count <= 2)
  {
    A[i] = n % 10;
    ++i;
    ++count;
    n /= 10;
  }
  return (A[1] * 10 + A[0]);
}

int main() {

    long long int rpm, maxRPM, finalRPM;
    int years = 0;
    cout << "Enter the RPM of harddisk. Value should be inbetween 3524 and 8524, both inclusive \n";
    cin >> rpm;
    maxRPM = rpm * 8;
    cout << "The maximum limit of the RPM is " << maxRPM << endl;

//// ---------------------------------------------------------------------------
//// BEGIN: Write code below  DONT_ERASE_02_10
  while (years <= 10 && rpm <= maxRPM)
  {
    long long int A = SSD323(rpm);
    int B = Check(rpm);
    B = l2(B);
    rpm = A + B;
    years++;
  }
  finalRPM = rpm;


//// END: End of your code DONT_ERASE_02_10
//// ---------------------------------------------------------------------------

    if (years >= 10)
        cout << "The harddisk is not affected with the bug. Tested for " << years << " Years. Final RPM is: " << finalRPM << endl;
    else
        cout << "The harddisk is likely to crash after " << years << " years, with RPM of " << finalRPM << endl;
    return 0;
}

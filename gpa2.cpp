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
//// Name: Aaditya Menon
////
//// END: Fill your details as comments above DONT_ERASE_01_0
//// ---------------------------------------------------------------------------


void getTotalGQ(int numOfStudents, int gq[], int sum_gq[]) {
//// ---------------------------------------------------------------------------
//// BEGIN: Write code below DONT_ERASE_02_02
//// Count number of students scoring x marks in GQ and store in sum_gq
	int i;
	for (i = 0; i < numOfStudents; ++i)
	{
		switch(gq[i])
		{
			case 0 : sum_gq[0]++;break;
			case 1 : sum_gq[1]++;break;
			case 2 : sum_gq[2]++;break;
			case 3 : sum_gq[3]++;break;
			case 4 : sum_gq[4]++;break;
			case 5 : sum_gq[5]++;break;
			case 6 : sum_gq[6]++;break;
			case 7 : sum_gq[7]++;break;
			case 8 : sum_gq[8]++;break;
			case 9 : sum_gq[9]++;break;
			case 10 : sum_gq[10]++;break;
		}
	}

//// END: End of your code DONT_ERASE_02_02
//// ---------------------------------------------------------------------------
}

void getTotalGPA(int numOfStudents, float gpa[], int sum_gpa[]) {
//// ---------------------------------------------------------------------------
//// BEGIN: Write code below DONT_ERASE_03_02
//// Count number of students scoring y marks in GPA and store in sum_gpa
int i;
for (i = 0; i < numOfStudents; ++i)
{
	switch(gpa[i])
	{
		case 0 : sum_gq[0]++;break;
		case 0.3 : sum_gq[1]++;break;
		case 0.6 : sum_gq[2]++;break;
		case 1 : sum_gq[3]++;break;
	}

//// END: End of your code DONT_ERASE_03_02
//// ---------------------------------------------------------------------------
}

void getTotalCount(int numOfStudents, int gq[], float gpa[], int count[][5]) {
//// ---------------------------------------------------------------------------
//// BEGIN: Write code below DONT_ERASE_04_06
//// Count number of students scoring x in GQ, y in GPA, total, and result in count
int i;
for (i = 0; i < numOfStudents; ++i)
{
	if (gpa[i] == 0)
	{
		int j;
		for (j = 0; j < numOfStudents; ++j)
		{
			switch(gq[j])
			{
				case 0 : count[0][0]++;break;
				case 1 : sum_gq[1][0]++;break;
				case 2 : sum_gq[2][0]++;break;
				case 3 : sum_gq[3][0]++;break;
				case 4 : sum_gq[4][0]++;break;
				case 5 : sum_gq[5][0]++;break;
				case 6 : sum_gq[6][0]++;break;
				case 7 : sum_gq[7][0]++;break;
				case 8 : sum_gq[8][0]++;break;
				case 9 : sum_gq[9][0]++;break;
				case 10 : sum_gq[10][0]++;break;
			}
		}
	}
	else if (gpa[i] == 0.3)
	{
		int j;
		for (j = 0; j < numOfStudents; ++j)
		{
			switch(gq[j])
			{
				case 0 : count[0][1]++;break;
				case 1 : sum_gq[1][1]++;break;
				case 2 : sum_gq[2][1]++;break;
				case 3 : sum_gq[3][1]++;break;
				case 4 : sum_gq[4][1]++;break;
				case 5 : sum_gq[5][1]++;break;
				case 6 : sum_gq[6][1]++;break;
				case 7 : sum_gq[7][1]++;break;
				case 8 : sum_gq[8][1]++;break;
				case 9 : sum_gq[9][1]++;break;
				case 10 : sum_gq[10][1]++;break;
			}
		}
	}
	if (gpa[i] == 0.6)
	{
		int j;
		for (j = 0; j < numOfStudents; ++j)
		{
			switch(gq[j])
			{
				case 0 : count[0][2]++;break;
				case 1 : sum_gq[1][2]++;break;
				case 2 : sum_gq[2][2]++;break;
				case 3 : sum_gq[3][2]++;break;
				case 4 : sum_gq[4][2]++;break;
				case 5 : sum_gq[5][2]++;break;
				case 6 : sum_gq[6][2]++;break;
				case 7 : sum_gq[7][2]++;break;
				case 8 : sum_gq[8][2]++;break;
				case 9 : sum_gq[9][2]++;break;
				case 10 : sum_gq[10][2]++;break;
			}
		}
	}
	if (gpa[i] == 1)
	{
		int j;
		for (j = 0; j < numOfStudents; ++j)
		{
			switch(gq[j])
			{
				case 0 : count[0][3]++;break;
				case 1 : sum_gq[1][3]++;break;
				case 2 : sum_gq[2][3]++;break;
				case 3 : sum_gq[3][3]++;break;
				case 4 : sum_gq[4][3]++;break;
				case 5 : sum_gq[5][3]++;break;
				case 6 : sum_gq[6][3]++;break;
				case 7 : sum_gq[7][3]++;break;
				case 8 : sum_gq[8][3]++;break;
				case 9 : sum_gq[9][3]++;break;
				case 10 : sum_gq[10][3]++;break;
			}
		}
	}
}

//// END: End of your code DONT_ERASE_04_06
//// ---------------------------------------------------------------------------
}

int main() {

   int numOfStudents, i, j;
   int roll[250], gq[250], count[12][5], sum_gq[11], sum_gpa[4];
   float gpa[250];
   float mgpa[]={0,0.3,0.6,1};

   cout << "Enter the number of students" << endl;
   cin >> numOfStudents;

   cout << "Enter Roll Number and Marks " << endl;
   for (i = 0; i < numOfStudents; i++ ) {
      cin >> roll[i] >> gq[i] >> gpa[i];
   }

   //Initialize the count matrix i.e. result to 0
   for ( i = 0; i <= 11; i++) {
      for ( j = 0; j <= 4; j++ ) {
         count[i][j] = 0;
      }
   }

   //Initialize sum_gq
   for ( i = 0; i <= 10; i++)
      sum_gq[i] = 0;

   //Initialize sum_gpa
   for ( i = 0; i <= 3; i++)
      sum_gpa[i] = 0;


   getTotalGQ(numOfStudents, gq, sum_gq);

   getTotalGPA(numOfStudents, gpa, sum_gpa);

   getTotalCount(numOfStudents, gq, gpa, count);


   // Display the Number of students who scored 'x' marks in GQ
   cout << "GQ Marks \t Number of Students \numOfStudents";
   for ( i = 0; i <= 10; i++)
      cout << "   " << i << " \t\t\t " << sum_gq[i] << endl;

   // Display the Number of students who scored 'y' marks in GPA
   cout << endl << "GPA Marks \t Number of Students \numOfStudents";
   for ( i = 0; i <= 3; i++)
      cout << "   " << mgpa[i] << " \t\t\t " << sum_gpa[i] << endl;

   // Display the Number of students who scored 'x' in GQ and 'y' in GPA, with total
   cout << "\numOfStudents-------------------------------------------------------\numOfStudents";
   cout << "Marks \t\t   \t  \t  \t  \t GQ\numOfStudents";
   cout << "GQ/GPA \t\t0 \t0.3 \t0.6 \t 1 \tTotal \numOfStudents";
   cout << "-------------------------------------------------------\numOfStudents";

   for (i = 0; i <= 10; i++) {
      cout << "  " << i << "\t\t";
      for(j = 0; j <= 3; j++) {
         cout << count[i][j] << "\t ";
      }
      cout << count[i][j] << endl;
   }

   cout << "-------------------------------------------------------\numOfStudents";
   cout << "GPA Total \t";
   for (i = 0; i <= 3; i++) {
      cout << count[11][i] << "\t";
   }
   cout << numOfStudents << endl;
   cout << "-------------------------------------------------------\numOfStudents";

   return 0;
}

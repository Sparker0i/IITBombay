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


int comparator(int audience[][2],int index1, int index2)
{
////-----------------------------------------------------------------------
//// BEGIN: write your code to compare the ecodes of index1 and index2  DONT_ERASE_02_02
    int ec1 = 1 , ec2 = 1;
    int i = 1;
    while (i <= audience[index1][1])
    {
      ++i;
      ec1 *= audience[index1][0];
    }
    ec1 %= 100;
    i = 1;
    while (i <= audience[index2][1])
    {
      ++i;
      ec2 *= audience[index2][0];
    }
    ec2 %= 100;
    if (ec1 > ec2)
      return -1;
    else if (ec1 == ec2)
      return 0;
    else
      return 1;
}

////END: end of your code DONT_ERASE_02_02
////------------------------------------------------------------------------
}

void sorting(int audience[][2],int N, int &i_index, int &j_index)
{
////-----------------------------------------------------------------------
//// BEGIN: write your code to find index i and index j  DONT_ERASE_03_04
//// Hint: Use the comparator function
    for ( ; *i_index < N - 1; ++(*i_index))
    {
      if (comparator(audience,*i_index,*i_index + 1) < 0)
        break;
    }
    for ( ; *j_index > 0; --(*j_index))
    {
      if (comparator(audience,*j_index,*j_index - 1) < 0)
        break;
    }
    int i , j;
    for (i = *i_index ; i < ( *j_index - 1 ); i++)
    {
      for (j = *i_index ; j < N - i - 1; j++)
      {
        if (comparator(audience , i , i + 1) < 0) /* For decreasing order use < */
        {
          int swap[2];
          swap       = audience[j];
          audience[j]   = audience[j + 1];
          audience[j + 1] = swap;
        }
      }
    }

////END: end of your code DONT_ERASE_03_04
////------------------------------------------------------------------------
}

void merge(int audience[][2], int mergedarray[][2],int N, int i_index , int j_index)
{
////----------------------------------------------------------------------------
//// BEGIN: write your code to merge DONT_ERASE_04_04
    int i , j;
    for (i = 0; i <= i_index; ++i)
    {
      mergedarray[i] = audience[i];
    }
    for (j = N - 1; j >= j_index; ++j)
    {
      mergedarray[j] = audience[j];
    }
    j = i + j - 2;
    for (i = i_index + 1; i < j_index; ++i,++j)
    {
      mergedarray[j] = audience[i];
    }

////END: end of your code DONT_ERASE_04_04
////---------------------------------------------------------------------------------
}

int main()
{
    int audience[100][2],mergedmarks[100][2];
    int i,N;
    int index1=0,index2=0;
    int comp_result;
    cout<<"Enter the value of N : ";
    cin >> N;    // Enter size of the table
    cout<<"Enter the base and exponent for " << N << "rows " << endl;

    for(i=0;i<N;i++)
        cin >> audience[i][0] >> audience[i][1];    //Enter numbers in the table

    cout << endl << "Checking Function 1: Compare ecodes for 5 index pairs" << endl;
    for(i = 0;i<5;i++)
    {
        cout <<"\nEnter indices of row1 and row2 that you want to compare: ";
        cin >> index1 >> index2;
        if (index1 < 0 || index2 <0 || index1 >=N || index2 >=N)
            continue;
        comp_result = comparator(audience,index1,index2);

        if(comp_result==-1)
            cout << "ecode of index 1 is greater than ecode of index2" <<endl;
        else if(comp_result==1)
            cout << "ecode of index 1 is less than ecode of index2" <<endl;
        else if(comp_result==0)
            cout << "ecode of index 1 is equal to ecode of index2" <<endl;
    }
    cout << endl;
    int index_i=0, index_j=N;
    sorting(audience, N, index_i, index_j);

    cout << "Checking Function 2: Printing sorted array "<<endl;
    for(i=0; i<N; i++)
                cout << audience[i][0] << " "<<audience[i][1]<<endl;
    cout << endl;

    cout << "index i: "<< index_i <<"\nindex j: " << index_j<<endl;


    cout << endl << "Checking Function 3: Printing Merged Array "<<endl;
    merge(audience , mergedmarks ,N, index_i, index_j);
    int merge_array_size = index_i + (N-(index_j+1));
    for(i=0; i<N; i++)
                cout << mergedmarks[i][0] << " "<<mergedmarks[i][1]<<endl;
    cout << endl;
    return 0;
}

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


int comparator(int audience[][2],int index1, int index2)
{
////-----------------------------------------------------------------------
//// BEGIN: write your code to compare the ecodes of index1 and index2  DONT_ERASE_02_02
    
    
////END: end of your code DONT_ERASE_02_02
////------------------------------------------------------------------------
}

void sorting(int audience[][2],int N, int &i_index, int &j_index)
{
////-----------------------------------------------------------------------
//// BEGIN: write your code to find index i and index j  DONT_ERASE_03_04
//// Hint: Use the comparator function


////END: end of your code DONT_ERASE_03_04
////------------------------------------------------------------------------
}

void merge(int audience[][2], int mergedarray[][2],int N, int i_index , int j_index)
{
////----------------------------------------------------------------------------
//// BEGIN: write your code to merge DONT_ERASE_04_04

    
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


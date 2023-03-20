#include <iostream>
#include <iomanip>

/*LAB ASSIGNMENT ASTU*/
/*WRITTEN BY BEALPRASIM*/
using namespace std;
int row, column, row2, column2; // global variables to pass into different funtions

void subtraction();
void transpose();

/*multiplies two matrices */
void multiplication(){
  int i,j,k;
  int product[row][column2];
  
  int mat1[row][column]={0};
  int mat2[row2][column2]={0};
  cout<<"Enter integer elements for the first matrix: "<<endl;
  for(int rowcount=0;rowcount<row;rowcount++){
    for(int xx=0;xx<column;xx++)
      cin>>mat1[rowcount][xx];
    }
  cout<<"Enter elements for the second matrix:"<<endl;
  for(int cn=0;cn<row;cn++){
    for(int ll=0;ll<column;ll++)
      cin>>mat2[cn][ll];
  }
  cout<<"THE PRODUCT OF THE TWO MATRICES IS \n";

  for(int aa=0;aa<row;aa++){                         /*MULTIPLICATION OF THE TWO MATRICES*/
    for(int bb=0;bb<column2;bb++)
      product[aa][bb]=mat1[aa][0]*mat2[bb][0]+mat1[aa][1]*mat2[1][bb];
  }
  
  for(int c=0;c<row;c++){                               /*OUTPUTS THE RESULT(PRODUCT OF MATRIX)*/
    for(int d=0;d<column2;d++)
      cout<<product[c][d]<<" ";
    cout<<endl;
  }
}

/*MATRIX ADDING FUNCTION*/
void addition(){
 
  int sum[row][column];
  int mat1[row][column], mat2[row2][column2];
  
  if(row==row2 && column==column2){
    
  cout<<"ENTER ElEMENTS OF THE FIRST MATRIX"<<endl;
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++)
      cin>>mat1[i][j];
  }
  cout<<"ENTER ELEMENTS FOR THE SECOND ELEMENT"<<endl;
  for(int m=0;m<row2;m++){
    for(int n=0;n<column2;n++)
      cin>>mat2[m][n];
  }
    
    for(int i=0;i<row;i++){
      for(int j=0;j<column;j++)
	sum[i][j] = mat1[i][j]+mat2[i][j];
    }

  for(int k=0;k<row;k++){
    for(int p=0;p<column;p++)
      cout<<sum[k][p]<<" ";
    cout<<endl;
}
    
  }
  else
    cout<<"Row and column mismatch"<<endl;
}

/********************************************************************************************************/

int main(){
  int choice;

  do{
    
    cout<<"Choose what operation you would like to perform with your matrices "<<endl
	<<"Enter '1' for addition \n"<<"Enter '2' for subtraction \n"<<"Enter '3' for multiplication \n"<<"Enter '4' for transpose of a matrix\n"
	<<"Enter '0' to exit program \n";
    cin>>choice;
    cout<<"Enter row and column for the first matrix \n";
    cin>>row>>column;

    switch(choice){
    case 1:
      cout<<"Enter row and column for the second matrix: ";
      cin>>row2>>column2;
      addition();
      break;
    case 2:
      cout<<"Enter row and column for the second matrix: ";
      cin>>row2>>column2;
      subtraction();
      break;
    case 3:
      cout<<"ENTER ROW AND COLUMN FOR THE SECOND MATRIX: ";
      cin>>row2>>column2;
      if(row2==column)
	multiplication();
      else
	cout<<"------------------------------------MATRIX ORDER MISMATCH-----------------------------------------------------"<<endl;
      break;
    case 4:
      transpose();
      break;
    default:
      break;
    }
  }while(choice!=0);
  
  return 0;
}

/*MATRIX SUBTRACTING FUNCTION RESTURNS NOTHING*/
void subtraction(){
  int diff[row][column],mat1[row][column],mat2[row2][column2];
  
  cout<<"ENTER ElEMENTS OF THE FIRST MATRIX"<<endl;
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++)
      cin>>mat1[i][j];
  }
  cout<<"ENTER ELEMENTS FOR THE SECOND ELEMENT"<<endl;
  for(int m=0;m<row2;m++){
    for(int n=0;n<column2;n++)
      cin>>mat2[m][n];
  }
  if(row==row2 && column==column2){
    for(int i=0;i<row;i++){
      for(int j=0;j<column;j++)
	diff[i][j] = mat1[i][j]-mat2[i][j];
    }

     for(int k=0;k<row;k++){
       for(int p=0;p<column;p++)
	 cout<<diff[k][p]<<" ";
       cout<<endl;
}

  }
  else
    cout<<"Row and column mismatch"<<endl;
}

/*TRANSPOSE OF A MATRIX FUNCTION*/
void transpose(){     
  int matrix[row][column],tpose[column][row];
  cout<<"ENTER THE ELEMENTS FOR THE MATRIX:"<<endl;
  
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++)
      cin>>matrix[i][j];
  }

  for(int k=0;k<column;k++){
    for(int l=0;l<row;l++)
      tpose[k][l]=matrix[l][k];
  }
  cout<<"TRANSPOSE OF THE MATRIX IS: \n";

  for(int a=0;a<column;a++){
    for(int b=0;b<row;b++)
      cout<<tpose[a][b]<<" ";
    cout<<endl;
  }
}

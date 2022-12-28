
void product(){
  /* int row,column,column1,row1;
  cout<<"Enter row and column for the two matrices: ";
  cin>>row>>column>>row1>>column1;
  */
  
  int mat1[row][column]={0};
  int mat2[row2][column2]={0};
  int product[row][column2] ={ 0};
  cout<<"Enter elements for the first matrix: ";
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++)
      cin>>mat1[i][j];
  }
  cout<<"Enter elements for the second matrix: ";
  for(int k=0;k<row2;k++){
    for(int l=0;l<column2;l++)
      cin>>mat2[k][l];
  }
  
  if(row2==column){
    for(int a=0;a<row;a++){
      for(int b=0;b<column2;b++)
	product[a][b]=(mat1[a][0]*mat2[0][b])+(mat1[a][1]*mat2[1][b]);
    }
  }
  else
    cout<<"Matrix order mismatch! \n";
  for(int c=0;c<row;c++){
    for(int d=0;d<column2;d++)
      cout<<product[c][d]<<" ";
    cout<<endl;
  }
  return 0;
}

    

    

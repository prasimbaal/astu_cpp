int loop_rand(){
  int number;
  srand(time(0));
  for(int i=0;i<1;i++){
    number=rand()%10;
    return number;
  }
}

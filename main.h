using namespace std;
void triangle_check(int beta,int alpha,int theta)
{
  const int sum = beta+alpha+theta;
  switch(sum){
  case sum==180:
    cout<<"is a valid triangle "<<endl;
    break;
  default:
    cout<<"Not a valid triangle "<<endl;
  }
}

  
void vowel_check(char x)
{
  switch(x)
    {
    case'a':case'A':
      cout<<"Is a vowel"<<endl;
      break;
    case'e':case'E':
      cout<<"is a vowel"<<endl;
      break;
    case'i':case'I':
      cout<<"Is a vowel"<<endl;
      break;
    case'o':case'O':
      cout<<"is vowel"<<endl;
      break;
    case'u':case'U':
      cout<<"Is a vowel"<<endl;
      break;
    default:
      cout<<"IS a consanant"<<endl;
    }
}

      

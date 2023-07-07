#include <iostream>
using namespace std;

int main() {
    const int size=10;
    int num[size];
    double sum_positive = 0;
    int total_positive = 0;
    double average;
    
  for(int i=0;i < size;i++ ){
      cout<<"Input number: ";
      cin >>num[i];
  }
  
  for(int i=0; i < size; i++){
      if(num[i] > 0){
          sum_positive+=num[i];
          total_positive++;
      }else {
          num[i];
      }
  }
   
    cout<<"The sum of positive numbers is "<<sum_positive<<endl;
    cout<<"The total positive numbers is "<<total_positive<<endl;
 
   average=sum_positive/total_positive;
   
   cout <<"The average is "<<average;
  
  
    return 0;
}

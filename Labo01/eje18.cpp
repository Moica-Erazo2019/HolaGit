#include <iostream>

using namespace std;
    const int fil=5;
    const int col=5;
int main(){
  
       int matrix[fil][col];
       
       
      
       for(int k=0;k<fil; k++){
           for(int j=0; j<col; j++){
               
               cout<<"digite numero["<<k<<"]["<<j<<"]:";
               cin>>matrix[k][j];
           }
       }
       for(int k=0;k<fil;k++){
           for(int j=0;j<col;j++){
               if(k>j){
               matrix[k][j]=0;
               }else{
                   
               matrix[k][j]= matrix[k][j] %10;
               
               }
               
           }
       }
       for(int k=0;k<fil; k++){
           for(int j=0;j<col;j++){
               cout<<matrix[k][j]<< "  ";
               }cout<<endl;
            
               
           }

    return 0;
}

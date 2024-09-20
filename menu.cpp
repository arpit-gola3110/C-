#include <bits/stdc++.h>
using namespace std;
int main(){
    while (true){
        cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<"----------------WELCOME TO THE MENU-----------------"<<endl;
        cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<"1.TO FIND WETHER THE NUMBER IS ODD OR EVEN:"<<endl;
        cout<<"2.TO FIND WETHER THE LETTER IS A VOWEL OR CONSONANT:"<<endl;
        cout<<"3.TO FIND WETHER THE NUMBER IS A MULTIPLE OF 5:"<<endl;
        cout<<"4.TO PRINT NUMBERS TILL 100 EXCEPT MULTIPLE OF 4:"<<endl;
        cout<<"5.TO EXIT THE MENU:"<<endl;

        int choice;
        cout<<"ENTER YOUR CHOICE:";
        cin>>choice;

        if(choice==1){
            int num;
            cout<<"ENTER THE NUMBER:";
            cin>>num;

            if (num%2==0){
                cout<<"NUMBER IS EVEN"<<endl;


            } else {
                cout<<"NUMBER IS ODD"<<endl;
            }
            
            }
        
        if(choice==2){
            char alphabet;
            cout<<"ENTER YOUR ALPHABET:";
            cin>>alphabet;

            if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u'){
                cout<<"vowel"<<endl;

            } else {
                cout<<"consonats"<<endl;
            }
            
            }

        if (choice==3){
            int num;
            cout<<"ENTER YOUR NUMBER:";
            cin>>num;

            if(num%5==0){
                cout<<"YOUR NUMBER IS THE MULTIPLE OF 5"<<endl;
            } else {
                cout<<"YOUR NUMBER IS NOT A MULTIPLE OF 5 "<<endl;
            }
        }
        
        if(choice==4){
            int i = 1;
            for (i=1;i<=100;i++)

            {
                if(i%4==0){
                    continue;
                }
            cout<<i<<endl;
            }

        }

        if(choice==5){
            cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<"--------THANK YOU FOR USING THE MENU------"<<endl;
            cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
            break;
        
        }
         
        if(choice>5){
            cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
            cout<<"--------PLEASE ENTER VALID CHOICE---------"<<endl;
            cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
        }
         


    }    
      
   
      

    }
    
    


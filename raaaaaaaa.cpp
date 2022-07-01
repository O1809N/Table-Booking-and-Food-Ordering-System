#include<iostream>
using namespace std;
int main()
{
       int a,i;
       int sum=0,sum2=0,seat[100];
       cout<<"\n\t———————————————————\n";
       cout<<"\tW E L C O M E  T O"<<endl;
       cout<<"\t\t\t    C O R N   H U B       "<<endl<<endl;
       cout<<"\t ** A leg piece that will please your soul **";
       cout<<"\n\t———————————————————\n"<<endl;
       cout<<"\t B OO K I N G  S Y S T E M\n";
       cout<<"\t———————————————————\n";
       cout<<"\nPlease Enter the no. of people:\n";
       cin>>a;
       
       cout<<"\n\n======================================\n";
       cout<<"Are you ready to have great experience: (y/n) "<<endl;
       char dec;
       cin>>dec;
       cout<<endl;
       if(dec=='y')
       {
            cout<<"Here You GO with our delicious Menu Card:"<<endl<<endl;
            cout<<" 1|  Chiken popcorn  (150/-) \n  2| Chiken Nachos  (270/-) \n 3|  Chiken peri-peri Pizza "
            "(300/-)  \n  4| Shawrma  (100/-)  \n 5|  Chiken tikka  (150/-)	\n  6| Chiken lolipop	(120/-) \n 7|"
            "  Egg Rolls	(65/-)	\n  8| Chiken leg piece	(300/-)         [Bestseller]	"<<endl<<endl;
            int cho=0,n=1,newsum=0;
            char yan;
            while(n!=0){
                cout<<"Please Enter Your Choice: ";
                cin>>cho;
                if(cho==1)
                {
                    int it;
                    cout<<"How many items do you want to add: ";
                    cin>>it;
                    cout<<endl<<"Great Choice "<<it<<" Chicken Popcorn is added to your cart:";
                    cout<<"\n\n======================================\n"<<endl;
                    newsum=(sum+sum2+newsum)+(150*it);
                    cout<<"Your Total Amount : "<<newsum<<endl<<endl;  
                }
                else if(cho==2)
                {
                    int t;
                    cout<<"How many items you want to add: ";
                    cin>>t;
                    cout<<endl<<"Great Choice "<<t<<" Chicken Nachos is added to your cart:"<<endl;
                    cout<<"\n\n======================================\n"<<endl;
                    newsum=(sum+sum2+newsum)+(270*t);
                    cout<<"Your Total Amount : "<<newsum<<endl<<endl;   
                }
                else if(cho==3)
                {
                    int o;
                    cout<<"How many items you want to add: ";
                    cin>>o;
                    cout<<endl<<"Great Choice "<<o<<" Chicken peri-peri Pizza is added to your cart:";
                    cout<<"\n\n======================================\n"<<endl;
                    newsum=(sum+sum2+newsum)+(300*o);
                    cout<<"Your Total Amount : "<<newsum<<endl<<endl;
                }
                else if(cho==4)
                {
                    int p;
                    cout<<"How many items you want to add: ";
                    cin>>p;
                    cout<<endl<<"Great Choice "<<p<<" Shawrma is added to your cart:";
                    cout<<"\n\n======================================\n"<<endl;
                    newsum=(sum+sum2+newsum)+(100*p);
                    cout<<"Your Total Amount : "<<newsum<<endl<<endl;  
                }
                else if(cho==5)
                {
                    int u;
                    cout<<"How many items you want to add: ";
                    cin>>u;
                    cout<<endl<<"Great Choice "<< u <<" Chicken tikka is added to your cart:";
                    cout<<"\n\n======================================\n"<<endl;
                    newsum=(sum+sum2+newsum)+(150*u);
                    cout<<"Your Total Amount : "<<newsum<<endl<<endl; 
                }
                else if(cho==6)
                {
                    int u;
                    cout<<"How many items you want to add: ";
                    cin>>u;
                    cout<<endl<<"Great Choice "<< u <<" Chicken lolipop is added to your cart:";
                    cout<<"\n\n======================================\n"<<endl;
                    newsum=(sum+sum2+newsum)+(120*u);
                    cout<<"Your Total Amount : "<<newsum<<endl<<endl; 
                }
                else if(cho==7)
                {
                    int u;
                    cout<<"How many items you want to add: ";
                    cin>>u;
                    cout<<endl<<"Great Choice "<< u <<" Egg Rolls is added to your cart:";
                    cout<<"\n\n======================================\n"<<endl;
                    newsum=(sum+sum2+newsum)+(65*u);
                    cout<<"Your Total Amount : "<<newsum<<endl<<endl; 
                }
                else if(cho==8)
                {
                    int u;
                    cout<<"How many items you want to add: ";
                    cin>>u;
                    cout<<endl<<"Great Choice "<< u <<" Chicken Leg Piece  is added to your cart:";
                    cout<<"\n\n======================================\n"<<endl;
                    newsum=(sum+sum2+newsum)+(300*u);
                    cout<<"Your Total Amount : "<<newsum<<endl<<endl; 
                }
                else
                {
                    cout<<"Wrong Choice:";
                    cout<<"\n\n======================================\n"<<endl;
                    newsum=(sum+sum2+newsum);
                    cout<<"Your Total Amount : "<<newsum<<endl<<endl;
                }
                cout<<"want to add something else to eat?? (y/n):";
                cin>>yan;
                if(yan=='y')
                {
                    n++;
                }
                else if(yan=='n')
				{
                    n=0;
                   cout<<"'Tussi ja rahe ho? Tussi na jao!'";
                }
            }
            
       }
       else if(dec=='n')
       {
           cout<<" 'Tussi ja rahe ho? Tussi na jao!'";
           cout<<"\n\n======================================\n"<<endl;
           cout<<"Your Total Amount : "<<sum+sum2<<endl<<endl;
           cout<<"  -: Thanks for Visit :-  ";   
       }
       else
       {
           cout<<"Wrong Choice:";
           cout<<"\n\n======================================\n"<<endl;
           cout<<"Your Total Amount : "<<sum+sum2<<endl<<endl;
           cout<<"  -: Thanks for Visit :-  "; 
       }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    float a;
    float marks[3][10]={{80,65,42,10,100,198,76,56,15,100},
    {75,-100,98,60,80,85,14,50,65,80},
    {125,-85,100,80,190,65,72,34,15,200}};

    for (int i=0; i<3 ;++i){
            for (int j=0; j<10 ;++j){
                    a=marks[i][j];
                    while (a>100 || a<0){
                    cout<<"Enter valid marks for ["<<i<<"]["<<j<<"] = ";
                    cin>>a;
                    marks[i][j]=a;}
                    if (a>=81 && a<=100){
                            marks[i][j]=4.0;
                            cout<<marks[i][j]<<"\t";
                            continue;
                    }
                    else if (a>=66 && a<=80){
                            marks[i][j]=3.5;
                            cout<<marks[i][j]<<"\t";
                            continue;
                    }
                    else if (a>=46 && a<=65){
                            marks[i][j]=2.75;
                            cout<<marks[i][j]<<"\t";
                            continue;
                    }
                    else {
                            marks[i][j]=2.5;
                            cout<<marks[i][j]<<"\t";
                            continue;
                }
            }
            }

return 0;
}

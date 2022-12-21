#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */
/*branch name
*
*
*
*/
//prototype


int getindexnu();

void getarraynu(int b[], int &indexnu);

float mean(int b[], int indexnu);

void bubblesort(int b[], int indexnu);

void middle(int b[], int indexnu);

int max(int b[],int indexnu);

void mod(int b[], int indexnu, int max1);




//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

    //Declar variable for get number of index array
    int n;

    n = getindexnu();

    //Seperatpr
    cout<<endl<<endl<<"------------------------------"<<endl<<endl;

        //Declar Array
    int a[n];

    //Get number of array
    getarraynu(a,n);

        //Seperatpr
    cout<<endl<<endl<<"------------------------------"<<endl<<endl;

    cout<<fixed<<setprecision(4);

    cout<<"Avarage of number of array = "<<mean(a,n);

            //Seperatpr
    cout<<endl<<endl<<"------------------------------"<<endl<<endl;


//Sort array
    bubblesort(a,n);

//Seperatpr
    cout<<endl<<endl<<"------------------------------"<<endl<<endl;

//find middle array
middle(a,n);

//Seperatpr
    cout<<endl<<endl<<"------------------------------"<<endl<<endl;

//find maximum number

int max2=max(a,n);

cout<<"Max of number = "<<max(a,n);

//Seperatpr
    cout<<endl<<endl<<"------------------------------"<<endl<<endl;

    mod(a,n,max2);
    
getch();
}
//function variable
//--------------------------
//functions


//Function for get number of index array

int getindexnu()
{
    int indexnu;

    cout<<"Enter number of index array = ";
    cin>>indexnu;

    return indexnu;

}

//---------------------------------------------

//Function for get array number 

void getarraynu(int b[], int &indexnu)
{

for(int i=0; i<indexnu; ++i)
{
    cout<<"["<<i<<"] = ";
    cin>>b[i];
    cout<<endl;
}

}

//-----------------------------------------

//Function for calculate avg

float mean(int b[], int indexnu)
{

    float avg = 0;
    float sum = 0;

    for(int j=0; j<indexnu; ++j)
    {
        sum = sum + b[j];
    }

    avg = sum/indexnu;

    return avg;

}


//-------------------------------------------

//Function for sert with bubble sort and show array

void bubblesort(int b[], int indexnu)
{

//Sort array

    for(int j=0; j<indexnu; ++j)
    {

    for (int i=0; i<indexnu; ++i)
    {

        int temp=0;
        if(b[i] > b[i+1])
        {

            temp = b[i + 1];
            b[i + 1] = b[i];
            b[i] = temp;

        }
    }
    }

//Show array sort

    for(int k=0; k<indexnu; ++k)
    {
        cout<<"["<<k<<"] = "<<b[k]<<endl;
    }


}

//------------------------------------------------

//Function for middle of array

void middle(int b[], int indexnu)
{
    
    cout<<"Enter middle of array = "<<b[indexnu/2];
}

//------------------------------------------------
//Function for find max of array
int max(int b[],int indexnu)
{
    int max1=b[0];
    for(int i=1; i<indexnu; ++i)
    {
        if (b[0]<b[i])
        max1 = b[i];

    }

    return max1;
}


//-------------------------------------------------

//Function for find mod

void mod(int b[], int indexnu, int max1)
{


//Array for putting up value  

int c[(max1+1)] = {0};

//Loop for putting of repeat

for(int i=0; i<=max1; ++i) 
{

    for(int j=0; j<indexnu; ++j)
    {
        if(i == b[j])
        {
        ++c[i];
        }
    }

}
 

for(int m=0; m<=max1; ++m)
{

    cout<<"["<<m<<"] = "<<c[m]<<endl;
}
 //Find max of repeat

 int max3 = c[0];

 for(int k=1; k<=max1; ++k)
 {

    if(c[k] > max3)
    max3 = c[k];

 }

 //Seperatpr
    cout<<endl<<endl<<"------------------------------"<<endl<<endl;


//Show max of repeat

 cout<<" Mod of array = "<<max3;

for(int m=0; m<=max1; ++m)
{

    if (max3 == c[m])
    cout<<endl<<"Index of array = "<<m;
}



}


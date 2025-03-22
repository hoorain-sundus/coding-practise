 #include <iostream>  
 #include<algorithm>
 using namespace std;  


// //----------------- LINEAR SEARCH ------------------------


//  void linearSearch(int myNumbers[10], int value) {

// // bool flag = false;
// //  for (int i = 0; i < 10; i++) { 
  
// //   if(value == myNumbers[i]){
  	
// //     cout<< "Value found at index " << i<<"\n"; 
// //     flag = true;
// //   }
// //   } 
  
// //  if(!flag){
// //   cout << "Value not found";
// //  }
 
// // }

// // int main() {  
// //   int myNumbers[10] = {20, 10, 30, 40,50 , 70, 80,60, 90, 100}; 
// //   int val =60;
  
 
// //  linearSearch(myNumbers, val);
// //   return 0;


// //  }






// // ---------------------- BINEARY SEARCH ----------------------------------


// int binarySearch(int arr[],int n,int key){
//     int s = 0;
//     int e = n - 1;

//     while(s<=e){
//          int mid = (s+e)/2;

//          if(arr[mid]==key){
//           return mid;
//          }
//          else if(arr[mid]<key){
//           s = mid+1;
//          }
//          else{
//           e = mid-1;
//          }
//     }
//          return -1;
// }



// int main(){

//  int arr[] = {1,3,4,6,7,8,10,11,13};
//  int n = sizeof(arr) /sizeof(arr[0]); 
  
//   int key = 6;
   
//    cout << "value fount at index " << binarySearch(arr,n,key);

//    return 0;
// }

// // ---------------------- BINEARY SEARCH ----------------------------------


// int binarySearch(int arr[],int n,int key){
//     int s = 0;
//     int e = n - 1;

//     while(s<=e){
//          int mid = (s+e)/2;

//          if(arr[mid]==key){
//           return mid;
//          }
//          else if(arr[mid]<key){
//           s = mid+1;
//          }
//          else{
//           e = mid-1;
//          }
//     }
//          return -1;
// }



// int main(){

//  int arr[] = {1,3,4,6,7,8,10,11,13};
//  int n = sizeof(arr) /sizeof(arr[0]); 
  
//   int key = 6;
   
//    cout << "value fount at index " << binarySearch(arr,n,key);

//    return 0;
// }

// ---------------------- BINEARY SEARCH WITH FIXED SIZE INPUT ----------------------------------


// int binarySearch(int arr[],int n,int key){
//     int s = 0;
//     int e = n - 1;

//     while(s<=e){
//          int mid = (s+e)/2;

//          if(arr[mid]==key){
//           return mid;
//          }
//          else if(arr[mid]<key){
//           s = mid+1;
//          }
//          else{
//           e = mid-1;
//          }
//     }
//          return -1;
// }



// int main()

//  int arr[5];
//  for (int i = 0; i < 5; i++)
//  {
//      cout<< "Input value for array: ";
//  cin>> arr[i];
     
//  }
 

//  int key;
//  cout<< "Value to find: ";
//  cin>> key;

//  int n = sizeof(arr) /sizeof(arr[0]); 
  
  
   
//    cout << "value fount at index " << binarySearch(arr,n,key);

//    return 0;
// }

// ---------------------- BINEARY SEARCH WITH DYNAMIC INPUT ----------------------------------


// int binarySearch(int arr[],int n,int key){
//     int s = 0;
//     int e = n - 1;

//     while(s<=e){
//          int mid = (s+e)/2;

//          if(arr[mid]==key){
//           return mid;
//          }
//          else if(arr[mid]<key){
//           s = mid+1;
//          }
//          else{
//           e = mid-1;
//          }
//     }
//          return -1;
// }



// int main(){

//      int n;
//      cout<< "Input size of array: ";
//  cin>> n;

//  int arr[n];
//  for (int i = 0; i < n; i++)
//  {
//      cout<< "Input value for array: ";
//  cin>> arr[i];
     
//  }
 

//  int key;
//  cout<< "Value to find: ";
//  cin>> key;

 
  
  
   
//    cout << "value fount at index " << binarySearch(arr,n,key);

//    return 0;
// }

// Testing github

// second testing

//----------------------FUNCTION TO FIND SQUARE OF A NUMBER --------------------------

// int Square(int number, int square){

//     square = number*number;
//     return square;
// }

// int main(){
      
//       int number;
//       cout << "Enter a number: ";
//       cin>> number;

//       int square;

//       cout << "Square of a number is: " << Square(number,square);

//       return 0;
// }


//----------------------------- Function that checks if a given number is even or odd -------------------------

// void OddorEven(int number){
//       if (number % 2 == 0)
//       {
//         cout << number << " is even number";
//       }
//       else{
//         cout << number << " is odd number";


//       }
      
// }

// int main(){

//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
    
//     OddorEven(number);
    
// }


//------------------------- Function to find the maximum of two numbers --------------------------------------

// void Maximum(int num1,int num2){

//     if (num1<num2)
//     {
//         cout << num2 << " is largest number" ;
//     }
    
//     else{
//         cout << num1 << " is largest number" ;
//     }
// }

// int main(){

//     int num1,num2;
//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter second number: ";
//     cin >> num2;

//     Maximum(num1,num2);
// }


//--------------------------------  Function to calculate the factorial of a number -----------------------------------

// int Factorial(int number,int fact,int i){
//     fact = 1;
//     for ( i = 1; i <= number; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }


// int main(){

//     int number;
//     cout << "Input a Positive integer: ";
//     cin>>number;
//     int fact,i;

//     cout<<"Factorial of a number is: "<<Factorial(number,fact,i);
// }

//---------------------------------  Function that returns the sum of all elements in an array ---------------------------------------------

// int Sum(int arr[], int n) {
//     int sum = 0; 
//     for (int i = 0; i < n; i++) {
//         sum += arr[i]; 
//     }
//     return sum;
// }

// int main(){
//       int n,sum;
//      cout<< "Input size of array: ";
//  cin>> n;

//  int arr[n];
//  for (int i = 0; i < n; i++)
//  {
//      cout<< "Input value for array: ";
//   cin>> arr[i];

//   }
//   cout << " Sum is: "<<Sum(arr,n);
//  }


//------------------------------  function to reverse a given integer number (e.g., 123 becomes 321) --------------------------

// void Reverse(int num){
//       string   num2 = to_string(num);
//     for (int i = num2.length()-1; i >= 0; i--)
//     {
//         cout << num2[i];
//     }
    
// }

// int main(){

//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     Reverse(num);
// }

//------------------------------ Function to check if a number is prime or not --------------------------------

// int IsPrime(int number){
//     if (number==2)
//     {
//         return true;
//     }

//     for (int i = 2; i < number; i++ ){
//         if( number % i ==0){
//             return false;
//         }
        
//     } 
//     return true;

    
// }

// int main(){
    
//     int number ;
//     cout << "Enter a number: ";
//     cin>> number;

//    cout << IsPrime(number);
// }


//------------------------------- Character Count --------------------------------------


// int characterCount(string name, char letter,int count = 0 ){
       
    

//     for (int i = 0; i < name.length(); i++)
//     {
//         if (letter == name[i])
//         {
//             count++;
//         }
        
//     }
//     return count;
// }

// int main(){
//     string name;
//     cout << "Enter a name: ";
//     cin >> name;

//     char letter;
//     cout << "Enter a character: ";
//     cin >> letter;

//     cout << characterCount(name,letter);
    

// }


//----------------------------- Character Count ----------------------------------

// int characterCount(string name, char letter){
//     int count =0;
//     for(int i =0; i < name.length() ; i++){
//         if(letter ==name[i]){
//             count++;
//         }
//     }
//     return count;
    
// }

// int main() {

//   string name = "banana";
//   char letter = 'a';
  
//   cout << characterCount(name,letter);
    
//    return 0;
// }


//--------------------------------  Function to calculate the factorial of a number -----------------------------------

// int Factorial(int number,int fact,int i){
//     fact = 1;
//     for ( i = 1; i <= number; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }


// int main(){

//     int number;
//     cout << "Input a Positive integer: ";
//     cin>>number;
//     int fact,i;

//     cout<<"Factorial of a number is: "<<Factorial(number,fact,i);
// }


// ------------------------------ LOOP ------------------------------


    //TO SOLVE:
// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

    // for (int i = 1; i <= 5; ++i)
    // {
    //     for (int j = 1; j <= i; ++j)
    //     {

    //         cout << i <<" ";
    //     }
    //     cout << "\n";
    // }

    
    //TO SOLVE:
// *
// * *
// * * *
// * * * *
// * * * * *

    // for (int i = 1; i <= 5; ++i)
    // {
    //     for (int j = 1; j <= i; ++j)
    //     {

    //         cout << "*" <<" ";
    //     }
    //     cout << "\n";
    // }


    //TO SOLVE:
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *



//     for (int i = 1; i <=4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
            
//             cout << " 1";
//         }
//         cout<< "\n";
        
//     }
//     for (int i = 4; i >= 1; i--)
//     {
//         for (int j = 1; j <= i ; j++)
//         {  
//             cout<< " *";
//         }
//         cout<< "\n";
    
    
    
    
// }


    //TO SOLVE:
// 1 2 3 4 5  
// 1 2 3 4
// 1 2 3
// 1 2
// 1

    // for (int i = 5; i >=1; --i)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
            
    //         cout <<  j <<" ";
    //     }

    //   cout << " \n";}
    
    
    //TO SOLVE:
 // 1 
 // 1 2
 // 1 2 3
 // 1 2 3 4
 // 1 2 3 4 5


    // for (int i = 1; i <=5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
             
    //         cout <<  j <<" ";
    //     }

    //   cout << " \n";
    
    // }


   

// TO SOLVE:
// 5 4 3 2 1 
// 5 4 3 2
// 5 4 3
// 5 4
// 5
    // for (int i = 1; i <=5; i++)
    // {
    //     for (int j = 5; j >=i; j--)
    //     {
    
    
    //         cout <<  j <<" ";
            
    //     }

    //   cout << "\n";
    //   }


//TO SOLVE:
//     1
//    1 1
//   1 1 1
//  1 1 1 1
// 1 1 1 1 1
//  1 1 1 1
//   1 1 1
//    1 1
//     1



//     for (int i = 1; i <=4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
            
//             cout << " 1";
//         }
//         cout<< "\n";
        
//     }
//     for (int i = 4; i >= 1; i--)
//     {
//         for (int j = 1; j <= i ; j++)
//         {  
//             cout<< " 1";
//         }
//         cout<< "\n";
    
    
    
    
// }


// TO SOLVE:
// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1

//  for (int i = 5; i >=1; i--)
//     {
//         for (int j = i; j >=1; j--)
//         {
    
    
//             cout <<  j <<" ";
            
//         }

//       cout << "\n";
//       }

// 1 2 3 4 5
//   2 3 4 5
//    3 4 5
//     4 5
//      5

// for (int i = 1; i <=5; i++)
// {
//     for (int j = i; j <= 5; j++)
//     {
//         cout<< j <<" ";
//     }
//     cout<< "\n";

//------------------------- ARRAY -----------------------------



//     int marks[7] = {85, 95, 68, 70, 64, 50, 60};

//     float obtainedMarks = 0;
//     for (int i = 0; i < 7; i++)
//     {
//         obtainedMarks = obtainedMarks + marks[i];
//     }

//     float totalMarks = 550;

//     float percentage = (obtainedMarks / totalMarks) * 100;

//     cout << "Total Marks : " << totalMarks << "\n";
//     cout << "Obtained Marks : " << obtainedMarks << "\n";
//     cout << "Obtained Percentage : " << percentage;

//     ---------------------------------------------------------------------------

//         QUESTION NO 1:Write a C++ program to store the numbers from 1 to 10 in an array and print their squares using a for loop.

//     int number[5] ;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<< "Enter number "<<i+1<<".";
//         cin >> number[i];
//     }


//     for (int i = 0; i < 5; i++)
//     {
//         int square = number[i] * number[i];
//         cout << square << "\n";
//     }

//        ---------------------------------------------------------------------------

//            QUESTION NO 2:. Write a C++ program to find the sum of all elements in an array of 10 integers and print the result using a for loop

//         int number[10] = {10, 25, 3, 4, 5, 6, 7, 8, 9, 10};
//         int sum = 0;
//         for (int i = 0; i < 10; i++)
//         {
//             sum +=  number[i];
//         }
//         cout << "Result = " << sum;

//         ---------------------------------------------------------------------------

//            QUESTION NO 3:Write a C++ program to store the names of 5 students in an array and print them in reverse order using a for loop.



//         string name[5] = {"Hania", "Ayesha", "Wania", "Eman", "Zainab"};
//         for (int i = 4; i >= 0; i--)
//         {
//             cout << name[i] << "\n";
//         }

//         ---------------------------------------------------------------------------

//         QUESTION NO 4:Write a C++ program to find the average of all elements in an array of 10 integers and print the result using a for loop.


//          double number[10] = {10,17,21,43,50,60,70,80,98,87};
//          double sum = 0;
//          for (int i = 0; i < 10; i++)
//          {
//              sum = sum + number[i];
//          }
//          double average = sum / 10;

//          cout << "Sum of all numbers : " <<sum <<"\n";
//          cout << "Averae of all numbers : " <<average;

//         ---------------------------------------------------------------------------

//         QUESTION NO 5:. Write a C++ program to store the marks of 10 students in an array and print the marks of students who scored above 50 using a for loop.


//          string studentname[10]= {"Anshara","Bushra","Chaman","Daniyal","Eman","Farzeen","Ghousia","Hunain","Irfan","Junaid"};
//          int marks[10]= {93,84,38,63,54,40,68,32,63,72};
//          for (int i = 0; i < 10; i++)
//          {

//             if (marks[i] > 50)
//             {
//                 cout << studentname[i] << " = "<< marks[i]<< "\n";
//             }

//     }

//         ---------------------------------------------------------------------------

//       QUESTION NO 6: Write a C++ program to find the maximum and minimum elements in an array of 10 integers and print the result using a for loop.


//      int number[10] = {32,4,56,78,53,23,75,54,23,19};
//     int min = number[0];
//     int max = number[0];
//     for (int i = 0; i < 10; i++)
//     {
//        if (max < number[i])
//        {
//          max = number[i];
//        }
//        if (min > number[i]) 
//        {
//          min = number[i];
//        }
       
//     }
//     cout<< max <<"\n\a";
//     cout<< min;

//           ---------------------------------------------------------------------------

//            QUESTION NO 7:Write a C++ program to store the numbers from 1 to 10 in an array and print their cubes using a for loop.



//         int number[5] ;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<< "Enter number "<<i+1<<".";
//         cin >> number[i];
//     }


//     for (int i = 0; i < 5; i++)
//     {
//         int cube = number[i] * number[i] * number[i];
//         cout << cube << "\n";
//     }

//         ---------------------------------------------------------------------------

//           QUESTION NO 8:. Write a C++ program to find the sum of all even elements in an array of 10 integers and print the result using a for loop.


//       int number[10] = {89,76,32,38,55,80,54,23,51,10};
//       int sum = 0;
//       for (int i = 0; i < 10; i++)
//       {

//        if (number[i] % 2 == 0)
//        {
//          sum = sum + number[i];
//          cout<< "Print all even numbers : " << number[i]<< "\n";
//        }
//       }

//          cout << "Sum of all even numbers is :"<< sum << "\n";


//             ---------------------------------------------------------------------------

//           QUESTION NO 9: Write a C++ program to store the names of 5 students in an array and print the length of each name using a for loop.


//       string name[10] = {"Areeba","Bisma","Daniya","Erum","Fazeela","Abeera","Fatima","Yusra","Shazia","sumaiya"};
//       for (int i = 0; i < 10; i++)
//       {
//         cout << name[i]<<" = "<< name[i].length()<< "\n";
//       }
    

//        ---------------------------------------------------------------------------


//         QUESTION NO 10: Write a C++ program to find the product of all elements in an array of 10 integers and print the result using a for loop.

    // int number[10] = {1,2,3,4,5,6,7,8,9,10};
    // int product = 1;
    // for (int i = 0; i < 10; i++)
    // {
    //     product *= number[i];
    // }
    // cout <<"Product of all number is : "<< product << "\n";

    

    //-------------------------------------------------------------------------------------

    //      QUESTION NO 11 : TO FIND SQUARE ROOT OF A NUMBER.

    // float number[10] , sqroot;
    // for (int i = 0; i < 10; i++)
    // {
        
    // cout<<"Enter a number : " ;
    // cin>> number[i];
    // }
    // for (int i = 0; i < 10; i++)
    // {
    // sqroot = sqrt(number[i]);
    // cout<< "Square root of a number is : "<< sqroot<<"\n";
    // }


//--------------------------------- IF/ELSE -------------------------------


//QUESTION NO : 01  TO FIND LARGEST NUMBER

//     cout<<"Enter a number: ";
//     int num1;
//     cin>>num1;
//     cout<<"Enter another number: ";
//     int num2;
//     cin>>num2;
//     if (num1 > num2)
//     {
//         cout<<"Largest number is: "<<num1;
//     }
//     else{
//         cout<< "Largest number is: "<<num2;
//     }
    

//      //QUESTION NO : 02  

//      cout << "Enter your marks: ";
//     int Number;
//     cin >> Number;
//     if (Number >= 50)
//     {
//         cout << "You are Pass. ";
//     }
//     else
//     {
//         cout << "You are Fail. ";
//     }


//     //QUESTION NO : 03   FIND POSITIVE NUMBER

// cout << "Input a Number: ";
//     int Number;
//     cin >> Number;
//     if (Number >0 )
//     {
//         cout << "This is a positive number ";
//     }
//     else if (Number <0) {
//         cout<<"This is a negative number ";
//     }
//     else{
//         cout<<"Value is 0 ";
//     }

//     //QUESTION NO : 04   


//      cout << "Enter Your Marks: ";
//   int marks;
//   cin >> marks;

//   if (marks >= 90 && marks <= 100)
//   {
//     cout << "Grade A ";
//   }
//   else if (marks >= 80 && marks <= 89)
//   {
//     cout << "Grade B ";
//   }
//   else if (marks >= 70 && marks <= 79)
//   {
//     cout << "Grade C ";
//   }
//   else if (marks >= 60 && marks <= 69)
//   {
//     cout << "Grade D ";
//   }
//   else
//   {
//     cout << "You are fail";
//   }


//---------------------------- Bubble sorting ------------------------------------------


// void Sorting(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 arr[j] = arr[j] + arr[j + 1];
//                 arr[j + 1] = arr[j] - arr[j + 1];
//                 arr[j] = arr[j] - arr[j + 1];
//             }
//         }
//     }
// }

// int main()
// {

//     int arr[] = {3, 6, 90, 2, 0, 74};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     Sorting(arr, size);

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";

//     return 0;
// }



//----------------------Bubble Sorting with Dynamic Input -------------------------------
//-----------------------------(In Ascending Order)------------------------------------------

// void Bubblesort(int arr[], int n){

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                arr[j] = arr[j] + arr[j + 1];
//                 arr[j + 1] = arr[j] - arr[j + 1];
//                 arr[j] = arr[j] - arr[j + 1];
//             }
            
//         }
        
//     }

// }


// int main (){

//     int n ;
//     cout << "enter size of array: ";
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
    
//       Bubblesort(arr,n);
//       for (int i = 0; i < n; i++)
//       {
//         cout << arr[i] << " ";
//       }
//       cout << "\n";
//       return 0;
// }


//------------------------ Bubble Sorting in Descending Order -----------------------------------------------




// void Bubblesort(int arr[], int n){

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1 ; j++)
//         {
//             if (arr[j] < arr[j + 1])
//             {
//                 arr[j + 1] = arr[j + 1] + arr[j];
//                 arr[j] = arr[j + 1] - arr[j];
//                 arr[j + 1] = arr[j + 1] - arr[j];
//             }
            
//         }
        
//     }

// }


// int main (){

//     int n ;
//     cout << "enter size of array: ";
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
    
//       Bubblesort(arr,n);
//       for (int i = 0; i < n; i++)
//       {
//         cout << arr[i] << " ";
//       }
//       cout << "\n";
//       return 0;
// }


// ---------------------- Bubble Sorting With Temporary variable -------------------------------


// void Sorting(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp; 
//             }
//         }
//     }
// }

// int main()
// {

//     int arr[] = {3, 6, 90, 2, 0, 74};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     Sorting(arr, size);

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";

//     return 0;
// }


//------------------------------------- ACTIVITY NO : O1 -----------------------------------------
//-----------------------------Program to print a text in a new line--------------------------------------------

// int main(){

//     cout << "======================================================\n";
//     cout << "\t\t\3 Hello World \3";
    
// }


// ----------------------------------- ACTUVITY NO : 02 ------------------------------------
// -----------------------Program to calculate total , percentage and grade--------------------------------

// int main (){

//     int urdu,english,math;
//     cout << "Enter Urdu marks: ";
//     cin>>urdu;
//     cout << "Enter English marks: ";
//     cin>>english;
//     cout << "Enter Math marks: ";
//     cin>>math;

//     float total;
//     total = urdu  + english + math;
//      cout << "Total : "<<total << "\n";

//     float percentage;
//     percentage = (total*100)/300;
//     cout << "Percentage : "<<percentage << "%\n";
    
    
//     if (percentage >= 90 && percentage <= 100)
//     {
//       cout << "Grade A ";
//     }
//     else if (percentage >= 80 && percentage <= 89)
//     {
//       cout << "Grade B ";
//     }
//     else if (percentage >= 70 && percentage <= 79)
//     {
//       cout << "Grade C ";
//     }
//     else if (percentage >= 60 && percentage <= 69)
//     {
//       cout << "Grade D ";
//     }
//     else
//     {
//       cout << "You are fail";
//     }
// }


// -------------------------- ACTIVITY NO : 04 --------------------------------------------
// ------------------Program to add , subtract , multiply and divide of two numbers-------------------------------------


// int main (){

//     int num1 , num2 ;
//     cout << "Enter first number: ";
//     cin >> num1;

//     cout << "Enter second number: ";
//     cin >> num2;
    
//     int sum,subtract,multiply,divide;

//     sum = num1 + num2;
//     subtract = num1 - num2;
//     multiply = num1 * num2;
//     divide = num1 / num2;

//     cout << "Sum of two number is : "<< sum <<"\n";
//     cout << "Subtraction of two number is : "<< subtract << "\n";
//     cout << "Multiplication of two number is : "<< multiply<< "\n";
//     cout << "Division of two number is : "<< divide;
    
//     return 0;
// }


// --------------------------- ACTIVITY NO : 05 ----------------------------------
// --------------------- Program to compute the total and average of six numbers ----------------------------------

// int main (){

//     int num1;
//     cout << "Enter first number : ";
//     cin >> num1;

//     int num2;
//     cout << "Enter second number : ";
//     cin >> num2;

//     int num3;
//     cout << "Enter third number : ";
//     cin >> num3;

//     int num4;
//     cout << "Enter fourth number : ";
//     cin >> num4;

//     int num5;
//     cout << "Enter fifth number : ";
//     cin >> num5;

//     int num6;
//     cout << "Enter sixth number : ";
//     cin >> num6;

//     float total;
//     total = num1 + num2 + num3 + num4 + num5 + num6;
//     cout << "Total of this numbers is : " << total << "\n";

//     float average;
//     average = total / 6;
//     cout << "Average of a number is : " << average;
// }


// ----------------------- ACTIVITY NO : 06 ------------------------------------------------
// ----------------Program to check whether a number is positive , negative or zero--------------------------



// int main (){

//     int Number;
//     cout << "Input a Number: ";
//     cin >> Number;
//     if (Number >0 )
//     {
//         cout << "This is a positive number ";
//     }
//     else if (Number <0) {
//         cout<<"This is a negative number ";
//     }
//     else{
//         cout<<"Value is 0 ";
//     }
// }

//------------------------- ACTIVITY NO : 07 -------------------------------------------------
//----------------- Program to find area of rectangle ----------------------------------------

// int main(){

//     int length;
//     cout << "Enter  length of a rectangle : ";
//     cin >> length;

//     int width;
//     cout << "Enter  width of a rectangle : ";
//     cin >> width;

//     int area;
//     area = length * width;
//     cout << "Area of a rectangle is : "<< area;

// }


//--------------------------- ACTIVITY NO : 08 --------------------------------------------------------
//-------------- Program to convert length in centimeter to meter --------------------------------

// int main()
// {
//     float centimeter;
//     cout << "Enter the value of length in centimeter : ";
//     cin >> centimeter;

//     float meter = centimeter/100;
//     cout << centimeter << "cm is equal to "<< meter << "m" ;
// }


// --------------------------- ACTIVITY NO : 09 --------------------------------------------------------
// -------------- Program to convert temperature from fahrenheit into celsius --------------------------------



// int main()
// {
//     float fahrenheit;
//     cout << "Enter the value in Fahrenheit : ";
//     cin >> fahrenheit;

//     float  celsius = (fahrenheit - 32) * 5 / 9;

//     cout << fahrenheit << " fahrenheit is equal to "<< celsius <<" celsius";
// }


// --------------------------- ACTIVITY NO : 09 --------------------------------------------------------
// -------------- Program to convert temperature from celsius into fahrenheit  --------------------------------


// int main()
// {
//     float celsius;
//     cout << "Enter the value in Celsius : ";
//     cin >> celsius;
//     float  fahrenheit = (celsius * 9/5 )  + 32;

//     cout << celsius << " celsius is equal to "<< fahrenheit <<" fahrenheit";
// }


// -------------------- ACTIVITY NO : 10 -----------------------------------------
// ------------ Program that takes a input and print its multiple upto 10 -------------------------------

// int main (){
//     int num;
//     cout << " Enter a number : ";
//     cin >> num;

//     for (int i = 1; i <= 10; i++)
//     {
//         cout << num << " x " << i << " = " << num*i << "\n"; 
//     }
    
//     return 0;
// }


// ------------------------- ACTIVITY NO : 11 --------------------------------------
// ------------------- Program to read 10 numbers and sort them into descending order ------------------------------

// int main()
// {

//     int arr[6] = { 2, 3, 1, 4, 6, 5 };

//     for (int i = 0; i < 6 -1; i++)
//     {

//         for (int j = 0; j < 6 -i -1; j++) 
//         {
//             if (arr[j] < arr[j + 1])
//             {
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//             }
//         }

//     }

   
//     for (int i = 0; i < 6; i++)
//     {

//         cout << arr[i];
//     }

//     return 0;
// }


// ------------------------- ACTIVITY NO : 12 --------------------------------------
//------------------- Program to read 10 numbers and sort them into ascending order ------------------------------


// int main()
// {

//     int arr[6] = { 2, 3, 1, 4, 6, 5 };

//     for (int i = 0; i < 6 -1; i++)
//     {

//         for (int j = 0; j < 6 -i -1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }

//     }

   
//     for (int i = 0; i < 6; i++)
//     {

//         cout << arr[i];
//     }

//     return 0;
// }




//------------------- ACTIVITY NO : 13 -----------------------------------------------------------
//----------------- Program to read integer n and print the factorial of n ------------------------------------

// int main (){

//     int n ;
//     int factorial = 1;
//     cout << "Enter an integer : ";
//     cin >> n;

//     for (int i = 1; i <= n ; i++)
//     {
//          factorial = factorial * i;
//         }
        
//         cout << "Factorial of a number is : " << factorial;
//     return 0;
// }
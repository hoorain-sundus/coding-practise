 #include <iostream>  
 #include<algorithm>
 using namespace std;  


// //----------------- LINEAR SEARCH ------------------------


// // void linearSearch(int myNumbers[10], int value) {

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
  
 
//  // linearSearch(myNumbers, val);
//   //return 0;


//  //}






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

void Reverse(int num){
      string   num2 = to_string(num);
    for (int i = num2.length()-1; i >= 0; i--)
    {
        cout << num2[i];
    }
    
}

int main(){

    int num;
    cout << "Enter a number: ";
    cin >> num;
    Reverse(num);
}


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


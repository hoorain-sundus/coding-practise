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
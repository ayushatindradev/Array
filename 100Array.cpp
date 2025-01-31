#include <iostream>
using namespace std;
int main()
{

    // // Find the sum of all elements in an array
    //     int arr[]={1,2,3,4,5};
    //     int n = sizeof(arr)/sizeof(arr[0]);
    //     int sum =0;
    //     for(int i=0;i<n;i++){
    //         sum=sum+arr[i];
    //     }
    //     cout<<"sum of arr: "<<sum <<endl;
    // }
    // simple dry run

    // i	arr[i]	sum (Updated)
    // 0	1	1
    // 1	2	3
    // 2	3	6
    // 3	4	10
    // 4	5	15

    // Find the largest element in an array

    // int arr[]={3,5,7,2,9};
    // int n= sizeof(arr)/sizeof(arr[0]);
    // int maxElement =INT_MIN;

    // for(int i=0;i<n;i++){
    //     if(arr[i]>maxElement){
    //         maxElement= arr[i];
    //     }

    // }
    //  cout <<"Largest eleemsnt of arr :"<<maxElement<<endl;

    // method 2
    // int arr[]={3,5,7,2,9};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int maxElement = arr[0];
    // // maxElemsnt = 3;

    // for(int i=1;i<n;i++){
    //     if(arr[i]>maxElement){
    //         maxElement = arr[i];
    //     }
    // }
    // cout <<"Largest elemsnt : "<<maxElement<<endl;

    // Find the smallest element in an array
    // int arr[]={6,4,2,9,1};
    // int n= sizeof(arr)/sizeof(arr[0]);
    // int minAns = arr[0];
    // for(int i=1;i<n;i++){
    //     if(arr[i]< minAns){
    //         minAns = arr[i];
    //     }
    // }
    // cout <<"Smallest ans :"<<minAns<<endl;

    // 4. Reverse an array

    // int arr[] = {1,2,3,4,5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout <<"Reversed Array"<<endl;
    // for(int i=n-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    //  Count the number of even numbers
    // int arr[]={1,2,3,4,5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int count =0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]%2== 0){
    //         count++;
    //     }
    // }
    // cout <<"Even numbers count "<<count <<endl;
    // }

    //  Find the product of all elements in an array.
    // int arr[]={2,3,4};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int product = 1;
    // for(int i=0;i<n;i++){
    //     product *=arr[i];
    // }
    // cout <<"Product of array :"<<product<<endl;

    // // Count the number of odd numbers in an array.
    // int arr[]={1,2,3,4,5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int count =0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]%2==1){
    //         count++;
    //     }

    // }
    // cout <<count <<endl;

    //  Check if an array is sorted in ascending order.
    // int arr[]={1,2,3,4,5,4};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // bool ans = true;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>arr[i+1]){
    //         ans = false;
    //     }
    // }
    // cout <<ans;

    // int arr[]={1,2,3,4,5,4};
    // int n =sizeof(arr)/sizeof(arr[0]);
    // bool sorted = true;
    // for(int i=0;i<n-1;i++){
    //     if(arr[i]>arr[i+1])
    //     {
    //         sorted = false;
    //     }

    // }
    // cout <<sorted;

    //  Find the difference between the largest and smallest element
    // int arr[]={8,2,5,1,9};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int max= arr[0];
    // int min = arr[0];
    // for(int i=0;i<n;i++){
    //     if(arr[i]>max){
    //         max = arr[i];
    //     }
    //     if(arr[i]<min){
    //         min = arr[i];
    //     }
    // }
    // cout <<max - min<<endl;

    // 5. Count occurrences of a specific number in an array.

    // int arr[]= {1,2,3,2,5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int target = 2;
    // int count =0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==target){
    //         count++;
    //     }
    // }
    // cout <<count;

    // Find the sum of all elements in an array.

    // Example:
    // arr[] = {1, 2, 3, 4, 5}
    //  → Output: 15.

    // int arr[]={1,2,3,4,5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int sum = 0;
    // for(int i=0;i<n;i++){
    //     sum+=arr[i];
    // }
    // // cout <<"Sum of array is :"<< sum <<endl;

    // Find the product of all elements in an array.

    // Example: arr[] = {1, 2, 3} → Output: 6

    // int arr[]={1,2,3};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int product =1;
    // for(int i=0;i<n;i++){
    //     product = product * arr[i];
    // }
    // cout <<product;

    // Find the largest element in an array.

    // Example: arr[] = {3, 8, 2, 9} → Output: 9

    // int arr[]={3,8,2,9};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int mini = INT16_MAX;
    // for(int i=0;i<n;i++){
    //     if(arr[i]<mini){
    //         mini = arr[i];
    //     }
    // }
    // cout <<mini;

    // Find the largest element in an array.

    // Example: arr[] = {3, 8, 2, 9} → Output: 9

    // int arr[]={3,8,2,9};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int maxi = INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>maxi){
    //         maxi = arr[i];
    //     }
    // }
    // cout <<maxi ;

    // Find the average of all elements in an array.

    // Example: arr[] = {2, 4, 6} → Output: 4.0

    // int arr[]={2,4,6};
    // int n =sizeof(arr)/sizeof(arr[0]);
    // int sum =0;
    // float average = 0;
    // for(int i=0;i<n;i++){
    //     sum = sum +arr[i];
    // }
    // average = sum /n;
    // cout <<average;

    // Check if a number exists in an array.

    // Example: arr[] = {1, 2, 3, 4}, num = 3 → Output: Found

    // int arr[]={1,2,3,4};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int target = 20;
    // int flag =-1;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==target){
    //         flag = i;
    //     }
    // }
    // cout <<"index found at index "<<flag <<endl;

    // Check if a number exists in an array.

    // Example: arr[] = {1, 2, 3, 4}, num = 3 → Output: Found

    // int arr[]={1,2,3,4};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int target = 3;
    // int flag = -1;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==target){
    //         flag = i;
    //     }
    // }
    // if(flag==-1){
    //     cout <<"Not found ";
    // }
    // else{
    // //     cout <<"Found ";
    // // }

    // Count occurrences of a number in an array.

    // Example: arr[] = {2, 3, 3, 5}, num = 3 → Output: 2 times

    // int arr[]={2,3,3,5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int target = 3;
    // int count =0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==target){
    //         count++;
    //     }
    // }
    // if(count ==0){
    //     cout <<"No occurance in that given array";
    // }
    // else{
    //     cout <<count <<" times"<<endl;
    // }
    // Reverse an array.

    // Example: arr[] = {1, 2, 3} → Output: {3, 2, 1}

    // int arr[]={1,2,3};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int left =0;
    // int right =n-1;
    // while(left <right ){
    //     swap(arr[left],arr[right]);
    //     left++;
    //     right--;
    // }
    // // printing the array after the reverse
    // for(int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    // }

    // Sort an array in ascending order.

    // Example: arr[] = {5, 3, 1, 4} → Output: {1, 3, 4, 5}

    // int arr[]={5,3,1,4};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // sort(arr,arr+n);
    // for(int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    // }
    // Create an array and print all its elements.

    // Example: arr[] = {1, 2, 3, 4, 5} → Output: 1 2 3 4 5
    // int arr[]={1,2,3,4,5};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    // //     cout <<arr[i]<<" ";
    // // }

    // Find the first element of an array.

    // Example: arr[] = {10, 20, 30} → Output: 10

    // int arr[]={10,20,30};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout <<"First elemet of the array "<<arr[0];

    // Find the last element of an array.

    // // Example: arr[] = {5, 15, 25, 35} → Output: 35
    // int arr[]={5,15,25,35};
    // int n = 4;
    // cout <<"Last elemsnt of the array "<<arr[n-1];

    // Find the length (size) of an array.

    // // Example: arr[] = {2, 4, 6, 8, 10} → Output: 5

    // int arr[]={2,4,6,8,10};
    // cout <<sizeof(arr)/sizeof(arr[0])<<endl;

    // Print only the even numbers from an array.

    // Example: arr[] = {1, 2, 3, 4, 5, 6} → Output: 2 4 6
    // int arr[]={1,2,3,4,5,6};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     if(arr[i]%2==0){
    //         cout <<arr[i]<<" ";
    //     }
    // // }

    // Print only the odd numbers from an array.

    // Example: arr[] = {11, 12, 13, 14, 15} → Output: 11 13 15

    // int arr[]={11,12,13,14,15};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     if(arr[i]%2==1){
    //         cout <<arr[i]<<" ";
    //     }
    // }

    // Check if a number exists in an array (yes/no).

    // Example: arr[] = {3, 5, 7, 9}, num = 7 → Output: Yes

    // int arr[]={3,5,7,9};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int flag =-1;
    // int target = 5;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==target){
    //         flag = arr[i];
    //     }
    // }
    // if(flag==-1){
    //     cout <<"Not Found";
    // }
    // else{
    //     cout <<"Found";
    // }

    // Find the sum of the first two elements in an array.

    // Example: arr[] = {5, 10, 15, 20} → Output: 15

    // int arr[]={5,10,15,20};
    // int n = sizeof(arr)/sizeof(arr[0]);

    // cout <<arr[0]+arr[1];

    // Swap the first and last element of an array.

    // Example: arr[] = {1, 2, 3, 4, 5} → Output: {5, 2, 3, 4, 1}

    // int arr[]={1,2,3,4,5};
    // int n =sizeof(arr)/sizeof(arr[0]);
    // int left =0;
    // int right = n-1;
    // swap(arr[left],arr[right]);
    // for(int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    // }

    // Print the array in reverse order.

    // Example: arr[] = {1, 2, 3, 4, 5} → Output: 5 4 3 2 1

    // int arr[]={1,2,3,4,5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int left = 0;
    // int right = n-1;
    // while(left<right){
    //     swap(arr[left],arr[right]);
    //     left++;
    //     right--;
    // }
    // for(int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    // }

    // Print the second element of an array.

    // // Example: arr[] = {10, 20, 30, 40} → Output: 20
    // int arr[]={10,20,30,40};
    // int n= sizeof(arr)/sizeof(arr[0]);
    // cout <<arr[1];
    // }

    // Find the sum of the last two elements in an array.

    // // Example: arr[] = {3, 5, 7, 9} → Output: 16
    // int arr[]={3,5,7,9};
    // int n = 4;
    // cout <<arr[n-1]+arr[n-2];

    // Find the difference between the first and last element.

    // Example: arr[] = {8, 6, 4, 2} → Output: 6 (8 - 2)

    // int arr[]={8,6,4,2};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout <<arr[1]-arr[0]<<" , "<<arr[n-1]-arr[n-2];

    // Check if the array contains only positive numbers.

    // Example: arr[] = {1, 2, 3, 4, 5} → Output: Yes

    // int arr[]={1,2,3,-4,5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int flag =0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]<0){
    //         flag =-1;

    //     }
    // }
    // if(flag ==0){
    //     cout <<"Positive ";
    // }else if(flag == -1){
    //     cout <<"Negative ";
    // }

    // Multiply each element of an array by 2.

    // Example: arr[] = {1, 2, 3} → Output: 2 4 6

    // int arr[]={1,2,3};
    // int n = 3;
    // for(int i=0;i<n;i++){
    //     arr[i]=2*arr[i];
    // }
    // // printing the double array
    // for(int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    // }
    // Find the total count of numbers greater than 10 in an array.

    // Example: arr[] = {5, 12, 18, 7} → Output: 2

    // int arr[]={5,12,18,7};
    // int n = 4;
    // int count =0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>10){
    //         count++;
    //     }
    // }
    // cout <<count <<" Times"<<endl;

    // Find the middle element of an array (if odd length).

    // Example: arr[] = {2, 4, 6, 8, 10} → Output: 6
    // int arr[]={2,4,6,8,10};
    // int n = 5;
    // int middle = n/2;

    // cout <<arr[middle]<<endl;

    // Swap the second and second-last elements of an array.

    // Example: arr[] = {1, 2, 3, 4, 5} → Output: {1, 4, 3, 2, 5}

    // int arr[]={1,2,3,4,5};
    // int n = 5;
    // int left = 0;
    // int right = n-1;
    // swap(arr[1],arr[n-2]);
    // for(int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    // }

    // Print only the elements at even indices.

    // Example: arr[] = {10, 20, 30, 40, 50} → Output: 10 30 50

    // int arr[]={10,20,30,40,50};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     if(i%2==0){
    //         cout <<arr[i]<<" ";
    //     }
    // }

    // Print only the elements at odd indices.

    // Example: arr[] = {11, 22, 33, 44, 55} → Output: 22 44

    // int arr[]={11,22,33,44,55};
    // int n = 5;
    // for(int i=0;i<n;i++){
    //     if(i%2==1){
    //         cout <<arr[i]<<" ";
    //     }
    // }

    // Create an array and print only the first three elements.

    // Example: arr[] = {10, 20, 30, 40, 50} → Output: 10 20 30

    // int arr[]={10,20,30,40,50};
    // int n = 5;
    // for(int i=0;i<3;i++){
    //     cout <<arr[i]<<" ";
    // }
    // Find the sum of the first and last element in an array.

    // Example: arr[] = {2, 4, 6, 8, 10} → Output: 12 (2 + 10)
    // int arr[]={2,4,6,8,10};
    // int n = 5;
    // cout <<arr[0]+arr[n-1];
    // Print an array but skip every second element.

    // Example: arr[] = {1, 2, 3, 4, 5, 6} → Output: 1 3 5
    // int arr[]={1,2,3,4,5,6};
    // int n = 6;
    // for(int i=0;i<n;i=i+2){
    //     cout <<arr[i]<<" ";
    // }

    // Find how many elements are less than 5 in an array.

    // Example: arr[] = {1, 3, 7, 9} → Output: 2

    // int arr[]={1,3,7,9};
    // int n = 4;
    // int count =0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]<5){
    //         count++;
    //     }
    // }

    // cout <<count<<" times";

    // int arr[]={2,4,6};
    // int n = 3;
    // for(int i=0;i<n;i++){
    //     arr[i] = arr[i]+1;
    // }
    // for(int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    // }

    // Check if all elements in an array are equal.

    // Example: arr[] = {3, 3, 3, 3} → Output: Yes

    // int arr[] = {3, 3, 3, 3};
    // int n = 4;
    // int flag = -1;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == arr[i + 1])
    //     {
    //         flag = 1;
    //     }
    // }
    // if (flag == 1)
    // {
    //     cout << "Equal ";
    // }
    // else
    // {
    //     cout << "Not equal ";
    // }

    //     Print the absolute difference between consecutive elements in an array.

    // Example: arr[] = {10, 15, 20} → Output: 5 5

    // int arr[]={10,15,20};
    // int n = 3;
    // for(int i=0;i<n-1;i++){
    //     cout <<arr[i+1]-arr[i]<<" ";
    // }

    // Find if the first element is greater than the last element.

    // Example: arr[] = {9, 5, 1} → Output: Yes

    // int arr[]={9,5,1};
    // int n = 3;
    // if(arr[n-1]<arr[0]){
    //     cout <<"Yes";
    // }
    // else{
    //     cout <<"No";
    // }
    // Double the value of the first element and print the new array.

    // Example: arr[] = {3, 6, 9} → Output: 6 6 9

    // int arr[]={3,6,9};
    // int n = 3;

    //  arr[0]=2*arr[0];
    // for(int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    // }

    // Create an array and print all its elements.
    int arr[] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    // Create an array and print only the first element.
    int arr[] = {1, 2, 3};
    cout << arr[0];

    // Create an array and print only the last element.
    // int arr[]={1,2,3};
    // cout <<arr[2];
    // // Find the size of an array.
    // int arr[]={1,2,3};
    // cout <<sizeof(arr);
    // // Print an array in the same order as given.
    // int arr[]={1,2,3};
    // for(int i=0;i<3;i++){
    //     cout <<arr[i]<<" ";
    // }
    // Print an array in reverse order.
    // int arr[]={1,2,3};
    // for(int i=2;i>=0;i--){
    //     cout <<arr[i]<<" ";
    // }
    // // Find the sum of all elements in an array.
    // int sum =0;
    // for(int i=0;i<3;i++){
    //     sum = sum+arr[i];
    // }
    // cout <<sum ;
    // Find the average of all elements in an array.
    // int arr[]={1,2,3,4,5};
    // int sum =0;
    // int n =5;
    // for(int i=0;i<n;i++){
    //     sum = sum +arr[i];
    //     }
    //     cout <<sum/n;

    // // Check if an element exists in an array.
    // int arr[]={1,2,3};
    // int n = 3;
    // int target = 3;
    // int flag = -1;
    // for(int i=0;i<3;i++){
    //     if(arr[i]==target){
    //         flag = i;
    //     }
    // }
    // cout <<flag;

    // Count the number of elements in an array greater than a given number.
    // int arr[]={1,2,3,4,5};
    // int n =5;
    // int num =3;
    // int count =0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>num){
    //         count++;
    //     }
    // }
    // cout <<count;

    // Print only the even numbers in an array.
    // int arr[]={1,2,3,4};
    // int n =4;
    // for(int i=0;i<n;i++){
    //     if(arr[i]%2==0){
    //         cout <<arr[i]<<" ";
    //     }
    // }
    // Print only the odd numbers in an array.
    // int arr[]={1,2,3,4,5};
    // int n=5;
    // for(int i=0;i<n;i++){
    //     if(arr[i]%2==1){
    //         cout <<arr[i]<<" ";
    //     }
    // }
    // // Count the number of even numbers in an array.
    // int arr[]={1,2,3,4,5};
    // int n= 5;
    // int count =0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]%2==0){
    //         count++;
    //     }
    // }
    // cout <<count;
    // Count the number of odd numbers in an array.
    // int arr[]={1,2,3,4,5};
    // int n =5;
    // int count =0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]%2==1){
    //         count++;
    //     }
    // }
    // cout<<count;
    // Find the smallest element in an array.
    // int arr[]={1,2,3,4};
    // int n = 4;
    // int mini= INT_MAX;
    // for(int i=0;i<n;i++){
    //     if(arr[i]<mini){
    //         mini = arr[i];
    //     }

    // }
    // cout <<mini;
    // Find the largest element in an array.
    // int arr[]={1,2,3,4};
    // int n = 4;
    // int maxi = INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>maxi){
    //         maxi = arr[i];
    //     }
    // }
    // cout <<maxi ;

    // Find the second smallest element in an array.
    // int arr[]={1,2,3,4};
    // int n = 4;
    // cout <<arr[1];
    // // Find the second largest element in an array.
    // int arr[]={1,2,3,4};
    // int n = 4;
    // cout <<arr[2];
    // Find the difference between the first and last element.
    // int arr[]={1,2,3,4};
    // cout <<arr[3]-arr[0];
    // Multiply each element in an array by 2 and print the new array.
    // int arr[]={1,2,3};
    // int n = 3;
    // for(int i=0;i<n;i++){
    //     arr[i]=2*arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout <<arr[i];
    // }

    //  Basic Array Indexing & Swapping
    // Swap the first and last elements in an array.
    // int arr[]={1,2,3};
    // int n = 3;
    // int left = 0;
    // int right = 2;
    // swap(arr[left],arr[right]);
    // for(int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    // }
    // Swap the second and second-last elements in an array.
    // int arr[]={1,2,3,4,5};
    // int n = 5;
    // int left = 1;
    // int right = 3;
    // swap(arr[left],arr[right]);
    // Print elements only at even indices.
    // int arr[]={1,2,3,4,5};
    // int n = 5;
    // for(int i=0;i<n;i++){
    //     if(i%2==0){
    //         cout <<arr[i]<<" ";
    //     }
    // }
    // Print elements only at odd indices.
    // int arr[]={1,2,3,4,5};
    // int n = 5;
    // for(int i=0;i<n;i++){
    //     if(i%2==1){
    //         cout <<arr[i]<<" ";
    //     }
    // }
    // Print only the middle element of an array (if length is odd)
    // int arr[]={1,2,3};
    // int n = 3;
    // int middle =n/2;
    // cout <<arr[middle];
    // Reverse only the first half of an array.
    // int arr[]={1,2,3,4};
    // int n =4;
    // int left = 0;
    // int right = n/2;
    // while(left < right ){
    //     swap(arr[left],arr[right]);
    //     left++;
    //     right--;
    // }
    // //
    // for(int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    // }
    // Reverse only the second half of an array.
    // int arr[]={1,2,3};
    // int n = 3;
    // int mid = (0+2)/2;
    // int end = n-1;
    // while(mid<end){
    //     swap(arr[mid],arr[end]);
    //     mid++;
    //     end--;
    // }
    // for(int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    // }

    // Check if the first element is greater than the last element.
    // int arr[]={11,2,3,2};
    // int n= 4;
    // if(arr[0]>arr[3]){
    //     cout <<"True";
    // }
    // else{
    //     cout <<"False";
    // }
    // Check if the array has all equal elements.
    // int arr[]={1,1,1,1};
    // int n = 4;
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=arr[i-1]){
    //         return true;
    //     }
    // }
    // return false;
    // Check if the array has at least one negative number.
    // int arr[]={1,2,3,4,5};
    // int n = 5;
    // int flag =-1;
    // for(int i=0;i<n;i++){
    //     if(arr[i]<0){
    //         flag = 1;
    //     }
    // }

    // cout <<flag;

    // 📊 Array Element Comparisons
    // Find the total number of elements less than 10 in an array.
    // int arr[]={1,2,3,4,5};
    // int n = 5;
    // int count =0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]<10){
    //         count++;
    //     }
    // }
    // cout<<count;
    // Find the total number of elements greater than 50 in an array.
    // int arr[]={10,20,30,40,50,60,70,80,90,100};
    // int n=10;
    // int count =0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>50){
    //         count++;
    //     }
    // }
    // cout <<count;
    // Find the difference between the largest and smallest element.
    // int arr[]={1,2,3,4};
    // int n = 4;
    // int maxi=INT_MIN;
    // int mini=INT_MAX;

    // for(int i=0;i<n;i++){
    //     if(arr[i]>maxi){
    //         maxi=arr[i];
    //             }
    // }
    // for(int i=0;i<n;i++){
    //     if(arr[i]<mini){
    //         mini=arr[i];
    //  }
    //  cout <<maxi-mini;
    // }
    // Find the sum of the first and last element.
    // int arr[]={1,2,3,4};
    // cout <<arr[0]+arr[3];
    // Find the sum of the first three elements.
    // int arr[]={1,2,3,4,5};
    // int n = 5;
    // int sum = 0;
    // for(int i=0;i<3;i++){
    //     sum= sum +arr[i];
    // }
    // cout <<sum;
    // Find the sum of the last three elements.
    // int arr[]={1,2,3,4,5};
    // int n=5;
    // int sum = 0;
    // for(int i=2;i<n;i++){
    //     sum = sum+arr[i];
    // }
    // cout <<sum;
    // // Print every second element in the array.
    // int arr[]={1,2,3,4,5};
    // int n =5;
    // for(int i=0;i<n;i=i+2){
    //     cout <<arr[i]<<" ";
    // }
    // Print every third element in the array.
    // int arr[]={1,2,3,4,5};
    // int n = 5;
    // for(int i=0;i<n;i=i+3){
    //     cout <<arr[i]<<" ";
    // }
    // Count the number of times a given number appears in an array.
    // int arr[]={1,2,3,3,3,3,3,4,5};
    // int n =sizeof(arr)/sizeof(arr[0]);
    // int num =3;
    // int count =0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==num){
    //         count++;
    //     }
    // }
    // cout <<count<<endl;
    // Check if the array is sorted in ascending order.
    // int arr[]={1,2,3,4,5};
    // int n = 5;
    // int flag =1;
    // for(int i=0;i<n;i++){
    // if(arr[i]<arr[i-1]){
    //     flag = 0;
    // }
    // }
    // cot<<flag;

    // 🔰 Super Simple Array Questions
    // Create an array and print all its elements one by one.
    // int arr[]={1,2,3,4,5};
    // for(int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    // }

    // Example: arr[] = {1, 2, 3, 4, 5} → Output: 1 2 3 4 5
    // int arr[]={1,2,3,4,5};
    // int n = 5;
    // for(int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    // }
    // Create an array and print only the first element.
    // int arr[]={1,2,3,4,5};
    // cout <<arr[0];

    // // Example: arr[] = {10, 20, 30} → Output: 10
    // int arr[]={10,20,30};
    // int n = 3;
    // cout <<arr[2];
    // Create an array and print only the last element
    // int arr[]={1,2,3};
    // int n = 3;
    // cout <<arr[2];

    // Example: arr[] = {5, 10, 15, 20} → Output: 20
    // int arr[]= {5,10,15,20};
    // int n = 4;
    // cout <<arr[0]+arr[1];
    // // Find the sum of the first two elements of an array.

    // Example: arr[] = {4, 6, 8, 10} → Output: 10 (4 + 6)
    // Find the difference between the first and last element.
    // int arr[]={4,6,8,10};
    // int n = 4;
    // cout <<arr[0]-arr[3];

    // Example: arr[] = {9, 5, 1} → Output: 8 (9 - 1)
    // Print only the even numbers from an array.
    // int arr[]={9,5,1};
    // int n = 3;
    // for(int i=0;i<n;i++){
    //     if(arr[i]%2==0){
    //         cout<<arr[i]<<" ";
    //     }
    // }

    // Example: arr[] = {1, 2, 3, 4, 5} → Output: 2 4
    // Print only the odd numbers from an array.
    // int arr[]={1,2,3,4,5};
    // int n = 5;
    // for(int i=0;i<n;i++){
    //     if(arr[i]%2==1){
    //         cout <<arr[i]<<" ";
    //     }
    // }

    // Example: arr[] = {10, 13, 18, 21, 30} → Output: 13 21
    // Find how many elements are greater than 10 in an array.
    // int arr[]={10, 13, 18 , 21, 30};
    // int n = 5;
    // int count=0;
    // for(int i=0;i<10;i++){
    //     if(arr[i]>10){
    //         count++;
    //     }
    // }
    // cout <<count;

    // Example: arr[] = {5, 12, 18, 7} → Output: 2
    // Check if all elements in an array are positive numbers.
    int arr[] = {5, 12, 18, 7};
    int n = 4;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            flag = -1;
        }
    }
    cout << flag;

    // Example: arr[] = {3, 6, 9, 12} → Output: Yes
    // Swap the first and last elements of an array.

    // // Example: arr[] = {1, 2, 3, 4, 5} → Output: {5, 2, 3, 4, 1}

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int left = 0;
    int right = 4;

    swap(arr[left], arr[right]);

    // printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // }
}

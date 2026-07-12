// // import java.util.*;
// // public class Saini{
// //     public static void main(String[] args){
// //         Scanner sc=new Scanner(System.in);
// //         int a=sc.nextInt();
// //         System.out.println(a);
// //         double d=sc.nextDouble();
// //         System.out.println(d);
// //         System.out.format("%.2f",d);
// //         sc.close();
// //     }
// // }

// import java.util.*;

// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);



//         //--------------------------static array---------------------//
//         // int n=sc.nextInt();
//         // int[] arr=new int[n];
//         // for(int i=0;i<n;i++){
//         //     arr[i]=sc.nextInt();
//         // }
//         // System.out.println("Elements of an array: ");
//         // for(int i=0;i<n;i++){
//         //     System.out.print(arr[i]+" ");
//         // }

//         //-------------dynamic array------------------------------//
//         // ArrayList<Integer> arr=new ArrayList<>();
//         // for(int i=0;i<5;i++){
//         //     arr.add(sc.nextInt());
//         // }
        
//         // for(int i=0;i<5;i++){
//         //     System.out.print(arr.get(i)+" ");
//         // }


//         // sc.close();
//     }
// }



//-------------------------------------second largest element---------------------
// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         int n=sc.nextInt();
//         int[] arr=new int[n];
//         for(int i=0;i<n;i++){
//             arr[i]=sc.nextInt();
//         }

//         int fmaxi=Integer.MIN_VALUE;
//         int smaxi=Integer.MIN_VALUE;
//         for(int i=0;i<n;i++){
//             fmaxi=Math.max(arr[i],fmaxi);
//         }
//         for(int i=0;i<n;i++){
//             if(arr[i]!=fmaxi){
//                 smaxi=Math.max(arr[i],smaxi);
//             }
//         }
//         System.out.println("Second largest element of an array is: " + smaxi);
//         sc.close();
//     }
// }






//-------------------------prime number----------------------------------------//
// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         int n=sc.nextInt();
//         boolean flag=true;
//         if(n<2){
//             System.out.println("Take value gretaer then 2");
//         }else{
//         for(int i=2;i*i<=n;i++){
//             if(n%i==0){
//                 flag=false;
//                 break;
//             }
//         }
//         if(flag==true){
//             System.out.println(n+ " is prime no.");
//         }else{
//             System.out.println(n+" is Not prime");
//         }
//     }
//         sc.close();
//     }
// }


// import java.util.*;
// public class Saini{
//     public static boolean nn(String s){
//         for(int i=1;i<s.length();i++){
//             if((s.charAt(i)=='a'||s.charAt(i)=='e'||s.charAt(i)=='i'||s.charAt(i)=='o'||s.charAt(i)=='u') &&(s.charAt(i-1)=='a'||s.charAt(i-1)=='e'||s.charAt(i-1)=='i'||s.charAt(i-1)=='o'||s.charAt(i-1)=='u')){
//                 return true;
//             }
//         }
//         return false;
//     }
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String s=sc.nextLine();
//         int count=0;
//         String ans="";
//         for(int i=0;i<s.length();i++){
//             if(s.charAt(i)==' '){
//                 if(nn(ans)){
//                     count++;
//                 }
//                 ans="";
//             }else{
//             ans+=s.charAt(i);
//         }
//     }
//     if(nn(ans))count++;
//     System.out.println("Total words that contains atleast 2 consecutive vowels: "+ count);
//         sc.close();
//     }
// }




// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String str=sc.nextLine();
//         String[] words=str.split(" ");
//         int count=0;
//         for(int i=0;i<words.length;i++){
//             if(words[i].length()>0)count++; 
//         }
//         System.out.println(count);
//         sc.close();
//     }
// }





////---------------smallest character
/// 

// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String str=sc.nextLine();

//         int res=(int)str.charAt(0);
//         char ans=str.charAt(0);

//         for(int i=0;i<str.length();i++){
//             char ch=str.charAt(i);
//             if((int)(ch)<res){
//                 res=(int)ch;
//                 ans=ch;
//             }
//         }
//         System.out.println("Smallest character is: "+ans);
//         sc.close();
//     }
// }

// import java.util.*;
// public class Saini{
//     public static boolean isprime(int n){
//         if(n<2)return false;
//         boolean flag=true;
//         for(int i=2;i*i<=n;i++){
//             if(n%i==0){
//                 flag=false;
//                 break;
//             }
//         }
//         if(flag)return true;
//         return false;
//     }
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         // int n=sc.nextInt();
        // int sum=0;
        // while(n!=0){
        //     sum+=n%10;
        //     n=n/10;
        // }
        // if(sum%3==0){
        //     System.out.println("TRUE");
        // }else{
        //     System.out.println("False");
        // }

        // int[] arr=new int[5];
        // for(int i=0;i<5;i++){
        //     arr[i]=sc.nextInt();
        // }
        // int sum=0;
        // for(int i=0;i<5;i++){
        //     if(arr[i]%2!=0){
        //         sum+=arr[i];
        //     }
        // }
        // if(sum==0){
        //     System.out.println("NA");
        // }else{
        //     System.out.println(sum);
        // }

//         int n=sc.nextInt();
//         int count=0;
//         while(n!=0){
//             int d=n%10;
//             if(isprime(d))count++;
//             n=n/10;
//         }
//         System.out.println(count);


//         sc.close();
//     }
// }


// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String s=sc.nextLine();
//         String ans="";
//         for(int i=0;i<s.length();i++){
//             if(Character.isLowerCase(s.charAt(i))){
//                 ans+=s.charAt(i);
//             }
//         }
//         System.out.println(ans);
//         sc.close();
//     }
// }




// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String str=sc.nextLine();
//         String[] arr=str.split(" ");
//         String ans="";
//         for(int i=0;i<arr.length;i++){
//             ans+=arr[i].charAt(0);
//         }
//         System.out.print(ans);
//         sc.close();
//     }
// }




//intersection of two array
// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);

//         System.out.println("Take input for first array: ");
//         int n=sc.nextInt();
//         int[] arr1=new int[n];
//         for(int i=0;i<n;i++){
//             arr1[i]=sc.nextInt();
//         }

//         System.out.println("Take input for first array: ");
//         int m=sc.nextInt();
//         int[] arr2=new int[m];
//         for(int i=0;i<n;i++){
//             arr2[i]=sc.nextInt();
//         }

//         Arrays.sort(arr1);
//         Arrays.sort(arr2);
        
//         sc.close();
//     }
// }



//    =------------------------//first non repeated character-----------------------------//
// import java.util.*;
// public class Saini{
// public static void main(String[] args){
//     Scanner sc=new Scanner(System.in);
//     String s=sc.nextLine();
//     HashMap<Character,Integer>mp=new HashMap<>();
//     for(int i=0;i<s.length();i++){
//         mp.put(s.charAt(i),mp.getOrDefault(s.charAt(i),0)+1);
//     }
//     int count=0;
//     for(int i=0;i<s.length();i++){
//         if(mp.get(s.charAt(i))==1){
//             System.out.println(s.charAt(i));
//             count++;
//             return;
//         }
//     }
//     if(count==0){
//         System.out.println("No element having frequency 0");
//     }
//     sc.close();
//     }
// }





// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);

//         String s=sc.nextLine();

//         String[] arr=s.split(" ");


//         // for(int i=0;i<arr.length;i++){
//         //     if(arr[i].length()>ans.length()){
//         //         ans=arr[i];
//         //     }
//         // }
//         // System.out.println("Longest word is: " + ans);
//         String ans="";
//         for(int i=0;i<arr.length;i++){
//             String p=arr[i];
//             ans+=p.charAt(p.length()-1);
//         }
//         System.out.println(ans);
//         sc.close();

//     }
// }





//------------------maximum ascii value---------------------------//
// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String s=sc.nextLine();
//         char ch=s.charAt(0);
//         for(int i=0;i<s.length();i++){
//             char orig=s.charAt(i);
//             if(orig>ch){
//                 ch=orig;
//             }
//         }
//         System.out.println("Largest asccii character: "+ ch);
//         sc.close();
//     }
// }



//---------------------occurence of character in string-------------------------//
// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String s=sc.nextLine();

//         // HashMap<Character,Integer>mp=new HashMap<>();
//         TreeMap<Character,Integer>mp=new TreeMap<>();
//         for(int i=0;i<s.length();i++){
//             if(s.charAt(i)==' '){
//                 continue;
//             }else{
//                 mp.put(s.charAt(i),mp.getOrDefault(s.charAt(i),0)+1);
//             }    
//         }
//         for(Map.Entry<Character,Integer>temp:mp.entrySet()){
//             System.out.println(temp.getKey()+" comes: "+temp.getValue()+" times");
//         }
//         sc.close();
//     }
// }



//---------------------------highest frequency element---------------------------//
// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);

//         System.out.println("Take array size: ");
//         int n=sc.nextInt();
//         System.out.println("Take array inputs: ");
//         int[] arr=new int[n];
//         for(int i=0;i<n;i++){
//             arr[i]=sc.nextInt();
//         }

//         HashMap<Integer,Integer>mp=new HashMap<>();
//         for(int i=0;i<n;i++){
//             mp.put(arr[i],mp.getOrDefault(arr[i],0)+1);
//         }
//         for(Map.Entry<Integer,Integer>temp:mp.entrySet()){
//             System.out.println(temp.getKey()+" present "+temp.getValue()+" times");
//         }
//         int maxi=Integer.MIN_VALUE;
//         int mval=Integer.MIN_VALUE;
//         for(Map.Entry<Integer,Integer>temp:mp.entrySet()){
//             int key=temp.getKey();
//             int value=temp.getValue();
//             if(value>=mval){
//                 if(key>maxi){
//                     maxi=key;
//                     mval=value;
//                 }
//             }
//         }
        
//         System.out.println(maxi+" with times present: "+mval);

//         sc.close();
//     }
// } 






// palindrome string
// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         // String s=sc.nextLine();
//         // String ans="";
//         // for(int i=s.length()-1;i>=0;i--){
//         //     ans+=s.charAt(i);
//         // }
//         // if(s.equalsIgnoreCase(ans)){
//         //     System.out.println("Palindrome");
//         // }else{
//         //     System.out.println("No palindrome");
//         // }


//         // format values 
//         double x=sc.nextDouble();
//         System.out.printf("%.2f",x);
//         sc.close();
//     }
// }

// ---------------------remove consecutive duplicate element
// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String s=sc.nextLine();
//         char[] arr=s.toCharArray();
//         String ans=Character.toString(s.charAt(0));
//         StringBuilder an=new StringBuilder();
//         an.append(s.charAt(0));
//         for(int i=1;i<arr.length;i++){
//             if(arr[i]==arr[i-1]){
//                 continue;
//             }else{
//                 ans+=arr[i];
//                 an.append(arr[i]);
//             }
//         }
//         System.out.println(ans);
//         System.out.println(an);
//         sc.close();

//     }
// }







//-----------------remove duplicates from a string-----------------------------------//
// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String s=sc.nextLine();
//         String ans="";
//         for(int i=0;i<s.length();i++){
//             char c1=s.charAt(i);
//             boolean flag=true;
//             for(int j=i+1;j<s.length();j++){
//                 char c2=s.charAt(j);
//                 if(c1==c2){
//                 flag=false;
//                 break;
//                 }
//             }
//             if(flag)ans+=s.charAt(i);
//         }
//         System.out.println("remove duplicates string: "+ans);
//         sc.close();
//     }
// }






// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String s=sc.nextLine();
//         String ans="";
//         HashMap<Character,Integer>mp=new HashMap<>();
//         for(int i=0;i<s.length();i++){
//             mp.put(s.charAt(i),mp.getOrDefault(s.charAt(i),0)+1);
//             if(mp.get(s.charAt(i))==1)ans+=s.charAt(i);
//         }
//         System.out.println(ans);
//         sc.close();
//     }
// }








/*
 * Question:

    Given a non-negative integer, write a function that repeatedly sums its digits until the sum is a single-digit number.

    For example, if you start with the number 9875, you will sum its digits as follows:
    - 9 + 8 + 7 + 5 = 29
    - 2 + 9 = 11
    - 1 + 1 = 2

    The final single-digit result is 2.

    Write a function findRepeatedSum(int num) that takes an integer num as input and returns the single-digit result obtained by repeatedly summing the digits of num until only a single-digit number remains.

    Input
    - An integer num (0 ≤ num ≤ 10^9).

    Output
    - A single-digit integer that is the result of repeatedly summing the digits of num until only one digit remains.

    Example

    Example 1:

    Input:  
    9875

    Output:  
    2


    Explanation:  
    - Sum of digits of 9875 is 29.
    - Sum of digits of 29 is 11.
    - Sum of digits of 11 is 2.

    Example 2:

    Input:  
    123

    Output:  
    6


    Explanation:  
    - Sum of digits of 123 is 6, which is already a single-digit number.

    Constraints
    - 0 ≤ num ≤ 10^9

 */

    // import java.util.*;
    // public class Saini{
    //     public static int res(int n){
    //         int sum=0;
    //         while(n!=0){
    //             sum+=n%10;
    //             n=n/10;
    //         }
    //         return sum;
    //     }
    //     public static void main(String[] args){
    //         Scanner sc=new Scanner(System.in);
    //         int n=sc.nextInt();
    //     // int ans=n;
    //         while(n>10){
    //             n=res(n);
    //         }
    //         System.out.println("Sum is until become one digit: "+n);
    //         sc.close();
    //     }
    // }


///  frequency of charaacter using hashmap
/// 
/// 
// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         // String s=sc.nextLine();

//         // String[] words=s.split(" ");
//         // System.out.println(words[0]);
//         // char[] arr=s.toCharArray();
//         // System.out.println(arr);
//         // String upp=s.toUpperCase();
//         // System.out.println(upp);
//         // String dow=s.toLowerCase();
//         // System.out.println(dow);

//         // char ch=sc.next().charAt(0);
//         // String stoc=Character.toString(ch);
//         // System.out.println(stoc);
//         // System.out.println(Character.isLetter(ch));
//         // System.out.println(Character.isDigit(ch));
//         // System.out.println(Character.toUpperCase(ch));
//         // System.out.println(Character.toLowerCase(ch));

//         String s=sc.nextLine();

//         // HashMap<Character,Integer>mp=new HashMap<>();
//         TreeMap<Character,Integer>mp=new TreeMap<>();

//         for(int i=0;i<s.length();i++){
//             if(s.charAt(i)==' '){}else{
//             mp.put(s.charAt(i),mp.getOrDefault(s.charAt(i),0)+1);
//         }}
//         for(Map.Entry<Character,Integer>temp:mp.entrySet()){
//             System.out.println(temp.getKey()+" : "+temp.getValue());
//         }
//         sc.close();
//     }
// }
















/*
 * Question: 

    Write a program that calculates the average of elements in an integer array, excluding the values at specified limit positions. Given a start and end limit, the program should compute the average of the numbers that lie between these limits in the array.

    Requirements and Rules

    1. Input Format:
    - First, an integer n representing the number of elements in the array.
    - Next, n integers representing the elements of the array.
    - Two additional integers limit1 and limit2, which represent the positions in the array (1-based index) that define the range to average.
    
    2. Rules:
    - limit1 and limit2 are boundaries in the array.
    - Only elements between these two positions are included in the calculation of the average, excluding the elements at limit1 and limit2 themselves.
    - Assume that limit1 < limit2, and the array always contains elements between these two positions.
    - The program should round down to the nearest integer if the average is not a whole number.

    3. Output:
    - The program should print the integer average of the elements between limit1 and limit2, excluding the elements at those positions.

    Example

    Input:

    5        // n (number of elements in the array)
    1 2 3 4 5 // array elements
    1        // limit1
    4        // limit2


    Explanation:
    1. Array: [1, 2, 3, 4, 5]
    2. limit1 = 1 and limit2 = 4, so we’re interested in the values between these two positions.
    3. Elements between positions 1 and 4 are [2, 3].
    4. The average of 2 and 3 is (2 + 3) / 2 = 2.5, which rounds down to 2.

 */


// import java.util.*;
// public class Saini{
//     public static void main(String[] args){
//       Scanner sc=new Scanner(System.in);
//       int n=sc.nextInt();
//       int[] arr=new int[n];
//       for(int i=0;i<n;i++){
//          arr[i]=sc.nextInt();
//       }

//       System.out.println("Take two values or range: ");
//       int a=sc.nextInt();
//       int b=sc.nextInt();
//       int count=0,sum=0;
//       for(int i=0;i<n;i++){
//          if(arr[i]>a && arr[i]<b){
//             sum+=arr[i];
//             count++;
//          }
//       }
//       if(sum!=0){
//       System.out.println("Average is: "+sum/count);
//       }else{
//          System.out.println("No element is there");
//       }
//       sc.close();

//     }
// }







//integer to string  or reverse

// import java.util.*;
// public class Saini{
//    public static void main(String[] args){
//       Scanner sc=new Scanner(System.in);
//       //integer to string
//       int n=sc.nextInt();sc.nextLine();
//       String ab=Integer.toString(n);
//       ab+="saini";
//       System.out.println(ab);

//       //string to integer
//       String s=sc.nextLine();
//       int a=Integer.parseInt(s);
//       a+=2;
//       System.out.println(a);
//       sc.close();
//    }
// }









    /*
    * Question: Remove Duplicate Characters and Preserve Order

    Write a Java program that takes a string as input and removes all duplicate characters, preserving the order of their first occurrence. The program should then output the modified string, containing only unique characters in their original order.

    Requirements

    1. Input:
    - The program should prompt the user to enter a string str (can contain alphabets, numbers, or special characters).
    
    2. Output:
    - The program should print the modified string, where each character appears only once in the order it was first encountered.

    3. Constraints:
    - The solution should be efficient and should maintain the insertion order of characters.
    - Assume that the input string has a maximum length of 10,000 characters.

    4. Example:

    Input:  
    programming
    
    
    Output:  
    progamin
    

    Explanation: The characters 'r', 'o', 'g', 'a', 'm', 'i', and 'n' appear only once, and only their first occurrences are included in the output.

    Implementation Details

    1. Use a LinkedHashSet to store unique characters from the input string while preserving their order of appearance.
    2. Use a StringBuilder to build the final string from the characters stored in the LinkedHashSet.

*/

// import java.util.*;

// public class UniqueChars {
//     public static void main(String args[]) {
//         Scanner sc = new Scanner(System.in);
//         String str = sc.nextLine();

//         String ans = findUniqueChars(str);

//         System.out.println(ans);
//         sc.close();
//     }

//     // using linked hash set
//     public static String findUniqueChars(String str) {
//         StringBuilder ans = new StringBuilder();
//         LinkedHashSet<Character> set = new LinkedHashSet<>();

//         for (int i = 0; i < str.length(); i++) {
//             set.add(str.charAt(i));
//         }

//         for (Character ch : set) {
//             ans.append(ch);
//         }

//         return ans.toString();
//     }

// }


// import java.util.*;
// public class Saini{
//    public static void main(String[] args){
//       Scanner sc=new Scanner(System.in);
//       String s=sc.nextLine();
//       LinkedHashSet<Character>mp=new LinkedHashSet<>();
//       for(int i=0;i<s.length();i++){
//          mp.add(s.charAt(i));
//       }

//       String ans="";
//       for(Character ch: mp){
//          ans+=ch;
//       }
//       System.out.println("after: "+ans);
//       sc.close();
//    }
// }


















// /* Count number of even digit in a number
//    If the count greater than or equal to 3, then print "True" otherwise "False"
// */

// import java.util.*;
// public class Saini{
// public static void main(String[] args){
//    Scanner sc=new Scanner(System.in);
//    int n=sc.nextInt();
//    int count=0;
//    while(n!=0){
//       int d=n%10;
//       if(d%2==0)count++;
//       n=n/10;
//    }
//    if(count>=3){
//       System.out.println("True");
//    }else{
//       System.out.println("False");
//    }
//    sc.close();
// }
// }






// Problem Statement: Find the Majority Element in an Array

// You are given an integer array input of size n. A majority element is defined as an element that appears more than n/2 times inthe array. Write a Java program that determines if there is a majority element in the array. If a majority element exists, return it;otherwise, return -1.



//     The task is to find the longest substring from the beginning of a given string where each character appears only once. In other words, you need to identify the first part of the string that contains only unique characters without any repetition. Once you encounter a repeating character, stop and return the substring formed so far.

























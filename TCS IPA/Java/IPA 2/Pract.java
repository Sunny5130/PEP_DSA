
// //--------------------------------(5)----------------------------------
// // create a class Footwear which consists of the below attributes.
// //   footwearId=int
// //   footwearName=String
// //   footwearType=String
// //   price =int

// // the above attributes should be private.
// // write getter and setter and parametrised constructor as required.

// // create the class footwearProgrammm with the main method.
// // implement the 2 static methods.getCountByType and
// // getSecondHighestPriceByBrand in the Solution class.


// // getCountByType method:
// //    this method will take two input parameters.
// // array of the Footwear objects and string parameter footwear type.
// // this method will return the count of the footwears from array of the
// // footwear objects for the given type of footwear.
// // if no footwear with the given footwear type is found in the
// // array of footwear abjects,then the method should return 0.



// // getSecondHighestPriceByBrand method:
// //   this method will take 2 input parameters-array of footwear objects and string parameter inputFootwearName.the method
// // will return the second highest footwear objects based on the price from the array of the Footwear objects


// // whose brand name matches with the input string parameter.


// // if no footwear with the given brand is present in the array of the footwear objects,the the method
// // should return null.

// // NOTE: no two footwear objects would have the same footwearId.All the searches should be case insensitive.
// // the above mentioned static methods should be called from the main method.

// // for getCountByType method- the main method should print the count of the footwears ,if the returned value
// // is greater than zero. or it should print "Footwear not available";

// // for getSecondHighestPriceByBrand method-The main method should print price from the returned footwear objects


// // if the returned footwear object is not null.else it should print "Brand not available".
// // for example.
// // 112
// // ABC
// // 25555
// //   where 112 is the footwear id,ABC is brand name,25555 is price.

// // consider the sample input and output.

// // 100
// // Sketchers
// // sneekers
// // 12345
// // 103
// // Puma
// // running shoes
// // 10099
// // 102
// // reebok
// // Running shoes
// // 5667
// // 101
// // Reebok
// // running shoes
// // 5656
// // 99
// // reebok
// // floaters
// // 5666
// // Running shoes
// // reebok

// // Sample output:
// // 3
// // 99
// // reebok
// // 5666

// // Sample input2:

// // 100
// // Puma
// // sneekers
// // 12345
// // 101
// // Puma
// // sneekers
// // 10099
// // 102
// // Puma
// // sneekers
// // 5000
// // 102
// // Reebok
// // sneekers
// // 8000
// // 104
// // Puma
// // floaters
// // 2000
// // running shoes
// // bata

// // Sample output:
// // Footwear not available
// // Brand not available
// // Brand not available

// import java.util.*;
// class Footware{
//     private int id;
//     private String name;
//     private String type;
//     private int price;
//     //constructor
//     Footware(int a,String b,String c,int d){
//         this.id=a;
//         this.name=b;
//         this.type=c;
//         this.price=d;
//     }
//     // getter
//     int getId(){return id;}
//     String getName(){return name;}
//     String getType(){return type;}
//     int getPrice(){return price;}
//     //setter
//     void setId(int a){this.id=a;}
//     void setName(String a){this.name=a;}
//     void setType(String a){this.type=a;}
//     void setPrice(int a){this.price=a;}
// }
// public class Pract{
//     static int res(Footware[] arr,String s){
//         int count=0;
//         for(int i=0;i<arr.length;i++){
//             if(arr[i].getType().equalsIgnoreCase(s)){
//                 count++;
//             }
//         }
//         return count;
//     }
//     public static  Footware ans(Footware[] arr,String ss){
//         ArrayList<Footware>ans=new ArrayList<>();
//         for(int i=0;i<arr.length;i++){
//             if(arr[i].getName().equalsIgnoreCase(ss)){
//                 ans.add(arr[i]);
//             }
//         }
//         if(ans.size()<2){
//             return null;
//         }
//         ans.sort((a,b)->(a.getPrice()-b.getPrice()));
//         Footware[] aa=new Footware[1];
//         aa[0]=ans.get(ans.size()-2);
//         return aa[0];
//     }
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         Footware[] arr=new Footware[5];
//         for(int i=0;i<5;i++){
//             int id=sc.nextInt();sc.nextLine();
//             String name=sc.nextLine();
//             String type=sc.nextLine();
//             int price=sc.nextInt();sc.nextLine();
//             arr[i]=new Footware(id,name,type,price);
//         }

//         //Footwear type
//         String ss=sc.nextLine();
//         String nn=sc.nextLine();


//         int count=res(arr,ss);
//         if(count==0){
//             System.out.println("Footwear not available");
//         }else{
//             System.out.println(count);
//         }

//         //second highest footwear price with footwear name
//         Footware x=ans(arr,nn);
//         if(x==null){
//             System.out.println("Brand not available");
//             System.out.println("Brand not available");
//         }else{
//             System.out.println(x.getId());
//             System.out.println(x.getName());
//             System.out.println(x.getPrice());
//         }
//         sc.close();
//     }
// }














// Create a class called Student with the below attributes:

// rollNo - int
// name - String
// branch - String
// score - double
// dayScholar - boolean

// The above attributes should be private, write getters, setters and parameterized constructor as required.

// Create class Solution with main method.
// Implement two static methods -findCountOfDayscholarStudents  and findStudentwithSecondHighestScore in Solution 
// class.

// findCountOfDayscholarStudents:

// This method will take an array of Student objects as an input parameter . This method will calculate and return 
// the count of Students whose score is greater than 80 and who are all from dayScholar.

// If no Student scored greater than 80 and from dayScholar are present in the array of Student objects, then the
// method should return 0.

// findStudentwithSecondHighestScore:

// This method will take an array of Student objects as an input parameter. This method will return the object 
// of the second highest score student from the array of Student objects who are not from the dayScholar.

// If no Student is a dayScholar  in the array of Student objects, then the method should return null.

// Note : All the searches should be case insensitive.

// The combination of dayScholar and score for each student is always unique.

// The above mentioned static methods should be called from the main method.

// For findCountOfDayscholarStudents method - The main method should print the returned count as it is 
// if the returned value is greater than 0, else it should print "There are no such dayscholar students".

// For findStudentwithSecondHighestScore method - The main method should print the rollNo, name and score 
// in the below format from the returned object if the retuned value is not null.

// rollNo#name#score

// If the returned value is null, then it should print ”There are no student from non day scholar”

// Before calling these static methods in main, use Scanner object to read the values of four Student 
// objects referring attributes in the above mentioned attribute sequence. 
// Consider below sample input and output:

// Input:

// 1001
// Ashwa
// IT
// 85
// true
// 1002
// Preeti
// IT
// 70
// false
// 1003
// Uma
// ECE
// 85
// false
// 1004
// Akash
// EEE
// 90
// true


// Output:
// 2
// 1002#Preeti#70.0



// roo,name branch score daysc 
// import java.util.*;
// class Student{
//     private int roll;
//     private String name;
//     private String branch;
//     private double score;
//     private boolean daysc;
//     Student (int a,String b,String c,double d, boolean e){
//         this.roll=a;
//         this.name=b;
//         this.branch=c;
//         this.score=d;
//         this.daysc=e;
//     }
//     //getter
//     int getRoll(){return roll;}
//     String getName(){return name;}
//     String getBranch(){return branch;}
//     double getScore(){return score;}
//     boolean getDaysc(){return daysc;}
// }
// public class Pract{
//     public static int ss(Student[] arr){
//         int count=0;
//         for(int i=0;i<arr.length;i++){
//             if((arr[i].getDaysc()==true) && arr[i].getScore()>80){
//                 count++;
//             }
//         }
//         return count;
//     }
//     public static Student as(Student[] arr){
//         ArrayList<Student>list=new ArrayList<>();
//         for(int i=0;i<arr.length;i++){
//             if(arr[i].getDaysc()!=true){
//             list.add(arr[i]);
//             }
//         }
//         if(list.size()<2)return null;
//         list.sort((a,b)->Double.compare(b.getScore(),a.getScore()));
//         Student[] aa=new Student[1];
//         aa[0]=list.get(1);
//         return aa[0];
//     }
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         Student[] arr=new Student[4];
//         for(int i=0;i<4;i++){
//             int a=sc.nextInt();sc.nextLine();
//             String b=sc.nextLine();
//             String c=sc.nextLine();
//             double d=sc.nextDouble();sc.nextLine();
//             boolean e=sc.nextBoolean();sc.nextLine();
//             arr[i]=new Student(a,b,c,d,e);
//         }
//         System.out.println();
//         // count student of dayscolar with 80 percent marks
//         int ans=ss(arr);
//         if(ans==0){
//             System.out.println("No day scolar is there");
//         }else{
//             System.out.println(ans);
//         }        
//                 //second higheststudentscore roll#name#score

//         Student res=as(arr);
//         if(res==null){
//             System.out.println("No such student is there");
//         }else{
//             System.out.println(res.getRoll()+"#"+res.getName()+"#"+res.getScore());
//         }


//         sc.close();
//     }
// }






















// // Create a class Motel with the below attributes:

// // motelId - int
// // motelName - String
// // dateOfBooking – String (in the format dd-mon-yyyy)
// // noOfRoomsBooked – int
// // cabFacility – String
// // totalBill- double

// // Restricted for circulation outside TCS Xplore 6
// // The above attributes should be private, write getters, setters and parameterized constructor as 
// // required.

// // Create class Solution with main method.
// // Implement one static method – totalNoOfRoomsBooked in Solution class.

// // totalNoOfRoomsBooked method:
// // This method will take two input parameter - array of Motel objects and a String parameter.
// // The method will return the total numbers of rooms booked from array of Motel objects if the cab facility 
// // attribute matches with the given String parameter(cab facility) and the number of rooms booked is 
// // greater than 5.
// // If no rooms are booked with the above criteria in the array of Motel objects, then the method should 
// // return 0.

// // Note :
// // No two Motel object would have the same motelId.
// // dateOfBooking is stored in the format dd-mon-yyyy(eg. 01-Jan-2022)
// // The above mentioned static method should be called from the main method.
// // For totalNoOfRoomsBooked method - The main method should print the total number of booked rooms 
// // as it is, if the returned value is greater than 0, else it
// // should print "No such rooms booked"
// // Before calling these static methods in main, use Scanner object to read the values of four Motel objects 
// // referring attributes in the above mentioned attribute sequence.
// // Next, read the value of one String parameter for capturing the cab facility

// // Input
// // ___________
// // 1001
// // M&M
// // 01-Dec-2022
// // 5
// // Yes
// // 30000
// // 1002
// // BestStay
// // 10-Jan-2022
// // 3
// // Yes
// // 27000
// // 1003
// // Novatel
// // 11-Jun-2022
// // 5
// // Yes
// // 25000
// // 1004
// // Chola
// // 01-Sep-2022
// // 7
// // Yes
// // 72000
// // Yes
// // ___________
// // OutPut
// // ___________
// // 7

// // motelId - int
// // motelName - String
// // dateOfBooking – String (in the format dd-mon-yyyy)
// // noOfRoomsBooked – int
// // cabFacility – String
// // totalBill- double

// import java.util.*;
// class Motel{
//     private  int id;
//     private String name;
//     private String datebook;
//     private int nobookroom;
//     private String cabfac;
//     private double totalbill;
//     //constructor
//     Motel(int a,String b,String c,int d,String e,double f){
//         this.id=a;
//         this.name=b;
//         this.datebook=c;
//         this.nobookroom=d;
//         this.cabfac=e;
//         this.totalbill=f;
//     }
//     //getter
//     public int getId(){return id;}
//     public String getName(){return name;}
//     public String getDatebook(){return datebook;}
//     public int getNobookroom(){return nobookroom;}
//     public String getCabfac(){return cabfac;}
//     public double gettotalbill(){return totalbill;}
// }
// public class Pract{
//     public static int res(Motel[] arr,String s){
//         int count=0;
//         for(int i=0;i<arr.length;i++){
//             if(arr[i].getCabfac().equalsIgnoreCase(s) && arr[i].getNobookroom()>5){
//                 count+=arr[i].getNobookroom();
//             }
//         }
//         return count;
//     }
//     public static void main(String[]args){
//         Scanner sc=new Scanner(System.in);
//         Motel[] arr=new Motel[4];
//         for(int i=0;i<4;i++){
//             int a=sc.nextInt();sc.nextLine();
//             String b=sc.nextLine();
//             String c=sc.nextLine();
//             int d=sc.nextInt();sc.nextLine();
//             String e=sc.nextLine();
//             double f=sc.nextDouble();sc.nextLine();
//             arr[i]=new Motel(a,b,c,d,e,f);
//         }
//         String s=sc.nextLine();
//         int ans=res(arr,s);
//         if(ans==0){
//             System.out.println("No Motel is there");
//         }else{
//             System.out.println(ans);
//         }
//         sc.close();
//     }
// }























// Create the class RRT(Rapid response team) with the below attributes:

// ticketNo-int
// raisedBy-String 
// assignedTo-String
// priority-int
// project-String

// All attributes should be private,write getters and setters and 
// parameterized constructor as required.
// Create class MyClass with main method.

// Implement a static method-getHighestPriorityTicket in MyClass class.



// getHighestPriorityTicket method:

//      This method will take an array of RRT objects ,and a String value as parameters.This method will return the RRT object with highest priority
// ticket from the array of the RRT objects for the given project(String parameter passed).Highest priority is the one which has lesser value.

// for example:1 is considered as high priority and 5 is considered as low priority.

// If no RRT with the above condition is present in the array of the RRT objects,then the method should return null.

// The main method should print the ticketNo,raisedBy and assignedTo from returned object if the returned object is not null.if the returned object is null then main method should print "No such Ticket". 





// input1:
// ----------------------
// 123
// Velantish
// Mani
// 3
// Xperience
// 234
// Sathish
// Akshaya
// 1
// AIG
// 345
// John
// Jack
// 2
// AIG
// 456
// Bhuvi
// Jack
// 5
// AIG
// AIG


// output1:
// ------------------
// 234
// Sathish
// Akshaya

// **************

// Input2:
// --------------
// 123
// Velantish
// Mani
// 3
// Xperience
// 234
// Sathish
// Akshaya
// 1
// AIG
// 345
// John
// Jack
// 2
// AIG
// 456
// Bhuvi
// Jack
// 5
// AIG
// Xplore


// output2:
// --------------
// No such ticket.


// ticketNo-int
// raisedBy-String 
// assignedTo-String
// priority-int
// project-String

// import java.util.*;
// class RRT{
//     private int ticNo;
//     private String raiseBy;
//     private  String assignedto;
//     private int priority;
//     private String project;
//     RRT(int a,String b,String c,int d,String e){
//         this.ticNo=a;
//         this.raiseBy=b;
//         this.assignedto=c;
//         this.priority=d;
//         this.project=e;
//     }
//     //getter
//     public int getTicketno(){return ticNo;}
//     public String getRaisedto(){return raiseBy;}
//     public String getAssigned(){return assignedto;}
//     public int getPriority(){return priority;}
//     public String getProject(){return project;}
// }
// public class Pract{
//     public static RRT aa(RRT[] arr,String s){
//         ArrayList<RRT>list=new ArrayList<>();
//         for(int i=0;i<arr.length;i++){
//             if(arr[i].getProject().equalsIgnoreCase(s)){
//                 list.add(arr[i]);
//             }
//         }
//         if(list.size()==0)return null;
//         list.sort((a,b)->Integer.compare(a.getPriority(),b.getPriority()));
//         // list.sort((a,b)->a.getPriority(),b.getPriority());

//         return list.get(0);
//     }
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         RRT[] arr=new RRT[4];
//         for(int i=0;i<4;i++){
//             int a=sc.nextInt();sc.nextLine();
//             String b=sc.nextLine();
//             String c=sc.nextLine();
//             int d=sc.nextInt();sc.nextLine();
//             String e=sc.nextLine();
//             arr[i]=new RRT(a,b,c,d,e);
//         }
//         String s=sc.nextLine();
//         RRT ans= aa(arr,s);
//         System.out.println();
//         if(ans==null){
//             System.out.println("No such Ticket");
//         }else{
//             System.out.println(ans.getTicketno());
//             System.out.println(ans.getRaisedto());
//             System.out.println(ans.getAssigned());
//         }
//         sc.close();
//     }
// }





























//-----------------------------------IPA day-9---------------------//



// Create a class Sim with below attributes:

// simId - int
// customerName - String
// balance - double
// ratePerSecond - double
// circle - String


// Write getters, setters and parameterized constructor as required. 

// Public class Solution is already created with main method.
// Code inside main method should not be altered else your solution might be 

// scored as zero.You may copy the code from main method in eclipse to 
// verify your implementation. 



// Implement static method - transferCustomerCircle in Solution class.
// This method will take first parameter as array of Sim class objects, 
// second parameter as circle to be transferred (which is String parameter 
// circle1) and third parameter as new circle (which is String parameter 
// circle2).


// Method will transfer the customer to new circle (circle2), where the
//  circle attribute would match second parameter (circle1). 
// Method will return array of Sim objects for which circle is transferred.
//  Return array should be sorted in descending order of ratePerSecond
//  (assuming ratePerSecond is not same for any of the Sim objects).





// This method should be called from main method and display the simId,
// customerName,circle and ratePerSecond of returned objects 
// (as per sample output).
// Main method mentioned above already has Scanner code to read values, 
// create objects and test above methods. Hence do not modify it.

// ************************************************************************



// Consider below sample input and output:



// Input:

// 1
// raj
// 100
// 1.5
// KOL
// 2
// chetan
// 200
// 1.6
// AHD
// 3
// asha
// 150
// 1.7
// MUM
// 4
// kiran
// 50
// 2.2
// AHD
// 5
// vijay
// 130
// 1.8
// AHD
// AHD
// KOL



// Output:

// 4 kiran KOL 2.2
// 5 vijay KOL 1.8
// 2 chetan KOL 1.6

// simId - int
// customerName - String
// balance - double
// ratePerSecond - double
// circle - String


// import java.util.*;
// class Sim{
//     private int id;
//     private String name;
//     private double price;
//     private double ratepersecond;
//     private String circle;
//     Sim(int a,String b,double c,double d,String e){
//         this.id=a;
//         this.name=b;
//         this.price=c;
//         this.ratepersecond=d;
//         this.circle=e;
//     }
//     //getter
//     public int getId(){return id;}
//     public String getName(){return name;}
//     public double getPrice(){return price;}
//     public double getRatePerSecond(){return ratepersecond;}
//     public String getCircle(){return circle;}
//     //setter
//     public void setId(int a){
//         this.id=a;
//     }
//     public void setName(String a){
//         this.name=a;
//     }
//     public void setPrice(double a){
//         this.price=a;
//     }
//     public void setRatepersecond(double a){
//         this.ratepersecond=a;
//     }
//     public void setCircle(String a){
//         this.circle=a;
//     }
// }
// public class Pract{
//     public static Sim[] res(Sim[] arr,String a,String b){
//         ArrayList<Sim> list=new ArrayList<>();
//         for(int i=0;i<arr.length;i++){
//             if(arr[i].getCircle().equalsIgnoreCase(a)){
//                 arr[i].setCircle(b);
//                 list.add(arr[i]);
//             }
//         }
//         if(list.size()==0)return null;
//         list.sort((c,d)->Double.compare(d.getRatePerSecond(),c.getRatePerSecond()));
//         Sim[] aa=new Sim[list.size()];
//         for(int i=0;i<list.size();i++){
//             aa[i]=list.get(i);
//         }
//         return aa;

//     }
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         Sim[] arr=new Sim[5];
//         for(int i=0;i<5;i++){
//             int a=sc.nextInt();sc.nextLine();
//             String b=sc.nextLine();
//             double c=sc.nextDouble();sc.nextLine();
//             double d=sc.nextDouble();sc.nextLine();
//             String e=sc.nextLine();
//             arr[i]=new Sim(a, b, c, d, e);
//         }
//         String a=sc.nextLine();
//         String b=sc.nextLine();

//         Sim[] ans=res(arr,a,b);
//         if(ans==null){
//             System.out.println("No sim circle available");
//         }else{
//             for(int i=0;i<ans.length;i++){
//                 System.out.println(ans[i].getId()+" "+ans[i].getName()+" "+ans[i].getCircle()+" "+ans[i].getRatePerSecond());
//             }
//         }

//         sc.close();
//     }
// }


































// // class Sim {
// //     private int simId;
// //     private String customerName;
// //     private double balance;
// //     private double ratePerSecond;
// //     private String circle;

// //     Sim(int simId, String customerName, double balance, double ratePerSecond, String circle) {
// //         this.simId = simId;
// //         this.customerName = customerName;
// //         this.balance = balance;
// //         this.ratePerSecond = ratePerSecond;
// //         this.circle = circle;
// //     }

// //     public int getSimId() {
// //         return this.simId;
// //     }

// //     public String getCircle() {
// //         return this.circle;
// //     }

// //     public double getRatePerSecond() {
// //         return this.ratePerSecond;
// //     }

// //     public double getBalance() {
// //         return this.balance;
// //     }

// //     public String getCustomerName() {
// //         return this.customerName;
// //     }

// //     // Setters

// //     public void setSimId(int simId) {
// //         this.simId = simId;
// //     }

// //     public void setCustomerName(String customerName) {
// //         this.customerName = customerName;
// //     }

// //     public void setBalance(double balance) {
// //         this.balance = balance;
// //     }

// //     public void setRatePerSecond(double ratePerSecond) {
// //         this.ratePerSecond = ratePerSecond;
// //     }

// //     public void setCircle(String circle) {
// //         this.circle = circle;
// //     }

// // }

// // public class Solution {

// //     public static Sim[] transferCustomerCircle(Sim[] arr, String circle1, String circle2) {
// //         ArrayList<Sim> tempAns = new ArrayList<>();

// //         for (int i = 0; i < arr.length; i++) {
// //             if (arr[i].getCircle().equals(circle1)) {
// //                 arr[i].setCircle(circle2);
// //                 tempAns.add(arr[i]);
// //             }
// //         }

// //         // Sort in descending order----> as per value of ratePerSecond

// //         Collections.sort(tempAns, (a, b) -> {
// //             return Double.compare(b.getRatePerSecond(), a.getRatePerSecond());
// //         });

// //         // Converting arrraylist into array
// //         Sim ans[] = tempAns.toArray(new Sim[tempAns.size()]);

// //         // Converting array back into a resizable ArrayList
// //         // ArrayList<Sim> list = new ArrayList<>(Arrays.asList(ans));

// //         return ans;
// //     }

// //     public static void main(String[] args) {
// //         Scanner sc = new Scanner(System.in);
// //         Sim arr[] = new Sim[5];
// //         for (int i = 0; i < 5; i++) {
// //             int simId = sc.nextInt();
// //             sc.nextLine();

// //             String customerName = sc.nextLine();

// //             double balance = sc.nextDouble();
// //             sc.nextLine();

// //             double ratePerSecond = sc.nextDouble();
// //             sc.nextLine();

// //             String circle = sc.nextLine();

// //             Sim obj = new Sim(simId, customerName, balance, ratePerSecond, circle);

// //             arr[i] = obj;
// //         }

// //         String circle1 = sc.nextLine();
// //         String circle2 = sc.nextLine();

// //         Sim ans[] = transferCustomerCircle(arr, circle1, circle2);

// //         for (int i = 0; i < ans.length; i++) {
// //             System.out.println(ans[i].getSimId() + " " + ans[i].getCustomerName() + " " + ans[i].getCircle() + " "
// //                     + ans[i].getRatePerSecond());
// //         }

// //         sc.close();
// //     }
// // }


















// // Create a class Hotel with the below attributes:
 
// // hotelId - int
// // hotelName - String
// // dateOfBooking – String (in the format dd-mon-yyyy)
// // noOfRoomsBooked – int
// // wifiFacility – String
// // totalBill- double



// // The above attributes should be private, write getters, setters and parameterized constructor as required.
//  // Create class Solution with main method.
// // Implement two static methods – noOfRoomsBookedInGivenMonth and searchHotelByWifiOption in Solution class.
 
// // noOfRoomsBookedInGivenMonth method:
// // This method will take two input parameter - array of Hotel objects and a String parameter.
// // The method will return the total numbers of rooms booked from array of Hotel objects for the given month(String parameter passed).
// // If no rooms are booked for the given month in the array of Hotel objects, then the method should return 0.



// // searchHotelByWifiOption method:
// // This method will take two input parameter - array of Hotel objects and a String parameter
// // The method will return Hotel object with second highest totalbill, from the array of Hotel objects where wifiFacility attribute 
// // matches with the given wifi facility(String parameter passed).
// // If no Hotel with the given wifi option is present in the array of Hotel objects, then the method should return null.
 
// // Note : 
// // No two Hotel object would have the same hotelId.
// // No two Hotel object would have the same totalbill.
// // The Array either has at least two objects with specified wifi option OR  no object with specified wifi option. 
// // All the searches should be case insensitive. 
// // dateOfBooking is stored in the format dd-mon-yyyy(eg. 01-Jan-2022)
 
// // The above mentioned static methods should be called from the main method. 
 
// // For noOfRoomsBookedInGivenMonth method - The main method should print the total number of booked rooms as it is, 
// // if the returned value is greater than 0, else it should print "No rooms booked in the given month"
 
// // For searchHotelByWifiOption method - The main method should print the hotelId from the returned Hotel object if the returned value is not null. 
// // If the returned value is null then it should print "No such option available".
 
// // Before calling these static methods in main, use Scanner object to read the values of four Hotel objects referring attributes in the above mentioned attribute sequence. 
// // Next, read the value of two String parameters for capturing the month and wifi option .



// // Consider below sample input and output:


// // Input1:
// // 101
// // Best Stay
// // 01-jan-2022
// // 10
// // Yes
// // 20000
// // 102
// // Apple Stay
// // 12-Feb-2022
// // 3
// // Yes
// // 4000
// // 103
// // Accord
// // 11-May-2022
// // 5
// // Yes
// // 15000
// // 104
// // Royal Park
// // 22-Dec-2021
// // 7
// // Yes
// // 12000
// // May
// // Yes
 
// // Output1:
// // 5
// // 103



// // Input2:
// // 101
// // Best Stay
// // 01-jan-2022
// // 10
// // Yes
// // 20000
// // 102
// // Apple Stay
// // 12-Feb-2022
// // 3
// // Yes
// // 4000
// // 103
// // Accord
// // 11-May-2022
// // 5
// // Yes
// // 15000
// // 104
// // Royal Park
// // 22-Dec-2021
// // 7
// // Yes
// // 12000
// // May1
// // Yes1



// // Output2:
// // No rooms booked in the given month
// // No such option available

// // hotelId - int
// // hotelName - String
// // dateOfBooking – String (in the format dd-mon-yyyy)
// // noOfRoomspublicBooked – int
// // wifiFacility – String
// // totalBill- double



// // import java.util.*;
// // class Hotel{
// //     private int id;
// //     private String name;
// //     private String dateofbooking;
// //     private int noroombook;
// //     private String wifi;
// //     private double totalbill;
// //     Hotel(int a,String b,String c,int d,String e,double f){
// //         this.id=a;
// //         this.name=b;
// //         this.dateofbooking=c;
// //         this.noroombook=d;
// //         this.wifi=e;
// //         this.totalbill=f;
// //     }
// //     //getter
// //     public int getId(){return id;}
// //     public String getName(){return name;}
// //     public String getDateofbooking(){return dateofbooking;}
// //     public int getNoroombook(){return noroombook;}
// //     public String getWifi(){return wifi;}
// //     public double getTotalbill(){return totalbill;}
// // }
// // public class Pract{
// //     public static int ss(Hotel[] arr,String s){
// //         int count=0;
// //         for(int i=0;i<arr.length;i++){
// //             String[] word=arr[i].getDateofbooking().split("-");
// //             if(word[1].equalsIgnoreCase(s)){
// //                 count+=arr[i].getNoroombook();
// //             }
// //         }
// //         return count;
// //     }
// //     public static Hotel sd(Hotel[] arr,String s){
// //         ArrayList<Hotel>list=new ArrayList<>();
// //         for(int i=0;i<arr.length;i++){
// //             if(arr[i].getWifi().equalsIgnoreCase(s)){
// //                 list.add(arr[i]);
// //             }
// //         }
// //         if(list.size()<2)return null;
// //         list.sort((a,b)->Double.compare(a.getTotalbill(),b.getTotalbill()));
// //         return list.get(list.size()-2);
// //     }
// //     public static void main(String[] args){
// //         Scanner sc=new Scanner(System.in);
// //         Hotel[] arr=new Hotel[4];
// //         for(int i=0;i<4;i++){
// //             int a=sc.nextInt();sc.nextLine();
// //             String b=sc.nextLine();
// //             String c=sc.nextLine();
// //             int d=sc.nextInt();sc.nextLine();
// //             String e=sc.nextLine();
// //             double f=sc.nextDouble();sc.nextLine();
// //             arr[i]=new Hotel(a,b,c,d,e,f);
// //         }
// //         String month=sc.nextLine();
// //         String ab=sc.nextLine();

// //         int ans=ss(arr,month);
// //         if(ans==0){
// //             System.out.println("No room booked in such month");
// //         }else{
// //             System.out.println(ans);
// //         }

// //         Hotel res=sd(arr,ab);
// //         if(res==null){
// //             System.out.println("No such option available");
// //         }else{
// //             System.out.println(res.getId());
// //         }

// //         sc.close();
// //     }
// // }













//////------------------Day 12 Ipa-14--------------------------------------//



// Question:

// Develop a Java program that performs the following tasks:

// 1. Define a class named Laptop with the following private attributes:
//    - int laptopId
//    - String brand
//    - String osType
//    - double price
//    - int rating

//    Provide appropriate getters for laptopId, brand, osType, and rating, and a constructor to initialize all attributes.

// 2. In the main method, inside public class named as MyClass:
//    - Accept input for 4 Laptop objects. For each laptop, read the following details:
//      - laptopId (integer)
//      - brand (string)
//      - osType (string)
//      - price (double)
//      - rating (integer)
//    - After reading the details, input a brand and an osType to search.

// 3. Implement two static methods:
//    - public static int countOfLaptopsByBrand(Laptop[] arr, String brand)
//      - This method should return the count of laptops in the array arr that match the given brand (case-insensitive) and have a rating greater than 3.
//    - public static Laptop[] searchLaptopByOsType(Laptop[] arr, String osType)
//      - This method should return an array of laptops that match the given osType (case-insensitive). The returned array should be sorted in descending order of laptopId.
//      - If no laptops are found matching the osType, return null.

// 4. In the main method, perform the following:
//    - Call countOfLaptopsByBrand and print the count. If the count is zero, print "The given brand is not available".
//    - Call searchLaptopByOsType and print the laptopId and rating of each laptop found. If no laptops are found, print "The given os is not available".


//  Class and Method Details:

// - Class Name: Laptop
//   - Attributes:
//     - laptopId (int): Unique identifier for the laptop.
//     - brand (String): Brand name of the laptop.
//     - osType (String): Operating system type (e.g., Windows, macOS).
//     - price (double): Price of the laptop.
//     - rating (int): Customer rating of the laptop.

// - Methods:
//   - Constructor: Initializes all attributes.
//   - Getters:
//     - getLaptopId(): Returns laptopId.
//     - getBrand(): Returns brand.
//     - getOsType(): Returns osType.
//     - getRating(): Returns rating.

// - Static Methods:
//   - countOfLaptopsByBrand(Laptop[] arr, String brand): Counts laptops matching the brand with a rating above 3.
//   - searchLaptopByOsType(Laptop[] arr, String osType): Finds and sorts laptops matching the osType.

//  Sample Input:


// 101
// Dell
// Windows
// 800.50
// 4
// 102
// HP
// Windows
// 750.00
// 5
// 103
// Apple
// macOS
// 1200.00
// 5
// 104
// Lenovo
// Linux
// 650.75
// 3
// Dell
// Windows


//  Expected Output:


// 1
// 102
// 5
// 101
// 4



import java.util.*;
class Laptop{
    private int id;
    private String brand;
    private String os;
    private double price;
    private int rating;
    Laptop(int a,String b,String c,double d,int e){
        this.id=a;
        this.brand=b;
        this.os=c;
        this.price=d;
        this.rating=e;
    }
    //getter
    public int getId(){return id;}
    public String getBrand(){return brand;}
    public String getOs(){return os;}
    public double getPrice(){return price;}
    public int getRating(){return rating;}
}
public class Pract{
    public static int ss(Laptop[] arr,String s){
        int count=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i].getBrand().equalsIgnoreCase(s) && arr[i].getRating()>3){
                count++;
            }
        }
        return count;
    }
    public static Laptop[] as(Laptop[] arr,String s){
        ArrayList<Laptop>list=new ArrayList<>();
        for(int i=0;i<arr.length;i++){
            if(arr[i].getOs().equalsIgnoreCase(s)){
                list.add(arr[i]);
            }
        }
        if(list.size()==0)return null;
        list.sort((a,b)->Integer.compare(b.getId(),a.getId()));
        Laptop[] ans=new Laptop[list.size()];
        for(int i=0;i<list.size();i++){
            ans[i]=list.get(i);
        }
        return ans;
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        Laptop[] arr=new Laptop[4];
        for(int i=0;i<4;i++){
            int a=sc.nextInt();sc.nextLine();
            String b=sc.nextLine();
            String c=sc.nextLine();
            double d=sc.nextDouble();sc.nextLine();
            int e=sc.nextInt();sc.nextLine(); 
            arr[i]=new Laptop(a, b, c, d, e);
        }
        String brand=sc.nextLine();
        String ost=sc.nextLine();

        int ans=ss(arr,brand);
        System.out.println();
        if(ans==0){
            System.out.println("No laptop with such brand and above rating 3");
        }else{
        System.out.println(ans);
        }

        Laptop[] res=as(arr,ost);
        if(res==null){
            System.out.println("No laptop with such ostype");
        }else{
            for(int i=0;i<res.length;i++){
                System.out.println(res[i].getId());
                System.out.println(res[i].getRating());
            }
        }
        sc.close();
    }
}

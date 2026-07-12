// ///---------------------------//-------------------tcs ipa day 15---------------------------------------------------------------//



// //truck--> id,name,totalmiles float
// //Driver---> id,name,conatc rating float

// // relationship between them  and static function of truck in which return arr in descending order with respect to driver rating and output truck details and driver name and id;

// import java.util.*;
// class Driver{
//     private int id;
//     private String name;
//     private String contact;
//     private float rating; 
//     Driver(int a,String b,String c,float d){
//         this.id=a;
//         this.name=b;
//         this.contact=c;
//         this.rating=d;
//     }
//     //getter
//     public int getId(){return id;}
//     public String getName(){return name;}
//     public String getContact(){return contact;}
//     public float getRating(){return rating;}
// }
// class Truck{
//     private int id;
//     private String name;
//     private float totoalmiles;
//     private Driver d;
//     Truck(int a,String b,float c,Driver doo){
//         this.id=a;
//         this.name=b;
//         this.totoalmiles=c;
//         this.d=doo;
//     }
//     //getter
//     public int getId(){return id;}
//     public String getName(){return name;}
//     public float getTotalmiles(){return totoalmiles;}
//     public Driver getDriver(){return d;}
// }



// public class Pract2{
//     public static Truck[] ans(Truck[] arr){
//         ArrayList<Truck>list=new ArrayList<>();
//         for(int i=0;i<arr.length;i++){
//             list.add(arr[i]);
//         }
//         list.sort((a,b)->Float.compare(b.getDriver().getRating(),a.getDriver().getRating()));
//         Truck[] res=new Truck[list.size()];
//         for(int i=0;i<list.size();i++){
//             res[i]=list.get(i);
//         }
//         return res;
//     }
//     public static void main(String args[]){
//         Scanner sc=new Scanner(System.in);
//         int n=sc.nextInt();
//         Truck[] arr=new Truck[n];
//         for(int i=0;i<n;i++){
//             int tid=sc.nextInt();sc.nextLine();
//             String tname=sc.nextLine();
//             float ttotalmiles=sc.nextFloat();sc.nextLine();

//             int did=sc.nextInt();sc.nextLine();
//             String dname=sc.nextLine();
//             String dcontact=sc.nextLine();
//             float drating=sc.nextFloat();sc.nextLine();

//             Driver d=new Driver(did,dname,dcontact,drating);
//             arr[i]=new Truck(tid,tname,ttotalmiles,d);
//         }

//         //sort truck behalf of driver rating
//         Truck[] res=ans(arr);
//         System.out.println(" ");
//         for(int i=0;i<n;i++){
//             System.out.println(res[i].getId()+" "+res[i].getName()+" "+res[i].getTotalmiles());
//             System.out.println(res[i].getDriver().getName()+" "+ res[i].getDriver().getId());
//         }

//         sc.close();
//     }
// }



























// //--------------------------IPA demo questions---------------
// Create a program to count the number of words present in a given string. Create class
// Solution with main method.
// Implement the below static method in Solution class.
// CountWords(String str): The method should take string as an input and return the total
// number of words in the string. If the input is null/empty, return 0.
// Constraints:
// • Words are separated by one or more spaces.
// • Leading and trailing whitespaces should be ignored.
// • Empty string should return 0.
// Sample Input 1:
// “Hello World”
// Sample Output 1:
// 2
// Sample Input 2: 
// “ Java is fun”
// Sample Output 2:
// 3NO

// import java.util.*;
// public class Pract2{
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         String s=sc.nextLine();
//         if(s==null || s.trim().isEmpty()){
//             System.out.println(0);
//         }else{
//          String[] words=s.trim().split("\\s+");
//         System.out.println(words.length);
//         }
//         sc.close();
//     }
// }




//----------------------------------------IPA DEMO CODE----------------------------------------------//

// ------// Create a class Spotify with the below attributes:----------------------------------------//

// spotifyId - int
// profileName - String
// subscriptionType - String 
// subscriptionPrice - double
// groupSessionAvailable - String

// The above attributes should be private, write getters, setters and parameterized constructor as required. 
// Create class Solution with main method. 

// Implement two static methods - findAvgSpotifySubsByType in Solution class.


// findAvgSpotifySubsByType method:
// This method will take three input parameters - array of Spotify objects and two String parameters.
// The method will return the average subscriptionPrice of Spotify's(as a double value) from  array of Spotify objects for the given subscription type(String parameter passed) and groupSession available option(String parameter passed). 

// If no Spotify with the above condition is present in the array of Spotify objects, then the method should return 0.0. 

// The above mentioned static method should be called from the main method. 

// For findAvgSpotifySubsByType method - The main method should print the returned average subscriptionPrice of Spotify's as it is, if the returned value is greater than 0, or it
// should print "There are no such Spotify Subscription".

// Before calling these static methods in main, use Scanner object to read the values of four Spotify objects referring attributes in the above mentioned attribute sequence. 
// Next, read two String values for capturing subscription type and groupSession available option.


// Consider below sample input and output:
// Testcase1:
// Input:
// 1001
// John
// Yearly
// 1000
// Yes
// 1002
// Wick
// Monthly
// 200
// Yes
// 1003
// Jack
// Yearly
// 2000
// Yes
// 1004
// Jack
// Monthly
// 199
// No
// Yearly
// Yes



// Output:
// 1500.0


// Testcase2:
// Input:
// 1001
// John
// Yearly
// 1000
// Yes
// 1002
// Wick
// Monthly
// 200
// Yes
// 1003
// Jack
// Yearly
// 2000
// Yes
// 1004
// Jack
// Monthly
// 199
// No
// Yearly
// No


// Output:
// There are no such Spotify Subscription


// import java.util.*;

// class Spotify{
//     private int id;
//     private String name;
//     private String stype;
//     private double sprice;
//     private String groupseassionavailable;
//     Spotify(int a,String b,String c,double d,String e){
//         this.id=a;
//         this.name=b;
//         this.stype=c;
//         this.sprice=d;
//         this.groupseassionavailable=e;
//     }
//     //getter
//     public int getId(){return id;}
//     public String getName(){return name;}
//     public String getStype(){return stype;}
//     public double getSprice(){return sprice;}
//     public String getseassion(){return groupseassionavailable;}
// }

// public class Pract2{
//     static double aa(Spotify[] arr,String a,String b){
//         double count=0.0;
//         int c=0;
//         for(int i=0;i<arr.length;i++){
//             if(arr[i].getStype().equalsIgnoreCase(a) && arr[i].getseassion().equalsIgnoreCase(b)){
//                 count+=arr[i].getSprice();
//                 c++;
//             }
//         }
//         if(c==0){
//             return count;
//         }
//         return count/c;

//     }
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         Spotify[] arr=new Spotify[4];
//         for(int i=0;i<4;i++){
//             int a=sc.nextInt();sc.nextLine();
//             String b=sc.nextLine();
//             String c=sc.nextLine();
//             double d=sc.nextDouble();sc.nextLine();
//             String e=sc.nextLine();
//             arr[i]=new Spotify(a, b, c, d, e);
//         }
//         String a=sc.nextLine();
//         String b=sc.nextLine();
        
//         double ans=aa(arr,a,b);
//         System.out.println();
//         if(ans==0.0){
//             System.out.println("There are no such spotify subscription");
//         }else{
//             System.out.println(ans);
//         }
//         sc.close();
//     }
// }

















// Question--------------------Ipa 14 april----------------------


// // Build a console application to manage the driver and truck related data. Each truck will have exactly one driver who will drive the truck.

// // Create a class Truck with following attribute
// // id: integer
// // name: String
// // totalMilesTraveledByTruck: Float

// // Create a class Driver with following attribute
// // id: integer
// // name: String
// // contact: String
// // experience: Float

// // Establish the relationship between the Truck and Driver. Create getters, setters, and
// // parameterized constructors for the above classes.
// // Create class Solution with the main method.

// // Implement the below static method in Solution class

// // getAllTruckWithDistance method:
// // This method accepts an array of Truck objects and an integer value representing the
// // threshold distance as input parameters. It returns an array of Truck objects whose
// // total miles traveled is greater than or equal to the specified distance.

// // The resulting array must be sorted in descending order based on the associated
// // driver’s experience.

// // If no truck meets the specified distance criteria, the method should return null.
// // Note:
// // • A Truck must have exactly one associated Driver, and a driver cannot exist without
// // a Truck.
// // • If multiple drivers have the same experience value, the corresponding trucks
// // should be ordered according to the original insertion order in the input array.


// // Test Cases:
// // Sample input 1:

// // 4
// // 101
// // EcoHaul
// // 2999.99
// // 11
// // Arjun Nair
// // 9876500101
// // 3.0
// // 102
// // CargoJet
// // 3000
// // 12
// // Priya S
// // 9876500102
// // 7.5
// // 103
// // HighwayStar
// // 4500.5
// // 13
// // Rohit Menon
// // 9876500103
// // 5.25
// // 104
// // MetroLink
// // 3000.00
// // 14
// // Nikita Rao
// // 9876500104
// // 9.0
// // 3000

// // Sample output 1:
// // 104
// // MetroLink
// // 3000.0
// // 14
// // Nikita Rao
// // 102
// // CargoJet
// // 3000.0
// // 12
// // Priya S
// // 103
// // HighwayStar
// // 4500.5
// // 13
// // Rohit Menon

// // Sample input 2:

// // 0
// // 100
// // Sample output 2:

// // No Truck Found




// import java.util.*;
// class Driver{
//     private int id;
//     private String name;
//     private String contact;
//     private float exper;
//     //constructor
//     Driver(int a,String b,String c,float d){
//         this.id=a;
//         this.name=b;
//         this.contact=c;
//         this.exper=d;
//     }
//     //getter
//     public int getId(){return id;}
//     public String getName(){return name;}
//     public String getContact(){return contact;}
//     public float getExper(){return exper;}
// }
// class Truck{
//     private int id;
//     private String name;
//     private float totalmiles;
//     private Driver d;
//     Truck(int a,String b,float c,Driver dr){
//         this.id=a;
//         this.name=b;
//         this.totalmiles=c;
//         this.d=dr;
//     }
//     //getter
//     public int getId(){return id;}
//     public String getName(){return name;}
//     public float getTotalmiles(){return totalmiles;}
//     public Driver getDriver(){return d;}
// }
// public class Pract2{
//     public static Truck[] ss(Truck[] arr,int dist){
//         ArrayList<Truck>list=new ArrayList<>();
//         for(int i=0;i<arr.length;i++){
//             if(arr[i].getTotalmiles()>= dist){
//                 list.add(arr[i]);
//             }
//         }
//         if(list.size()==0)return null;
//         list.sort((a,b)->Float.compare(b.getDriver().getExper(),a.getDriver().getExper()));
//         Truck[] ans=new Truck[list.size()];
//         for(int i=0;i<list.size();i++){
//             ans[i]=list.get(i);
//         }
//         return ans;
//     }
//     public static void main(String[] args){
//         Scanner sc=new Scanner(System.in);
//         int n=sc.nextInt();sc.nextLine();
//         Truck[] arr=new Truck[n];
//         for(int i=0;i<n;i++){
//             int a=sc.nextInt();sc.nextLine();
//             String b=sc.nextLine();
//             float c=sc.nextFloat();sc.nextLine();

//             int p=sc.nextInt();sc.nextLine();
//             String q=sc.nextLine();
//             String r=sc.nextLine();
//             float s=sc.nextFloat();sc.nextLine();

//             Driver d=new Driver(p,q,r,s);
//             arr[i]=new Truck(a,b,c,d);
//         }
//         int dist=sc.nextInt();sc.nextLine();
//         System.out.println();

//         Truck[] ans=ss(arr,dist);
//         if(ans==null){
//             System.out.println("No truck found");
//         }else{
//             for(int i=0;i<ans.length;i++){
//                 System.out.println(ans[i].getId());
//                 System.out.println(ans[i].getName());
//                 System.out.println(ans[i].getTotalmiles());
//                 System.out.println(ans[i].getDriver().getId());
//                 System.out.println(ans[i].getDriver().getName());
//             }
//         }

//         sc.close();
//     }
// }























// Solution:
// import java.util.ArrayList;
// import java.util.Collections;
// import java.util.Comparator;
// import java.util.List;
// import java.util.Scanner;
// public class TruckAndDriverSoltion {
// public static void main(String[] args) {
// Scanner scanner = new Scanner(System.in);
// int size = scanner.nextInt();
// Truck[] trucks = new Truck[size];
// for (int i = 0; i < size; i++) {
// int id = scanner.nextInt();
// scanner.nextLine();
// String name = scanner.nextLine();
// float totalMiles = scanner.nextFloat();
// int did = scanner.nextInt();
// scanner.nextLine();
// String dname = scanner.nextLine();
// String dcontact = scanner.nextLine();
// float experiance = scanner.nextFloat();
// Driver driver = new Driver(did, dname, dcontact, experiance);
// trucks[i] = new Truck(id, name, totalMiles, driver);
// }


// // for (Truck truck : trucks) {
// // System.out.println(truck);
// // }
// //
// float distance = scanner.nextFloat();
// Truck[] output = getAllTruckWithDistance(trucks, distance);
// if(output == null) {
// System.out.println("No Truck Found");
// }else {
// for(Truck truck : output) {
// System.out.println(truck.getId());
// System.out.println(truck.getName());
// System.out.println(truck.getTotalMilesTraveled());
// System.out.println(truck.getDriver().getId());
// System.out.println(truck.getDriver().getName());
// }
// }
// scanner.close();
// }

// private static Truck[] getAllTruckWithDistance(Truck[] trucks, float distance) {
// List<Truck> input = new ArrayList<Truck>();
// if(trucks.length == 0) {
// return null;
// }
// for (Truck truck : trucks) {
// if (truck.getTotalMilesTraveled() >= distance) {
// input.add(truck);
// }
// }
// Collections.sort(input, Comparator.comparing(obj -> ((Truck)
// obj).getDriver().getExperience()).reversed());
// Truck[] output = input.toArray(new Truck[input.size()]);
// if(output.length == 0) {
// return null;
// }
// return output;
// }
// }

// class Driver {
// private int id;
// private String name;
// private String contact;
// private float experience;

// public Driver() {
// super();
// }
// public Driver(int id, String name, String contact, float experience) {
// super();
// this.id = id;
// this.name = name;
// this.contact = contact;
// this.experience = experience;
// }
// public int getId() {
// return id;
// }
// public void setId(int id) {
// this.id = id;
// }
// public String getName() {
// return name;
// }
// public void setName(String name) {
// this.name = name;
// }
// public String getContact() {
// return contact;
// }

// public void setContact(String contact) {
// this.contact = contact;
// }
// public float getExperience() {
// return experience;
// }
// public void setExperience(float experience) {
// this.experience = experience;
// }
// @Override
// public String toString() {
// return "Driver [id=" + id + ", name=" + name + ", contact=" + contact + ", experience=" +
// experience + "]";
// }
// }

// class Truck {
// private int id;
// private String name;
// private float totalMilesTraveled;
// private Driver driver;
// public Truck() {
// super();
// }
// public Truck(int id, String name, float totalMilesTraveled, Driver driver) {
// super();
// NOT TO BE CIRCULATED
// Restricted for circulation outside TCS Xplore 14
// this.id = id;
// this.name = name;
// this.totalMilesTraveled = totalMilesTraveled;
// this.driver = driver;
// }
// public int getId() {
// return id;
// }
// public void setId(int id) {
// this.id = id;
// }
// public String getName() {
// return name;
// }
// public void setName(String name) {
// this.name = name;
// }
// public float getTotalMilesTraveled() {
// return totalMilesTraveled;
// }
// public void setTotalMilesTraveled(float totalMilesTraveled) {
// this.totalMilesTraveled = totalMilesTraveled;
// }
// public Driver getDriver() {
// return driver;
// NOT TO BE CIRCULATED
// Restricted for circulation outside TCS Xplore 15
// }
// public void setDriver(Driver driver) {
// this.driver = driver;
// }
// @Override
// public String toString() {
// return "Truck [id=" + id + ", name=" + name + ", totalMilesTraveled=" + totalMilesTraveled +
// ", driver="
// + driver + "]";
// }
// }



// Test Case
// Sample input 1:

// 4
// 101
// EcoHaul
// 2999.99
// 11
// Arjun Nair
// 9876500101
// 3.0
// 102
// CargoJet
// 3000
// 12
// Priya S
// 9876500102
// 7.5
// 103
// HighwayStar
// 4500.5
// 13
// Rohit Menon
// 9876500103
// 5.25
// 104
// MetroLink
// 3000.00
// 14
// Nikita Rao
// 9876500104
// 9.0
// 3000

// Sample output 1:
// 104
// MetroLink
// 3000.0
// 14
// Nikita Rao
// 102
// CargoJet
// 3000.0
// 12
// Priya S
// 103
// HighwayStar
// 4500.5
//  13
// Rohit Menon

// Sample input 2:
// 0
// 100
// Sample output 2:
// No Truck Found


// Sample input 3:
// 3
// 201
// IronTrail
// 1800
// 21
// Vivek Gupta
// 022-6001001
// 4.0
// 202
// BlueComet
// 1800.00
// 22
// Sneha Kulkarni
// 022-6001002
// 4.0
// 203
// PolarVoyage
// 5000.75
// 23
// Manish Agarwal
// 022-6001003
// 6.0
// 0

// Sample output 3:
// 203
// PolarVoyage
// 5000.75
// 23
// Manish Agarwal
// 201
// IronTrail
// 1800.0
// 21
// Vivek Gupta
// 202
// BlueComet
// 1800.0
// 22
// Sneha Kulkarni

// Sample input 4:
// 3
// 301
// NightRunner
// -5
// 31
// Sara Khan
// skhan@example.com
// 2.0
// 302
// DesertStar
// 1999.99
// 32
// Vikram Rao
// 9999912345
// -1.0
// 303
// CityLine
// 0
// 33
// Leena D
// leena_d
// 0.0
// 2500

// Sample output 4:
// No Truck Found

// Sample input 5:
// 4
// 801
// Blue Horizon
// 4500
// 81
// Ananya Sen
// Tel 033 4000 1001
// 2.75
// 802
// Thunder Road
// 3000.50
// 82
// Rohit A
// rohit.a@fleet.co
// 4.25
// 803
// Green Valley
// 3000
// 83
// Simran Kaur
// +1 415 555 0199
// 6.5
// 804
// Crimson Bay
// 6500.25
// 84
// Arvind N
// ARVIND-OPS-009
// 9.0
// 3000

// Sample output 5:
// 804
// Crimson Bay
// 6500.25
// 84
// Arvind N
// 803
// Green Valley
// 3000.0
// 83
// Simran Kaur
// 802
// Thunder Road
// 3000.5
// 82
// Rohit A
// 801
// Blue Horizon
// 4500.0
// 81
// Ananya Sen 

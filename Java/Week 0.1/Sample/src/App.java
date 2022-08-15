public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");

        
        
        
        Fish f=new Fish();
        f.breather();
        
        

    }
   



}
class Living{
    int age;
    void breather(){
        System.out.println("Living can breathe");
    }

}
class Animal extends Living{
    
   int legs;
    void breather(){
        System.out.println("animal can breathe");


    }
}
class Fish extends Living{
    int fins;
    void breather(){

    System.out.println("fish can breathe");
    }
}
class Human extends Animal{
    String name;
    void ageGet(){
        System.out.println("Age is "+ age);
    }
    void ageGetThis(){
        System.out.println("Age is "+ this.age);
    }
    Human(){

    }
    Human(int age){
        this.age=age;
    }
    void breather(){
    
    System.out.println("Human can breathe");
    }
    void breather(String a){
        System.out.println("HUman can breathe"+a);


    }
}
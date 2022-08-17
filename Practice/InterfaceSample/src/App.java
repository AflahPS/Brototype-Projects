public class App {

    private Engine engine;
    private Media media;

    App(){
        this.engine=new  PetrolEngine();
        this.media=new Sony();
    }

    App(Engine engine,Media media){
        this.engine=engine;
        this.media=media;
    }

    public static void main(String[] args) {
        App petrolCar =new App();
        petrolCar.engine.start();
        petrolCar.media.start();

        App diselCar = new App(new DieselEngine(), new Jbl());
        diselCar.engine.stop();
        diselCar.media.stop();

    }

}
class PetrolEngine implements Engine{

    @Override
    public void start() {
        System.out.println("Petrol engine started");
    }

    @Override
    public void stop() {
        System.out.println("Petrol engine stopped");
        
    }
    
}
class DieselEngine implements Engine{

    @Override
    public void start() {
        System.out.println("Diesel engine started");
    }

    @Override
    public void stop() {
        System.out.println("Diesel engine stopped");
        
    }
}
class Sony implements Media{

    @Override
    public void start() {
        System.out.println("Sony player started");
    }

    @Override
    public void stop() {
        System.out.println("Sony player stopped");
        
    }
}
class Jbl implements Media{

    @Override
    public void start() {
        System.out.println("JBL player started");
    }

    @Override
    public void stop() {
        System.out.println("Sony player stopped");
        
    }
}

class Brake1 implements Brake{

    @Override
    public void brake() {
        System.out.println("Brake 1 is applied");
        
    }

}

//interfaces
interface Engine {
    public void start();
    public void stop();

}
interface Media {
    public void start();
    public void stop();

}
interface Brake {
    public void brake();
}

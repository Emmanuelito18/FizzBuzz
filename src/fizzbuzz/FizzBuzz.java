package fizzbuzz;

/**
 *
 * @author Emmanuel
 */
public class FizzBuzz {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic herefor(int i=1;i<=100;i++){
        for(int i=1;i<=100;i++){
            if(i%3==0&&i%5==0){
            System.out.println("FizzBuzz");
            }else{
            if(i%3==0){
            System.out.println("Fizz");
            }else if(i%5==0){
            System.out.println("Buzz");
            }else{
            System.out.println(i);
            }
            }
            /*if(moduloManual(i,3)&&moduloManual(i,5)){
                System.out.println("FizzBuzz");
            }else{
                if(moduloManual(i,3)){
                    System.out.println("Fizz");
                }else if(moduloManual(i,5)){
                    System.out.println("Buzz");
                }else{
                    System.out.println(i);
                }
            }*/
        }
    }
    static boolean moduloManual(int dividendo,int divisor){
        int resultado=0,cociente=0;
        resultado=dividendo/divisor;
        cociente=dividendo-(resultado*divisor);
        return cociente==0;
    }
}

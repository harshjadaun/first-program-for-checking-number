import java.util.*;
public class A(){
 public static void main(String args[]){
  char ch;
  ch=(char)System.in.read();
  if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')){
   System.out.println("alphabet");
  }
  else{
   System.out.println("not alphabet");
  } 
	}
} 

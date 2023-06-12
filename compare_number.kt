fun main(args:Array<String>){

  val num1 = 10
  val num2 = 5
  val num3 = 2
  val max = 0
  
  if(num1 > num2)
  {
    if(num1 > num3)
    {
      max = num1;
    }
  }
  if(num2 > num1)
  {
    if(num2 > num3)
    {
      max = num2;
    }
  }
  else
  {
    max = num3;
  }
  
  print("The max number is $max")
}

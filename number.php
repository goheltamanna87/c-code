<?php
   class number{
   function value($a,$b){
   if($a>$b)
   echo"$a value is maximum<br>";
   else
    echo"$b value is maximum<br>";
   if($a<$b)
   echo"$a value is mimimum<br>";
   else
    echo"$b value is minimum<br>";
	
}
}
$obj=new number();
$obj->value(10,20);
?> 
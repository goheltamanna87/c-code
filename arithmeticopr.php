<?php
  
  class arithmeticopr{
    function addition($a,$b){
echo"addition of a&b is=".($a+$b);
echo"<br>";
}
function substraction($a,$b){
echo"substraction of a&b is=".($a-$b);
echo"<br>";
}
function multiplaction($a,$b){
echo"multiplaction of a&b is=".($a*$b);
echo"<br>";
}
function division($a,$b){
echo"division of a&b is=".($a/$b);
echo"<br>";
}
}
$obj=new arithmeticopr();
$obj->addition(10,20);
$obj->substraction(20,10);
$obj->multiplaction(6,8);
$obj->division(50,5);
?>
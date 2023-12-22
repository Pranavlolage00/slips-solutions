<html>
    <body>
        <form method="POST" action="#">
            enter first string:
            <input type="text" name="t1"><br>
            enter second string:
            <input type="text" name="t2"><br>
             enter position to reverse string:
             <input type="text" name="t3"><br><br>
             <input type="radio" name="r1" value="1">compare two string<br>
             <input type="radio" name="r1" value="2">Append first string to second<br>
             <input type="radio" name="r1" value="3">reverse sub-string<br>
             <input type="submit"><br>
        </form>
    </body>
</html>
<?php
  $s1=$_POST["t1"];
  $s2=$_POST["t2"];
  $pos=$_POST["t3"];
  $ch=$_POST["r1"];

  switch($ch)
  {
     case "1":if($s1==$s2)
                 echo"string are equal";
              else
                 echo"string is not same";
             break;
    case "2": echo"<br>append string=".$s2.$s1;
              break;
    case "3":
             $n=strlen($s1);
             $n=$n-$pos;
             $s1=substr($s1,$pos,$n);
             $rev=strrev($s1);
             echo"reverse sub-string=".$rev;
  }
 
?>
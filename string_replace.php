<html>
    <body>
        <form method="POST" action="#">
            enter large string:
            <input type="text" name="t1"><br>
            enter small string:
            <input type="text" name="t2"><br>
            enter string to replace:
            <input type="text" name="t3"><br>
            <input type="submit"><br>
        </form>
    </body>
</html>
<?php
  $str1=$_POST["t1"];
  $str2=$_POST["t2"];
  $rep=$_POST["t3"];
 
  $res=strrpos($str1,$str2);
  $res1=strrpos($str1,$str2);
  $cnt=strlen($str2);
  
$rep=str_replace($str2,$rep,$str1);

  echo"<br> first occurances=".$res;
  echo"<br> last occurances=".$res1;
  echo("<br>occurance of small string=".$cnt);
  echo"<br>replace string=".$rep;
  
?>
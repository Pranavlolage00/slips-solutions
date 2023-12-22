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
  $s1=$_POST["t1"];
  $s2=$_POST["t2"];
  $s3=$_POST["t3"];

  $res1=strpos($s1,$s2);
  $res2=strrpos($s1,$s2);
  $res3=str_replace($s2,$s3,$s1);

  echo"<br>first occurances of the string=".$res1;
  echo"<br>last occurances of the string=".$res2;
  echo"<br>replace string=".$res3;
?>
<html>
    <body>
        <form method="POST" action="#">
            enter first string:
            <input type="POST" name="t1"><br>
            enter second string:
            <input type="text" name="t2"><br>
            enter string to replace:
            <input type="text" name="t3"><br><br>
            <input type="radio" value="1" name="r1">1-Find the small string at the start of large string<br>
            <input type="radio" value="2" name="r1">2-replace all occurrences of small string<br>
            <input type="radio" value="3" name="r1">3-split the large string<br>
            <input type="submit"><br>
        </form>
    </body>
</html>
<?php
  $s1=$_POST["t1"];
  $s2=$_POST["t2"];
  $s3=$_POST["t3"];
$ch=$_POST["r1"];

  switch($ch)
  {
    case '1':$pos=strpos($s1,$s2);
    if($pos!=0)
        echo"string is not at starting posotion=".$pos;
    else
         echo"string is starting at start position=".$pos;
     break;
    case '2':$str=str_replace($s2,$s3,$s1);
          echo"replaced string=".$str;
          break;
    case '3':echo"<br>split string<br>";
        print_r(str_split($s1));
          break;
  }


?>
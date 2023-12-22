<html>
  <body>
    <form method="POST" action="slip1.php">
      enter string:
      <input type="text" name="t1"><br>
      enter choice:<br>
      <input type="radio" value="1" name="r1" >1-count the number of vowels<br>
      <input type="radio" value="2" name="r1">2-count the occurances of vowels<br>
      <input type="radio" value="3" name="r1">3-string is palindrome or not<br>
      <input type="submit"><br>
    </form>
  </body>
</html>
<?php
  $s1=$_POST["t1"];
  $ch=$_POST["r1"];
  
  switch($ch)
  {
     case '1':vcount($s1);
               break;
     case '2':occr($s1);
              break;
     case '3':palindrome($s1);
              break;

  }
  function vcount($s1)
  {
    $cnt=0;
      $n=strlen($s1);
      for($i=0; $i<$n; $i++)
      {
          if($s1[$i]=='A'||$s1[$i]=='a'||$s1[$i]=='E'||$s1[$i]=='e'||$s1[$i]=='I'||
          $s1[$i]=='i'||$s1[$i]=='O'||$s1[$i]=='o'||$s1[$i]=='U'||$s1[$i]=='u')
          {
            $cnt++;
          }
      }
    echo"total number of vowels=".$cnt;     
  }
  function occr($s1)
  {
     $n=strlen($s1);
     $A=0; $E=0; $I=0; $O=0; $U=0;
    for($i=0; $i<$n; $i++)
    {
      if($s1[$i]=='A'||$s1[$i]=='a')
        $A++;
      elseif($s1[$i]=='E'||$s1[$i]=='e')
        $E++;
      elseif($s1[$i]=='I'||$s1[$i]=='i')
        $I++;
      elseif($s1[$i]=='O'||$s1[$i]=='o')
        $O++;
      elseif($s1[$i]=='U'||$s1[$i]=='u')
        $U++;
    }
    echo"<br>total count of A=".$A;
    echo"<br>total count of E=".$E;
    echo"<br>total count of I=".$I;
    echo"<br>total count of O=".$O;
    echo"<br>total count of U=".$U;
  }

  function palindrome($s1)
  {
      $j=0;
      $n=strlen($s1);

      for($i=$n-1; $i>=0; $i--)
      {
         $s2[$j++]=$s1[$i];
      }
     for($i=0; $i<$n; $i++)
     {
       if($s1[$i]!=$s2[$i])
          break; 
     }
     if($i==$n)
      echo"string is palindrom";
    else
     echo"string is not palindrome";
  }
?>

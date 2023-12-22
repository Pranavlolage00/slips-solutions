<html>
    <body>
        <form method="POST" action="#">
       <h1>perform the following operations on an
              associative array</h1>
             <input type="radio" name="r1" value="1"> Display the elements of an array along with the keys.<br>
             <input type="radio" name="r1" value="2"> Display the size of an array<br>
             <input type="radio" name="r1" value="3">Delete an element from an array from the given index.<br>
             <input type="radio" name="r1" value="4"> Reverse the order of each elements key-value pair <br>
             <input type="radio" name="r1" value="5"> Traverse the elements in an array in random order<br>
             <input type="submit"><br>
        </form>
    </body>
</html>
<?php
  $a=array("name"=>"om","rno"=>101,"class"=>"BBACA");
  $ch=$_POST["r1"];

  switch($ch)
  {
     case "1":print_r($a);
       break;
     case "2":echo"size of array=".count($a);
          break;
    case "3":unset($a["rno"]);
             print_r($a);
      break;
    case "4":$c=array_flip($a);
       print_r($c);
       break;
    case "5":shuffle($a);
       print_r($a);
           break;
        

  }

?>
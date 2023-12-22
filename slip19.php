<?php
 session_start();
 if(isset($_SESSION["vcount"]))
 {
    $_SESSION["vcount"]+=1;
   echo"<h1> visit count=".$_SESSION["vcount"];
 }
 else
 {
   $_SESSION["vcount"]=1;
   echo"first time visit";

 }

?>
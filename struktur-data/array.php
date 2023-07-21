<?php 

$array = ["Apel", "Jeruk", "Semangka"];

// echo $array[2];

// echo "<br>";

// echo" ".count($array); // panjang array

// echo "<br>";


// $found = false;
// foreach ($array as $key => $value) {
//    if($value == "Jeruk") {
//       echo $value. " ada, di index ke ".$key;
//       $found = true;
//    } 
// };

// if (!$found) {
//    echo "jeruk tidak ada";
//    echo "<br>";
// };



$array2 = ["1", "2", "3", "4", "5"];

foreach($array2 as $key => $value) {
   if($value % 2 == 1) {
      echo "Ganjil " . $value;
      echo "<br>";
   } else  {
      echo "Genap " . $value;
      echo "<br>";   
   }
}


?>


<!DOCTYPE html>
<html>
<head>
<style>
table {
  font-family: arial, sans-serif;
  border-collapse: collapse;
  width: 100%;
}

td, th {
  border: 1px solid #dddddd;
  text-align: left;
  padding: 8px;
}

tr:nth-child(even) {
  background-color: #dddddd;
}
</style>
</head>
<body>

<h2>HTML Table</h2>

<!-- TABEL 1 -->
   
<table>
  <tr>
    <th>Buah-buahan</th>
  </tr>
  <?php 
    $buah = ["Apel", "Jeruk", "Semangka"];
    foreach($buah as $key => $value) {
   ?>

<tr>
  <td><?= $value ?></td>
</tr>

   <?php 
    }
    ?>
</table>

<!-- TABEL 2 -->
   
   <table>
  <tr>
    <th>Buah-buahan</th>
  </tr>

  <?php
   $arr_md = [
      ["Jeruk", "Mangga", "Apel"],
      ["Semangka", "Salak", "Pepaya"]
   ];
   
   foreach($arr_md as $key => $arr) {
   ?>
   <tr>
      <td>
         <?php
            foreach($arr as $i => $ar){
               echo $ar;
               echo " ";
            }
         ?>
      </td>
   </tr>
   <?php 
   }
   ?>
</table>

</body>
</html>


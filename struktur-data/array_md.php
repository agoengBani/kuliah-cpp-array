<?php 
$arr_md = [
   ["Jeruk", "Mangga", "Apel"],
   ["Semangka", "Salak", "Pepaya"]
];

foreach($arr_md as $arr) {
   foreach($arr as $ar) {
      echo $ar;
      echo "<br>";
   }
}

?>
<?php include_once("connect.php");?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>InternetRzeczy</title>
</head>
<body>
    <h2>Menu</h2>
    <div class="counter">
    <?php
            $counter_records = $conn->query("SELECT COUNT(tabela.ID)  as 'ile' FROM tabela where KATEGORIA between 4 and 4;");
            list($ile)=mysqli_fetch_row($counter_records);
            
        ?>
    </div>
    <header>
        <ul>
            <li><a href="index.php">Strona główna</a></li>
            <li><a href="all.php">Wszystkie rekordy z bazy</a></li>
            <li><a href="Czujniki_kat_1.php">Czujniki_kat_1</a></li>
            <li><a href="Czujniki_kat_4.php">Czujniki_kat_4</a></li>
            <li><a href="cena_najdrozszego.php">cena_najdrozszego</a></li>
        </ul>
    </header>
    <div class="Czujniki_kat_4">
    <ul>
        <?php
    $Czujniki_kat_4records = $conn->query("SELECT tabela.ID,tabela.CENACZUJNIKA,tabela.NAZWA,tabela.KATEGORIA FROM tabela where KATEGORIA between 4 and 4;");
    while(list($ID,$CENACZUJNIKA,$NAZWA,$KATEGORIA)=mysqli_fetch_row($Czujniki_kat_4records)){
        echo("<li><b>$ID</b>, <i>$CENACZUJNIKA, $NAZWA, $KATEGORIA</i></li>");
    }
    ?>
        </ul>
    </div>

</body>
</html>
<?php $conn->close(); ?>

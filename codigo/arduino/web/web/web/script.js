function gerarEnergia(){

    let energia = Math.floor(Math.random() * 100);

    document.getElementById("energia").innerHTML =
    energia + "%";

    if(energia >= 50){

        document.getElementById("status").innerHTML =
        "Energia Solar Estável";

        document.getElementById("status").style.color =
        "#22c55e";

    }else{

        document.getElementById("status").innerHTML =
        "Baixa Geração de Energia";

        document.getElementById("status").style.color =
        "red";
    }

}

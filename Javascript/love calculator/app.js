    function love(){

        //input of names
        var p1=document.getElementById("p1").value;
        

        var p2=document.getElementById("p2").value;

        var n=Math.random()
        n=n*100
        n=Math.floor(n)+1

        if(p1==""){
            alert("Please Enter Your Name.")
        }
        else if(p2==""){
            alert("Please Enter Your Lover's Name")
        }
        else{
           document.getElementById("result").innerHTML=(p1+ " and " + p2 + " your lovescore is " + n + " %. ");
        }
        
        


       

        

        
    }
        



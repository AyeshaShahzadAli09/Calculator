const input = document.querySelector('input');
let btns = document.querySelectorAll('.btn');

let str = "";

Array.from(btns).forEach((button) =>{
    button.addEventListener("click", (e) =>  {
       // console.log(e.target);
        if(e.target.innerHTML == '=')
        {
            str = eval(str);
            input.value  = str;
        }
        else if (e.target.innerHTML == "DEL")
        {
            str = str.substring(0 , str.length-1);
            input.value  = str;
        }
        if (e.target.innerHTML == 'AC')
        {
            str = "";
            input.value  = str;
        }
       else if (e.target.innerHTML == "DEL")
        {
            str = str.substring(0 , str.length);
            input.value  = str;
        }
        else{
        str = str + e.target.innerHTML;
        input.value = str;
    }
    })
})
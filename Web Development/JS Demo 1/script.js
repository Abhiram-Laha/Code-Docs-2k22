let Hello = document.querySelector('button');
let article=document.querySelector('div')
Hello.addEventListener('click', inputMsg);

function inputMsg() {
    let name = prompt('What is Your Name ??');
    if (name!=null){
        article.textContent = 'Hello ' + name ;

    }
    
}
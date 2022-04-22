let Hello = document.querySelector('button');
let article=document.querySelector('div')
Hello.addEventListener('click', inputMsg);

function inputMsg() {
    let name = prompt('What is Your Name ??');
    article.textContent = 'Hello ' + name + '\nHow are you?';
}
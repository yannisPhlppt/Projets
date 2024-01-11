
const inputEmail = document.querySelector('input[id=mail]')
const validFormButton = document.querySelector('button[type=submit]')

validFormButton.setAttribute('disabled', true)
inputEmail.addEventListener('keyup', validMail)

function validMail(e) {
    const regex = /^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/;
    if (regex.test(String(inputEmail.value).toLowerCase())){
        validFormButton.removeAttribute('disabled')
    }else{
        validFormButton.setAttribute('disabled', true)
    }
}

function validateForms() {
    let formCount = document.getElementsByTagName("input").length;

    for (let i= 0; i < formCount; i++) {
        let inputs = document.getElementsByTagName("form")[i].getElementsByTagName("input");
        for (let j = 0; j < inputs.length; j++) {
            if (inputs[j].value === "") {
                validFormButton.setAttribute('disabled', true)
            }
        }
    }
    validFormButton.removeAttribute('disabled')
}

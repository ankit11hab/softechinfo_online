document.getElementById("close").style.display = "none";
function openForm() {
  document.getElementById("close").style.display = "block";
  document.getElementById("myForm").style.display = "block";
  document.getElementById("open").style.display = "none";
}
function closeForm() {
  document.getElementById("myForm").style.display = "none";
  document.getElementById("open").style.display = "block";
  document.getElementById("close").style.display = "none";
}
document.getElementById("sendbutton").addEventListener("click", () => {
  const name = document.getElementById("name").value;
  const email = document.getElementById("email").value;
  const msg = document.getElementById("msg").value;
  Email.send({
    Host: "smtp.elasticemail.com",
    Username: "softech256@gmail.com",
    Password: "B1B7F32749B1D764B01982A84953A5B89317",
    To: "anirbanhabra@gmail.com",
    From: "softech256@gmail.com",
    Subject: `${name} has sent you a message`,
    Body: `<b>Email</b>: ${email} <br>
        <b>Message</b>: ${msg}`,
  }).then((message) => alert("Your message has been sent!"));
});
function myfunc(e) {
  e.preventDefault();
}

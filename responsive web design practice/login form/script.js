const loginForm = document.getElementById('login-form');
loginForm.addEventListener('submit', function(event) {
  event.preventDefault(); // prevent form submission
  const username = loginForm.username.value;
  const password = loginForm.password.value;
  if (username === 'myusername' && password === 'mypassword') {
    alert('Login successful!');
  } else {
    alert('Invalid username or password.');
  }
});
    
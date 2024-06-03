document.getElementById('login-form').addEventListener('submit', function(event) 
{
    event.preventDefault();
  
    var username = document.getElementById('username').value;
    var password = document.getElementById('password').value;
  
    console.log('사용자명:', username);
    console.log('비밀번호:', password);
  
});


// 아이디/비밀번호 찾기 색깔 바꾸기
var button = document.getElementById('b1');
var membershipSection = document.getElementById('b1');
var originalColor = membershipSection.style.backgroundColor;

function changeColor1() 
{
  var currentColor = membershipSection.style.backgroundColor;

  if (currentColor === originalColor) {
    membershipSection.style.backgroundColor = 'yellow';
  } 
  else {
    membershipSection.style.backgroundColor = originalColor;
  }
}
button.addEventListener('click', changeColor1);

// 회원가입 색깔 바꾸기
var button = document.getElementById('b2');
var membershipSection2 = document.getElementById('b2');
var originalColor2 = membershipSection2.style.backgroundColor;

function changeColor2() 
{
  var currentColor = membershipSection2.style.backgroundColor;

  if (currentColor === originalColor2) 
  {
    membershipSection2.style.backgroundColor = 'yellow';
  } 
  else 
  {
    membershipSection2.style.backgroundColor = originalColor;
  }
}
button.addEventListener('click', changeColor2);

// 아이디/비밀번호 찾기 및 회원가입 시 링크 이동
var button1 = document.getElementById('b1');
var button2 = document.getElementById('b2');

button1.addEventListener('click', function() 
{
  window.location.href = 'membership/login/login.html';
});

button2.addEventListener('click', function() 
{
  window.location.href = 'membership/membership1/membership.html';
});

// 현재 시간
function updateCurrentTime() {
  const currentTimeElement = document.getElementById('current-time');
  const currentDateElement = document.getElementById('current-date');
  if (currentTimeElement && currentDateElement) {
    const currentDate = new Date();
    const currentTime = currentDate.toLocaleTimeString([], { hour: '2-digit', minute: '2-digit', hour12: false });
    const currentDateFormatted = currentDate.toLocaleDateString('ko-KR');
    currentTimeElement.textContent = `현재 시간: ${currentTime}`;
    currentDateElement.textContent = `날짜: ${currentDateFormatted}`;
  }
}

setInterval(updateCurrentTime, 1000);

// 수량을 선택하면 가격이 더해짐
function calculateTotalPrice() {
    var quantity = document.getElementById("quantity").value;
    var price = 10000;
    var totalPrice = quantity * price;
  
    var totalPriceElement = document.getElementById("total-price");
    totalPriceElement.textContent = "총 가격: " + totalPrice + "원";
  }
  
  document.getElementById("purchase-form").addEventListener("submit", function(event) {
    event.preventDefault();
    calculateTotalPrice();
  
    // 가격 표시
    var totalPrice = document.getElementById("total-price").textContent;
    var confirmation = confirm(totalPrice + "\n구매를 확정하시겠습니까?");
  
    if (confirmation) {
      // 구매 완료 알림 표시
      alert("구매가 완료되었습니다.");
  
      // 창 새로고침
      window.location.reload();
    }
  });
  
  document.getElementById("quantity").addEventListener("change", calculateTotalPrice);
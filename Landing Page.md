---
tags:
  - Odin-Project
page: https://www.theodinproject.com/lessons/foundations-landing-page
---
# Landing Page
## Design
![Design](https://cdn.statically.io/gh/TheOdinProject/curriculum/81a5d553f4073e593d23a6ab00d50eef8620796d/foundations/html_css/project/imgs/01.png)
![Font and Colors](https://cdn.statically.io/gh/TheOdinProject/curriculum/81a5d553f4073e593d23a6ab00d50eef8620796d/foundations/html_css/project/imgs/02.png)

- Font is Roboto

## index.html
```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Landing Page</title>
    <link rel="stylesheet" type="text/css" href="./style.css">
</head>
<body>
  <div class="hero">
      <header>
        <span class="logo">Header Logo</span>
        <ul>
          <li><a href="#">header link one</a></li>
          <li><a href="#">header link two</a></li>
          <li><a href="#">header link three</a></li>
        </ul>
      </header>

      <div class="hero-content">
        <div>
          <h1>This website is awesome</h1>
          <p>This website has some subtext that goes under the main title. It's a smaller font and the color is lower contrast</p>
          <button>Sign Up</button>
        </div>
        <div class="img-wrapper">
          <img src="#" alt="this is a placeholder for an image">
        </div>
      </div>
  </div>

  <div class="information">
    <h1>Some random information.</h1>
    <div class="cards">
      <div class="card">
        <div class="img-wrapper">
          <img src="#" alt="">
        </div>
        <p>this is some subtext under an illustration or image</p>
      </div>
      <div class="card">
        <div class="img-wrapper">
          <img src="#" alt="">
        </div>
        <p>this is some subtext under an illustration or image</p>
      </div>
      <div class="card">
        <div class="img-wrapper">
          <img src="#" alt="">
        </div>
        <p>this is some subtext under an illustration or image</p>
      </div>
      <div class="card">
        <div class="img-wrapper">
          <img src="#" alt="">
        </div>
        <p>this is some subtext under an illustration or image</p>
      </div>
    </div>
  </div>

  <div class="quote">
    <p>This is an inspiritng quote, or a testimonial froma a customer. Maybe it's just filling up space, or maybe people will actually read it. Who knows? All I know is that it looks nice</p>
    <span>-Thor, God of Thunder</span>
  </div>

  <div class="call-to-action">
    <div class="background">
      <div class="wrapper">
        <h1>Call to action! It's time!</h1>
        <p>Sign up for our product by clicking that button right over there</p>
      </div>
      <button>Sign up</button>
    </div>
  </div>

  <footer>Copyright © The Odin Project 2021</footer>
</body>
</html>
```

## style.css
```css
@import url('https://fonts.googleapis.com/css2?family=Roboto:ital,wght@0,400;0,900;1,300&display=swap');

:root{
  --hero-color: #f9faf8;
  --secondary-color: #1f2937;
  --bold-color: #3882f6;
}

body{
  font-family: "Roboto", sans-serif;
  font-weight: 400;
  padding: 0;
  margin: 0;
}

.hero{
  background-color: #1f2937;
  color: var(--hero-color);
  display: flex;
  flex-direction: column;
  padding: 0 25svh 25svh;
}

header{
  display: flex;
  position: relative;
  top: 5px;
  justify-content: space-between;
  align-items: center;
  margin-bottom: 5%;
}

header .logo{
  font-size: 24px;
  font-weight: 900;
}

header ul{
  width: 50%;
  list-style: none;
  display: flex;
  justify-content: space-around;
}

header li{
  padding: 1%;
}

header a{
  text-decoration: none;
}

header a,
.hero-content p,
footer span{
  color: #e5e7eb;
  font-size: 18px;
}

.hero-content{
  display: flex;
  align-items: center;
  justify-content: space-between;
  gap: 10%;
}

.hero-content div{
  width: 50%;
}

.hero-content h1{
  font-size: 48px;
  font-weight: 900;
}

button{
  border: none;
  background-color: var(--bold-color);
  color: var(--hero-color);
  width: 25%;
  padding: 10px;
  border-radius: 5px;
  font-weight: 900;
}

.hero-content .img-wrapper{
  background-color: gray;
  flex: 1;
  position: relative;
  aspect-ratio: 2/1;
  display: flex;
  align-items: center;
  justify-content: center;
}

.hero-content .img-wrapper img{
  text-align: center;
}

.information{
  margin: 50px 0 0 0;
}
.information h1{
  font-size: 36px;
  text-align: center;
  font-weight: 900;
  color: var(--secondary-color)
}

.information .cards{
  display: flex;
  justify-content: space-between;
  align-items: center;
  margin: 0 12.5%;
}

.cards .card{
  margin: 5%;
}

.card .img-wrapper{
  border: 2.5px solid var(--bold-color);
  width: 100%;
  aspect-ratio: 1/1;
  border-radius: 12.5%;
}

.card p{
  text-align: center;
}

.quote{
  margin: 50px 0 0 0;
  padding: 100px 300px;
  background-color: #e5e7eb;
  display: flex;
  flex-direction: column;
}

.quote p{
  font-size: 36px;
  font-weight: 300;
  font-style: italic;
  margin: 0 0 20px 0;
}

.quote span{
  font-size: 18px;
  font-weight: 800;
  align-self: end;
}

.call-to-action{
  margin: 50px 0 0 0;
  color: var(--hero-color);
}

.call-to-action .background{
  background-color: var(--bold-color);
  margin: 15svh 12.5svw;
  display: flex;
  align-items: center;
  justify-content: space-between;
  padding: 2.5% 10%;
  border-radius: 10px;
}

.call-to-action .wrapper{
  color: var(--hero-color);
  flex: 4;
}

.call-to-action h1{
  font-size: 24px;
  margin: auto;
}

.call-to-action p{
  margin: 5px auto;
  font-weight: 300;
}

.call-to-action button{
  flex: 1;
  font-weight: 900;
  border: 2px solid var(--hero-color);
  width: 12.5%;
}

footer{
  background-color: var(--secondary-color);
  color: var(--hero-color);
  padding: 2.5%;
  text-align: center;
  font-size: 12px;
  font-weight: 300;
}
```
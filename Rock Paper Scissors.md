---
tags:
  - "#Odin-Project"
page:
---
# Rock Paper Scissors
## index.html
```html
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Rock, Paper, Scissors</title>
  <script defer src="./app.js"></script>
</head>
<body>
  Open Terminal using cmd+opt+i
</body>
</html>
```
## app.js
```js
function getBotChoice(options) {
  const randInt = (max) => Math.floor(Math.random() * max)
  return options[randInt(options.length)]
}

function getHumanChoice(options){
  let optionChosen = "";

  while(!options.includes(optionChosen)){
    const errorMessage = optionChosen != "" ? `Error: "${optionChosen}" is not an option. ` : "";
    const optionsMessage = `Please pick an option: ${options.join(', ')}`
    optionChosen = prompt(errorMessage + optionsMessage).toLowerCase();
  }
  return optionChosen
}

function compare(options, humanOption, botOption){
  const capitalise = (str) => str.charAt(0).toUpperCase() + str.slice(1);

  const humanIndex = options.indexOf(humanOption);
  const botIndex = options.indexOf(botOption);

  if(humanIndex == botIndex){
    return {winner: "draw", message: `Draw! ${capitalise(humanOption)} is the same as ${capitalise(botOption)}`}
  }
  else if((humanIndex + 1) % options.length == botIndex){
    return {winner: "bot", message: `You Lose! ${capitalise(botOption)} beats ${capitalise(humanOption)}`}
  }
  else if(options.length + ((humanIndex - 1) % options.length == botIndex)){
    return {winner: "human", message: `You Win! ${capitalise(humanOption)} beats ${capitalise(botOption)}`}
  }

  return {winner: "Error", message: "Error"}
}

const options = ["rock", "paper", "scissors"];
let humanScore = 0;
let botScore = 0;

console.log("Rock Paper Scissors")
while(true){
  const human = getHumanChoice(options)
  const bot = getBotChoice(options)
  const game = compare(options, human, bot)
  
  if(game.winner == "human"){
    humanScore++;
  } else if (game.winner == "bot"){
    botScore++;
  }

  console.log(`${game.message}\nHuman Score: ${humanScore}\nBot Score: ${botScore}`)
}
```

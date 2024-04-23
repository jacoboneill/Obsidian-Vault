---
tags:
  - Odin-Project
  - Program
url: https://www.theodinproject.com/lessons/foundations-recipes
---
# Recipes
## index.html
```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Odin Recipes</title>
    <style>
      ul{
        display: flex;
        list-style: none;
        width: 100%;
        justify-content: space-around;
        padding: 0 0;
      }

      li{
        background-color: #eee;
        border-radius: 2%;
        width: 25%;
        aspect-ratio: 1/1;
        display: flex;
        justify-content: center;
        align-items: center;
      }

      a{
        width: 100%;
        text-align: center;
        text-decoration: none;
        color: #000;
        font-family: sans-serif;
      }
    </style>
</head>
<body>
  <h1>Odin Recipes</h1>
    <ul>
      <li><a href="./recipes/lasagna.html">Lasagna</a></li>
      <li><a href="./recipes/creamy_mushroom_and_spinach_pasta.html">Creamy Mushroom and Spinach Pasta</a></li>
      <li><a href="./recipes/tiramisu.html">Tiramisu</a></li>
    </ul>
</body>
</html>
```

## recipes/lasagna.html
```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Odin Recipes | Lasagna</title>
  </head>
  <body>
    <h1>Lasagna</h1>
    <img src="https://plus.unsplash.com/premium_photo-1668618296300-e301f8d2cef9?w=900&auto=format&fit=crop&q=60&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxzZWFyY2h8MXx8bGFzYWduYXxlbnwwfHwwfHx8MA%3D%3D" alt="Lasagna" style="width: 25svw">
    <h2>Description</h2>
    <p>Lasagna, a timeless Italian classic, is a savory marvel that tantalizes the taste buds with layers of indulgence. This beloved dish boasts tender sheets of pasta, generously smothered in rich tomato sauce, creamy béchamel, and a hearty medley of cheeses, all harmonizing in a symphony of flavors. With its comforting warmth and satisfying texture, lasagna is a culinary masterpiece that brings joy to every bite.</p>
    
    <h2>Ingredients</h2>
    <ul>
      <li>Lasagna noodles (around 12-15 sheets)</li>
      <li>Tomato sauce (about 3 cups)</li>
      <li>Ground beef or Italian sausage (1 pound)</li>
      <li>Onion, diced (1 medium)</li>
      <li>Garlic, minced (2-3 cloves)</li>
      <li>Ricotta cheese (about 2 cups)</li>
      <li>Mozzarella cheese, shredded (about 2 cups)</li>
      <li>Parmesan cheese, grated (about 1/2 cup)</li>
      <li>Eggs (2 large)</li>
      <li>Fresh basil leaves, chopped (optional)</li>
      <li>Salt and pepper, to taste</li>
      <li>Olive oil (for cooking)</li>
      <li>Italian seasoning (optional)</li>
    </ul>

    <h2>Steps</h2>
    <ol>
      <li>Preheat the oven to 375°F (190°C).</li>
      <li>Cook the lasagna noodles according to package instructions until al dente. Drain and set aside.</li>
      <li>In a large skillet, heat olive oil over medium heat. Add diced onions and minced garlic, sauté until translucent.</li>
      <li>Add ground beef or Italian sausage to the skillet. Cook until browned and no longer pink, breaking it up into smaller pieces.</li>
      <li>Stir in tomato sauce and Italian seasoning (if using). Let the sauce simmer for about 10 minutes.</li>
      <li>In a separate bowl, combine ricotta cheese, eggs, grated Parmesan cheese, chopped basil (if using), salt, and pepper. Mix until well combined.</li>
      <li>Spread a thin layer of meat sauce on the bottom of a 9x13-inch baking dish.</li>
      <li>Arrange a layer of cooked lasagna noodles over the sauce.</li>
      <li>Spread a layer of the ricotta mixture over the noodles, followed by a layer of shredded mozzarella cheese.</li>
      <li>Repeat the layers (sauce, noodles, ricotta mixture, mozzarella cheese) until all ingredients are used, ending with a layer of sauce and mozzarella cheese on top.</li>
      <li>Cover the baking dish with aluminum foil and bake in the preheated oven for 25-30 minutes.</li>
      <li>Remove the foil and bake for an additional 10-15 minutes, or until the cheese is bubbly and golden brown.</li>
      <li>Let the lasagna cool for a few minutes before slicing and serving. Enjoy your delicious homemade lasagna!</li>
    </ol>

  </body>
</html>
```

## recipes/creamy_mushroom_and_spinach_pasta.html
```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Odin Recipes | Creamy Mushrrom and Spinach Pasta</title>
  </head>
  <body>
    <h1>Creamy Mushroom and Spinach Pasta</h1>
    <img src="https://images.unsplash.com/photo-1673470743263-bf1a61b7f12e?w=900&auto=format&fit=crop&q=60&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxzZWFyY2h8Mnx8Y3JlYW15JTIwbXVzaHJvb20lMjBhbmQlMjBzcGluYWNoJTIwcGFzdGF8ZW58MHx8MHx8fDA%3D" alt="Creamy Mushroom and Spinach Pasta" style="width: 25svw">
    <h2>Description</h2>
    <p>Indulge in a symphony of flavors with our creamy mushroom and spinach pasta. This dish offers a tantalizing fusion of earthy mushrooms, tender spinach leaves, and al dente pasta, all bathed in a lusciously creamy sauce. Fragrant garlic sets the stage, mingling with sautéed mushrooms until they're golden brown, while fresh spinach adds a vibrant pop of color and nutrients. The rich cream sauce, infused with Parmesan cheese, envelops each strand of pasta, creating a velvety texture that's both comforting and luxurious. With a touch of red pepper flakes for a subtle kick, this dish is a celebration of simplicity and sophistication—a true crowd-pleaser that's perfect for any occasion.</p>
    
    <h2>Ingredients</h2>
    <ul>
      <li>Pasta of your choice (such as fettuccine, penne, or spaghetti)</li>
      <li>Olive oil</li>
      <li>Garlic, minced</li>
      <li>Mushrooms, sliced (you can use a mix of cremini, button, and/or shiitake)</li>
      <li>Spinach leaves, washed and roughly chopped</li>
      <li>Heavy cream</li>
      <li>Parmesan cheese, grated</li>
      <li>Salt and black pepper, to taste</li>
      <li>Red pepper flakes (optional, for a bit of heat)</li>
      <li>Fresh parsley, chopped (for garnish)</li>
    </ul>

    <h2>Steps</h2>
    <ol>
      <li>Cook the pasta according to package instructions until al dente. Drain and set aside, reserving some pasta water.</li>
      <li>In a large skillet, heat olive oil over medium heat. Add minced garlic and sauté until fragrant.</li>
      <li>Add the sliced mushrooms to the skillet and cook until they release their moisture and start to brown.</li>
      <li>Stir in the chopped spinach and cook until wilted.</li>
      <li>Pour in the heavy cream and let it simmer for a few minutes until slightly thickened.</li>
      <li>Add the cooked pasta to the skillet and toss to coat evenly with the creamy mushroom and spinach sauce. If the sauce is too thick, you can add a splash of reserved pasta water to thin it out.</li>
      <li>Season with salt, black pepper, and red pepper flakes (if using), adjusting to taste.</li>
      <li>Sprinkle grated Parmesan cheese over the pasta and toss to combine.</li>
      <li>Serve the creamy mushroom and spinach pasta hot, garnished with chopped fresh parsley.</li>
    </ol>

  </body>
</html>
```

## recipes/tiramisu.html
```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Odin Recipes | Tiramisu</title>
  </head>
  <body>
    <h1>Tiramisu</h1>
    <img src="https://images.unsplash.com/photo-1567608286687-394db5f7520a?w=900&auto=format&fit=crop&q=60&ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxzZWFyY2h8NHx8dGlyYW1pc3V8ZW58MHx8MHx8fDA%3D" alt="Tiramisu" style="width:25svw">
    <h2>Description</h2>
    <p>Savor the timeless elegance of our classic tiramisu recipe, a delectable Italian dessert that's sure to captivate your senses. Layers of delicate ladyfinger biscuits delicately soaked in espresso and rum create a symphony of flavors, offering a perfect balance of richness and indulgence. Nestled between these coffee-infused layers lies a velvety mixture of mascarpone cheese, whipped cream, and just a hint of sweetness, imparting a luxurious creaminess that melts in your mouth with every heavenly bite. Each spoonful is a journey through layers of decadence, as the flavors of coffee, creamy mascarpone, and cocoa powder intertwine harmoniously, leaving you craving for more. Tiramisu isn't just a dessert—it's an experience, a testament to the artistry of Italian culinary tradition, and a delightful finale to any meal.</p>
    
    <h2>Ingredients</h2>
    <ul>
      <li>6 large egg yolks</li>
      <li>3/4 cup granulated sugar</li>
      <li>1 cup mascarpone cheese, softened</li>
      <li>1 1/2 cups heavy cream</li>
      <li>1 cup strong brewed espresso, cooled</li>
      <li>1/4 cup rum or coffee liqueur (optional)</li>
      <li>1 package (about 7 ounces) ladyfinger biscuits (savoiardi)</li>
      <li>Unsweetened cocoa powder, for dusting</li>
    </ul>

    <h2>Steps</h2>
    <ol>
      <li>In a heatproof bowl, whisk together the egg yolks and sugar until pale and creamy.</li>
      <li>Place the bowl over a pot of simmering water (double boiler method), making sure the bottom of the bowl doesn't touch the water. Whisk constantly until the mixture thickens slightly, about 5-7 minutes. Remove from heat and let it cool slightly.</li>
      <li>Add the softened mascarpone cheese to the egg yolk mixture and whisk until smooth and well combined. Set aside.</li>
      <li>In a separate bowl, whip the heavy cream until stiff peaks form.</li>
      <li>Gently fold the whipped cream into the mascarpone mixture until fully incorporated. Be careful not to deflate the whipped cream.</li>
      <li>In a shallow dish, mix the cooled espresso with the rum or coffee liqueur (if using).</li>
      <li>Quickly dip each ladyfinger biscuit into the espresso mixture, ensuring they are soaked but not soggy. Arrange a layer of soaked ladyfingers in the bottom of a 9x13-inch dish or a similar-sized serving dish.</li>
      <li>Spread half of the mascarpone mixture evenly over the layer of ladyfingers.</li>
      <li>Repeat with another layer of soaked ladyfingers and the remaining mascarpone mixture.</li>
      <li>Cover the dish with plastic wrap and refrigerate for at least 4 hours, or preferably overnight, to allow the flavors to meld and the tiramisu to set.</li>
      <li>Before serving, sift a generous amount of unsweetened cocoa powder over the top of the tiramisu.</li>
      <li>Slice and serve the tiramisu chilled, enjoying the rich, creamy layers and the delicate balance of flavors with each spoonful. Buon appetito!</li>
    </ol>

  </body>
</html>
```
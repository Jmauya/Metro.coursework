const cheap = products.find((p) => p.price < 500);
if (cheap) console.log(cheap.name);
else console.log("No product under 500 taka");

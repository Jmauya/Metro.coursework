const text = JSON.stringify(obj);                               // pack: object -> string
const text = JSON.stringify(obj, null, 2);                     // pack, pretty (2-space indent)
const obj = JSON.parse(text);                                 // unpack: string -> object
const post = { title: "Hello", likes: 12, tags: ["js"] };
const packed = JSON.stringify(post);
console.log(packed);

// {"title":"Hello","likes":12,"tags":["js"]} 

console.log(typeof packed);                   // string — just text now
const unpacked = JSON.parse(packed);
console.log(unpacked.likes + 1);            // 13 — a live object again

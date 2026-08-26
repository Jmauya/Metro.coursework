const { key1, key2 } = obj;                                  // pick by name
const { key: newName } = obj;                               // pick and rename
const { key = defaultValue } = obj;                        // default if undefined
const { outer: { inner } } = obj;                         // reach into nesting
const { key, ...rest } = obj;                            // the rest, as an object
const user = {
 name: "Nabila", role: "admin", city: "Sylhet",
 social: { github: "nabila-dev" },
};
25
const { name, role } = user;
const { city: hometown } = user;                        // rename
const { country = "Bangladesh" } = user;               // default
const { social: { github } } = user;                  // nested
const { role: r, ...publicInfo } = user;             // rest
console.log(name, hometown, country, github);
// Nabila Sylhet Bangladesh nabila-dev

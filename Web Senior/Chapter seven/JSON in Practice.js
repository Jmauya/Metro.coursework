// A typical parsed API response:
const response = {
 status: "success",
 data: {
 user: { id: 7, name: "Nabila" },
 posts: [
 { id: 101, title: "First post", likes: 4 },
 { id: 102, title: "Learning JS", likes: 12 },
 ],
 },
};
const userName = response.data?.user?.name ?? "Guest";
const titles = response.data?.posts?.map((p) => p.title) ?? [];
const totalLikes =
 response.data?.posts?.reduce((s, p) => s + p.likes, 0) ?? 0;
console.log(userName, titles, totalLikes);

// Nabila ["First post","Learning JS"] 16
// The localStorage save/load pattern:

const settings = { theme: "dark", fontSize: 16 };
localStorage.setItem("settings", JSON.stringify(settings));
const loaded =
 safeParse(localStorage.getItem("settings")) ?? { theme: "light" };
console.log(loaded.theme); // dark

const topTitle = response.data?.posts
 ?.reduce((best, p) => (p.likes > best.likes ? p : best))
 ?.title;
console.log(topTitle); // "Learning JS"

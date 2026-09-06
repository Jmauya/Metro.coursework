function safeParse(text, fallback = null) {
 try { return JSON.parse(text); }
 catch { return fallback; }
}
console.log(safeParse('{"ok":1}')); // { ok: 1 }
console.log(safeParse("nonsense", {})); // {}

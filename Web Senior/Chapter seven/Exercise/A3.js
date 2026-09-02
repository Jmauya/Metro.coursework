const cfg = {};
cfg.mode = "test"; console.log("mode" in cfg); // true
cfg.mode = "live"; console.log(cfg.mode); // live
delete cfg.mode; console.log("mode" in cfg); // false

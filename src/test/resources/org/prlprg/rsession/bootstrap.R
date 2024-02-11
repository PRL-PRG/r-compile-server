basevars <- ls("package:base", all.names = TRUE)
types <- sapply(basevars, \(x) typeof(get(x)))

saveRDS(basevars[types == "special"], "specials.RDS")
saveRDS(basevars[types == "builtin"], "builtins.RDS")
saveRDS(basevars, "base.RDS")

saveRDS(builtins(internal = TRUE), "builtins-internal.RDS")

basevars <- ls("package:base", all.names = TRUE)
types <- sapply(basevars, \(x) typeof(get(x)))

print(types)

saveRDS(basevars[types == "special"], "specials.RDS")
saveRDS(basevars[types == "builtin"], "builtins.RDS")

base_env_funs <- basevars[types == "closure" | types == "special" | types == "builtin"]
base_env <- sapply(base_env_funs, get)
base_env <- as.environment(base_env)

saveRDS(basevars, "basevars.RDS")

saveRDS(base_env, "baseenv.RDS")

saveRDS(builtins(internal = TRUE), "builtins-internal.RDS")

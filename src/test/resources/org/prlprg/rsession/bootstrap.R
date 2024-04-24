basevars <- ls("package:base", all.names = TRUE)
types <- sapply(basevars, \(x) typeof(get(x)))

saveRDS(basevars[types == "special"], "specials.RDS", version = 2)
saveRDS(basevars[types == "builtin"], "builtins.RDS", version = 2)

builtin_internals <- builtins(internal = TRUE)

base_env_funs <- basevars[types == "closure" | types == "special" | types == "builtin"]
# base_env <- sapply(base_env_funs, get)
base_env <- sapply(base_env_funs, \(x) if (x %in% builtin_internals) get(x) else as.function(c(formals(get(x)), list(NULL))))
base_env <- as.environment(base_env)

saveRDS(basevars, "basevars.RDS", version = 2)

saveRDS(base_env, "baseenv.RDS", version = 2)

saveRDS(builtins(internal = TRUE), "builtins-internal.RDS", version = 2)

basenamespace <- getNamespace("base")
base_closures <- basevars[types == "closure"]
base_closures <- base_closures[sapply(base_closures, \(x) identical(environment(get(x)), basenamespace))]

cat("saving ", length(base_closures), " closures\n")
saveRDS(base_closures, "base-closures.RDS", version = 2)
basevars <- ls("package:base", all.names = TRUE)
types <- sapply(basevars, \(x) typeof(get(x)))

specials <- basevars[types == "special"]
cat("saving ", length(specials), " specials\n")
saveRDS(specials, "specials.RDS", version = 2)

builtins <- basevars[types == "builtin"]
cat("saving ", length(builtins), " builtins\n")
saveRDS(builtins, "builtins.RDS", version = 2)

builtin_internals <- builtins(internal = TRUE)
simple_builtin_internals <- builtin_internals[sapply(builtin_internals, \(x) .Internal(is.builtin.internal(as.name(x))))]
cat("saving ", length(simple_builtin_internals), " builtin internals\n")
saveRDS(simple_builtin_internals, "builtins-internal.RDS", version = 2)

base_env_funs <- basevars[sapply(basevars, \(x) is.function(get(x)))]
base_env <- sapply(base_env_funs, \(x) if (x %in% builtin_internals) get(x) else as.function(c(formals(get(x)), list(NULL))))
base_env <- as.environment(base_env)

cat("saving ", length(basevars), " base variables\n")
saveRDS(basevars, "basevars.RDS", version = 2)

cat("saving ", length(base_env), " baseenv symbols\n")
saveRDS(base_env, "baseenv.RDS", version = 2)

base_namespace <- getNamespace("base")
base_closures <- basevars[types == "closure"]
base_closures <- base_closures[sapply(base_closures, \(x) identical(environment(get(x)), base_namespace))]

cat("saving ", length(base_closures), " closures\n")
saveRDS(base_closures, "base-closures.RDS", version = 2)
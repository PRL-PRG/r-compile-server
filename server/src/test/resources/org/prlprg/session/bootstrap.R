basevars <- ls("package:base", all.names = TRUE)
types <- sapply(basevars, \(x) typeof(get(x)))

specials <- basevars[types == "special"]
cat("saving ", length(specials), " specials\n")
saveRDS(specials, "specials.RDS", version = 2)

builtins <- basevars[types == "builtin"]
cat("saving ", length(builtins), " builtins\n")
saveRDS(builtins, "builtins.RDS", version = 2)

builtin_internals <- unique(c(builtins(), builtins(internal = TRUE)))
builtin_internals_black_list <- c("kronecker", ".dynLibs", "body<-")
builtin_internals <- setdiff(builtin_internals, builtin_internals_black_list)
simple_builtin_internals <- builtin_internals[sapply(builtin_internals, \(x) .Internal(is.builtin.internal(as.name(x))))]
cat("saving ", length(simple_builtin_internals), " builtin internals\n")
saveRDS(simple_builtin_internals, "builtins-internal.RDS", version = 2)

base_env_funs <- basevars[sapply(basevars, \(x) is.function(get(x)))]
base_env_funs <- setdiff(base_env_funs, builtin_internals_black_list)
base_env <- sapply(base_env_funs, \(x) if (x %in% builtin_internals) get(x) else as.function(c(formals(get(x)), list(NULL))))
base_env <- as.environment(base_env)
base_env$pi <- pi
base_env$T <- T
base_env$F <- F

cat("saving ", length(basevars), " base variables\n")
saveRDS(basevars, "basevars.RDS", version = 2)

cat("saving ", length(base_env), " baseenv symbols\n")
saveRDS(base_env, "baseenv.RDS", version = 2)

# moved to CompilerTest.RDS
# list_functions <- function(name) {
#     namespace <- getNamespace(name)
#     p <- function(x) {
#       f <- get(x, envir=namespace)
#       is.function(f) && identical(environment(f), namespace)
#     }
#     Filter(p, ls(namespace, all.names = TRUE))
# }
#
# pkgs <- c("base", "tools", "utils", "graphics", "methods", "stats")
# funs <- sapply(pkgs, \(x) paste0(x, ":::`", list_functions(x), "`"))
# funs <- do.call(c, funs)
# cat("saving", length(funs), "functions\n")
# saveRDS(funs, "functions.RDS", version = 2)

dyn.load("export-funtab.so")
.Call("export_funtab", "R_FunTab.txt")

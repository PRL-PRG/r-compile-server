#? stdlib
`.make_S3_primitive_generic_env` <- function (parent = parent.frame(), fixup = FALSE) 
{
    env <- list2env(as.list(base::.GenericArgsEnv, all.names = TRUE), 
        hash = TRUE, parent = parent)
    if (fixup) {
        for (f in c("+", "-", "*", "/", "^", "%%", "%/%", "&", 
            "|", "==", "!=", "<", "<=", ">=", ">")) {
            fx <- get(f, envir = env)
            formals(fx) <- alist(x = , y = )
            assign(f, fx, envir = env)
        }
    }
    env
}

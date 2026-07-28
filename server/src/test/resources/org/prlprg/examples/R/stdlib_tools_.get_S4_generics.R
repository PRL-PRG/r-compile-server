#? stdlib
`.get_S4_generics` <- function (env) 
{
    env <- as.environment(env)
    g <- suppressMessages(methods::getGenerics(env))
    y <- Map(function(f, p) {
        attr(f, "package") <- p
        f
    }, g@.Data, g@package)
    names(y) <- g@.Data
    y
}

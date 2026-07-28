#? stdlib
`.getGenericSigArgs` <- function (fdef, env = environment(fdef), check = TRUE) 
{
    if (check && !exists(".SigLength", envir = env, inherits = FALSE)) 
        .setupMethodsTables(fdef)
    n <- get(".SigLength", envir = env)
    args <- get(".SigArgs", envir = env)
    length(args) <- n
    args
}

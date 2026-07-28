#? stdlib
`.getGenericSigLength` <- function (fdef, env = environment(fdef), check = TRUE) 
{
    if (check && !exists(".SigLength", envir = env, inherits = FALSE)) 
        .setupMethodsTables(fdef)
    get(".SigLength", envir = env)
}

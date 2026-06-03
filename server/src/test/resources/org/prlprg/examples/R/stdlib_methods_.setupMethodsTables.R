#? stdlib
`.setupMethodsTables` <- function (generic, initialize = !exists(".MTable", envir = env, 
    inherits = FALSE)) 
{
    env <- environment(generic)
    if (initialize || !exists(".SigLength", envir = env, inherits = FALSE)) {
        nsig <- 1
        for (gp in generic@group) {
            gpDef <- getGeneric(gp)
            if (is(gpDef, "genericFunction")) {
                .getMethodsTable(gpDef)
                nsig <- max(nsig, get(".SigLength", envir = environment(gpDef)))
            }
        }
        assign(".SigLength", nsig, envir = env)
    }
    argSyms <- lapply(generic@signature, as.name)
    assign(".SigArgs", argSyms, envir = env)
    if (initialize) {
        mtable <- generic@default
        mtable <- .mtableAddToTable(generic, mtable)
        assign(".MTable", mtable, envir = env)
    }
    else mtable <- getMethodsForDispatch(generic)
    .resetInheritedMethods(env, mtable)
    if (is(generic, "groupGenericFunction")) {
        for (gp in generic@groupMembers) {
            gpDef <- getGeneric(gp)
            if (is(gpDef, "genericFunction")) 
                .getMethodsTable(gpDef)
        }
    }
    NULL
}

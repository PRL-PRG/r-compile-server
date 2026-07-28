#? stdlib
`.guessPackageName` <- function (env) 
{
    allObjects <- names(env)
    allObjects <- allObjects[is.na(match(allObjects, .functionsOverriden))]
    possible <- sort(table(unlist(lapply(allObjects, utils::find))), 
        decreasing = TRUE)
    if (length(possible) == 0) 
        stop("none of the objects in the source code could be found:  need to attach or specify the package")
    else if (length(possible) > 1L) {
        global <- match(".GlobalEnv", names(possible), 0)
        if (global > 0) {
            possible <- possible[-global]
        }
        if (length(possible) > 1L) 
            warning(gettextf("objects found in multiple packages: using %s and ignoring %s", 
                sQuote(names(possible[[1L]])), paste(sQuote(names(possible[-1L])), 
                  collapse = ", ")), domain = NA)
    }
    .rmpkg(names(possible[1L]))
}

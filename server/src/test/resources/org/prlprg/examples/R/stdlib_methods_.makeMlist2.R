#? stdlib
`.makeMlist2` <- function (args, objects, j = 1) 
{
    .MlistDefunct(".makeMlist2()")
    mlists <- list()
    for (what in objects) {
        sig <- if (!is.primitive(what)) 
            what@defined
        if (length(sig) <= j) 
            arg1 <- arg2 <- "ANY"
        else {
            arg1 <- sig[[j]]
            arg2 <- sig[[j + 1]]
        }
        x <- list(what)
        el <- mlists[[arg1, exact = TRUE]]
        mlists[[arg1]] <- (if (is.null(el)) 
            x
        else c(el, x))
    }
    jNext <- j + 1
    if (jNext < length(args)) 
        for (i in seq_along(mlists)) mlists[[i]] <- .makeMlist2(args, 
            mlists[[i]], jNext)
    else {
        arg2 <- as.name(args[[jNext]])
        for (i in seq_along(mlists)) mlists[[i]] <- .makeMlist1(arg2, 
            mlists[[i]], jNext)
    }
    new("MethodsList", argument = as.name(args[[1L]]), methods = mlists, 
        allMethods = mlists)
}

#? stdlib
`balanceMethodsList` <- function (mlist, args, check = TRUE) 
{
    .MlistDefunct("balanceMethodsList()")
    moreArgs <- args[-1L]
    if (length(moreArgs) == 0L) 
        return(mlist)
    methods <- mlist@methods
    if (check && length(methods)) {
        depth <- 0
        el <- methods[[1L]]
        while (is(el, "MethodsList")) {
            mm <- el@methods
            if (length(mm) == 0L) 
                break
            depth <- depth + 1L
            el <- mm[[1L]]
        }
        if (depth >= length(args)) 
            return(mlist)
    }
    for (i in seq_along(methods)) {
        el <- methods[[i]]
        if (is(el, "MethodsList")) 
            el <- Recall(el, moreArgs, FALSE)
        else {
            if (is(el, "MethodDefinition")) {
                el@target[moreArgs] <- "ANY"
                el@defined[moreArgs] <- "ANY"
            }
            for (what in rev(moreArgs)) el <- new("MethodsList", 
                argument = as.name(what), methods = list(ANY = el))
        }
        methods[[i]] <- el
    }
    mlist@methods <- methods
    mlist
}

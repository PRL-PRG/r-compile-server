#? stdlib
`insertMethod` <- function (mlist, signature, args, def, cacheOnly = FALSE) 
{
    .MlistDefunct("insertMethod()")
    if (.noMlists() && !identical(unique(signature), "ANY")) 
        return(mlist)
    if (identical(args[1L], "...") && !identical(names(signature), 
        "...")) {
        if (identical(signature[[1L]], "ANY")) 
            stop(gettextf("inserting method with invalid signature matching argument '...' to class %s", 
                dQuote(signature[[1L]])), domain = NA)
        args <- args[-1L]
        signature <- signature[-1L]
        if (length(signature) == 0L) 
            return(mlist)
    }
    if (length(signature) == 0L) 
        stop("inserting method corresponding to empty signature")
    if (!is(mlist, "MethodsList")) 
        stop(gettextf("inserting method into non-methods-list object (class %s)", 
            dQuote(.class1(mlist))), domain = NA)
    if (length(args) > 1 && !cacheOnly) 
        mlist <- balanceMethodsList(mlist, args)
    Class <- signature[[1]]
    methods <- if (cacheOnly) 
        mlist@allMethods
    else mlist@methods
    current <- methods[[Class]]
    if (is(current, "MethodsList")) {
        nextArg <- as.character(current@argument)
        sigArgs <- args
        n <- length(signature)
        length(sigArgs) <- n
        if (is.na(match(nextArg, sigArgs))) {
            n <- match(nextArg, args) - n
            if (is.na(n)) {
                n <- 1
                args <- c(args, nextArg)
            }
            signature <- c(signature, rep("ANY", n))
        }
    }
    if (length(signature) == 1) {
        if (is.null(current)) {
            if (!is.null(def)) 
                methods[[Class]] <- def
        }
        else {
            which <- match(Class, names(methods))
            if (is.null(def)) 
                methods <- methods[-which]
            else methods[[which]] <- def
        }
    }
    else {
        if (is.null(current)) 
            current <- new("MethodsList", argument = as.name(args[2L]))
        else if (is.function(current)) 
            current <- new("MethodsList", argument = as.name(args[2L]), 
                methods = list(ANY = current))
        methods[[Class]] <- Recall(current, signature[-1L], args[-1L], 
            def, cacheOnly)
    }
    mlist@allMethods <- methods
    if (!cacheOnly) 
        mlist@methods <- methods
    mlist
}

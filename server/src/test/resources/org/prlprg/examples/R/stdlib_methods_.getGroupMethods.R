#? stdlib
`.getGroupMethods` <- function (labels, generics, found) 
{
    methods <- list()
    for (i in seq_along(generics)) {
        gen <- generics[[i]]
        if (!is(gen, "genericFunction")) 
            stop(gettextf("invalid group generic function in search for inherited method (class %s)", 
                dQuote(class(gen))), domain = NA)
        table <- .getMethodsTable(gen)
        allMethods <- sort(names(table))
        newFound <- rep(FALSE, length(found))
        newFound[!found] <- labels[!found] %in% allMethods
        found <- found | newFound
        methods[labels[newFound]] <- mget(labels[newFound], table)
    }
    methods
}

#? stdlib
`setLoadActions` <- function (..., .where = topenv(parent.frame())) 
{
    actionListName <- .actionMetaName("")
    currentAnames <- .assignActionListNames(.where)
    actions <- list(...)
    anames <- allNames(actions)
    previous <- anames %in% currentAnames
    if (any(previous)) {
        .assignActions(actions[previous], anames[previous], .where)
        if (all(previous)) 
            return(list())
        anames <- anames[!previous]
        actions <- actions[!previous]
    }
    anon <- !nzchar(anames)
    if (any(anon)) {
        n <- length(currentAnames)
        deflts <- paste0(".", seq(from = n + 1, length.out = length(actions)))
        anames[anon] <- deflts[anon]
    }
    .assignActions(actions, anames, .where)
    assign(actionListName, c(currentAnames, anames), envir = .where)
}

# Examples



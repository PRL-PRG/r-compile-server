#? stdlib
`getGroup` <- function (fdef, recursive = FALSE, where = topenv(parent.frame())) 
{
    if (is.character(fdef)) 
        fdef <- getGeneric(fdef, where = where)
    if (is(fdef, "genericFunction")) 
        group <- fdef@group
    else group <- list()
    if (recursive && length(group)) {
        allGroups <- group
        for (gp in group) {
            fgp <- getGeneric(gp, where = where)
            if (is(fgp, "groupGenericFunction")) 
                allGroups <- c(allGroups, Recall(fgp, TRUE, where))
        }
        if (length(allGroups) > 1L) {
            ids <- sapply(allGroups, function(x) {
                pkg <- packageSlot(x)
                if (is.null(pkg)) 
                  x
                else paste(x, pkg, sep = ":")
            })
            allGroups <- allGroups[!duplicated(ids)]
        }
        allGroups
    }
    else group
}

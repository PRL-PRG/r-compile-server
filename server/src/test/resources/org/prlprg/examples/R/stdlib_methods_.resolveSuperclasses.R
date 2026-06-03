#? stdlib
`.resolveSuperclasses` <- function (classDef, ext, where, conflicts = attr(ext, "conflicts")) 
{
    .condExts <- function(contains) vapply(contains, function(x) is(x, 
        "conditionalExtension"), NA)
    .noncondExtsClass <- function(cl) {
        if (isClass(cl, where = where)) {
            contains <- getClass(cl, where = where)@contains
            names(contains)[!.condExts(contains)]
        }
        else cl
    }
    what <- names(ext)
    dups <- unique(what[duplicated(what)])
    if (length(dups) > 0) {
        affected <- match(what, dups, 0) > 0
        conditionals <- .condExts(ext)
        if (any(conditionals)) {
            affected[conditionals] <- FALSE
            what2 <- what[affected]
            dups <- unique(what2[duplicated(what2)])
            if (length(dups) == 0) {
                if (length(conflicts) > 0) 
                  attr(ext, "conflicts") <- unique(c(conflicts, 
                    attr(ext, "conflicts")))
                return(ext)
            }
        }
        directSupers <- vapply(classDef@contains, function(x) identical(x@distance, 
            1), NA)
        directSupers <- unique(names(classDef@contains[directSupers]))
        superExts <- lapply(directSupers, .noncondExtsClass)
        names(superExts) <- directSupers
        retain = .choosePos(classDef@className, what, superExts, 
            affected)
        if (is.list(retain)) {
            these <- retain[[2]]
            conflicts <- unique(c(conflicts, these))
            retain <- retain[[1]]
        }
        affected[retain] <- FALSE
        ext <- ext[!affected]
    }
    attr(ext, "conflicts") <- conflicts
    ext
}

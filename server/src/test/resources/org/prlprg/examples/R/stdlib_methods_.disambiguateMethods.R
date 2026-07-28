#? stdlib
`.disambiguateMethods` <- function (target, which, generic, methods, supersList, fromGroup, 
    classDefs, verbose) 
{
    candidates <- methods[which]
    note <- character()
    which2 <- .leastMethodDistance(candidates, supersList, classDefs, 
        fromGroup[which])
    if (length(which2) < length(which)) {
        note <- c(sprintf(ngettext(which2, "Selecting %d method of minimum distance", 
            "Selecting %d methods of minimum distance"), which2))
        which <- which[which2]
    }
    if (length(which) > 1 && any(fromGroup[which]) && !all(fromGroup[which])) {
        which <- which[!fromGroup]
        note <- c(note, sprintf(ngettext(length(which), "Selecting %d non-group method", 
            "Selecting %d non-group methods"), length(which)))
    }
    if (length(which) > 1) {
        direct <- vapply(methods[which], function(x, target) (is(x, 
            "MethodDefinition") && any(target == x@defined)), 
            NA, target = target)
        if (any(direct) && !all(direct)) {
            which <- which[direct]
            note <- c(note, sprintf(ngettext(length(which), "Selecting %d partially exact-matching method", 
                "Selecting %d partially exact-matching methods"), 
                length(which)))
        }
    }
    which <- which[[1L]]
    if (identical(as.character(generic), "coerce")) 
        return(which)
    selected <- names(methods)[[which]]
    msg <- sprintf(ngettext(length(candidates), "Choosing method %s from %d ambiguous possibility", 
        "Choosing method %s from %d ambiguous possibilities"), 
        sQuote(selected), length(candidates))
    condObject <- simpleCondition(msg)
    class(condObject) <- c("ambiguousMethodSelection", class(condObject))
    attributes(condObject) <- c(attributes(condObject), list(candidates = names(candidates), 
        target = .sigLabel(target), selected = selected, generic = generic, 
        notes = if (length(note)) paste(note, collapse = "; ") else ""))
    if (verbose) 
        cat("   .disambiguateM*(): notes =\n\t", attr(condObject, 
            "notes"), "\n")
    signalCondition(condObject)
    which
}

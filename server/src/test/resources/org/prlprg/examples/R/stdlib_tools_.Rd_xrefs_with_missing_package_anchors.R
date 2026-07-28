#? stdlib
`.Rd_xrefs_with_missing_package_anchors` <- function (dir, level = 1) 
{
    db <- Rd_db(dir = dir)
    if (!length(db)) 
        return()
    aliases <- lapply(db, .Rd_get_metadata, "alias")
    rdxrefs <- lapply(db, .Rd_get_xrefs)
    rdxrefs <- cbind(do.call(rbind, rdxrefs), Source = rep.int(names(rdxrefs), 
        vapply(rdxrefs, NROW, 0L)))
    anchors <- rdxrefs[, "Anchor"]
    if (any(ind <- startsWith(anchors, "="))) 
        rdxrefs[ind, 1L:2L] <- cbind(sub("^=", "", anchors[ind]), 
            "")
    rdxrefs <- rdxrefs[!nzchar(rdxrefs[, "Anchor"]), , drop = FALSE]
    aliases <- c(unlist(aliases, use.names = FALSE), names(findHTMLlinks(level = level)))
    if (any(ind <- is.na(match(rdxrefs[, "Target"], aliases)))) 
        unique(rdxrefs[ind, , drop = FALSE])
    else NULL
}

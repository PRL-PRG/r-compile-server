#? stdlib
`check_details_changes` <- function (new, old, outputs = FALSE) 
{
    check_details_changes_classes <- c("check_details_changes", 
        "data.frame")
    if (!inherits(new, "check_details")) 
        stop("wrong class")
    if (!inherits(old, "check_details")) 
        stop("wrong class")
    packages <- intersect(old$Package, new$Package)
    if (!length(packages)) {
        db <- list2DF(list(Package = character(), Check = character(), 
            Old = character(), New = character()))
        class(db) <- check_details_changes_classes
        return(db)
    }
    db <- merge(old[!is.na(match(old$Package, packages)), ], 
        new[!is.na(match(new$Package, packages)), ], by = c("Package", 
            "Check"), all = TRUE)
    chunks <- lapply(split(db, db$Package), function(e) {
        len <- nrow(e)
        if (length(pos <- which(!is.na(e$Version.x)))) 
            e$Version.x <- rep.int(e[pos[1L], "Version.x"], len)
        if (length(pos <- which(!is.na(e$Version.y)))) 
            e$Version.y <- rep.int(e[pos[1L], "Version.y"], len)
        e
    })
    db <- do.call(rbind, chunks)
    x.issue <- !is.na(match(db$Status.x, c("NOTE", "WARNING", 
        "ERROR", "FAILURE")))
    y.issue <- !is.na(match(db$Status.y, c("NOTE", "WARNING", 
        "ERROR", "FAILURE")))
    db <- db[x.issue | y.issue, ]
    sx <- as.character(db$Status.x)
    sy <- as.character(db$Status.y)
    if (outputs) {
        ind <- nzchar(ox <- db$Output.x)
        sx[ind] <- sprintf("%s\n  %s", sx[ind], gsub("\n", "\n  ", 
            ox[ind], fixed = TRUE))
        ind <- nzchar(oy <- db$Output.y)
        sy[ind] <- sprintf("%s\n  %s", sy[ind], gsub("\n", "\n  ", 
            oy[ind], fixed = TRUE))
    }
    sx[is.na(db$Status.x)] <- ""
    sy[is.na(db$Status.y)] <- ""
    ind <- if (outputs) 
        (.canonicalize_quotes(sx) != .canonicalize_quotes(sy))
    else (sx != sy)
    db <- cbind(db[ind, ], Old = sx[ind], New = sy[ind], stringsAsFactors = FALSE)
    ind <- (db$Version.x != db$Version.y)
    if (any(ind)) 
        db$Package[ind] <- sprintf("%s [Old version: %s, New version: %s]", 
            db$Package[ind], db$Version.x[ind], db$Version.y[ind])
    db <- db[c("Package", "Check", "Old", "New")]
    class(db) <- check_details_changes_classes
    db
}

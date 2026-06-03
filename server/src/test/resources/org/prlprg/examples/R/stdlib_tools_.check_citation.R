#? stdlib
`.check_citation` <- function (cfile, dir = NULL) 
{
    cfile <- file_path_as_absolute(cfile)
    if (!is.null(dir)) {
        meta <- utils::packageDescription(basename(dir), dirname(dir))
        db <- .read_citation_quietly(cfile, meta)
        if (inherits(db, "error")) {
            msg <- conditionMessage(db)
            call <- conditionCall(db)
            if (is.null(call)) 
                msg <- c("Error: ", msg)
            else msg <- c("Error in ", deparse(call), ": ", msg)
            writeLines(paste(msg, collapse = ""))
        }
        return(invisible())
    }
    meta <- if (basename(dir <- dirname(cfile)) == "inst") 
        as.list(.get_package_metadata(dirname(dir)))
    else NULL
    db <- tryCatch(suppressMessages(get_CITATION_entry_fields(cfile, 
        meta$Encoding)), error = identity)
    if (inherits(db, "error")) {
        writeLines(conditionMessage(db))
        return(invisible())
    }
    if (!NROW(db)) 
        return(invisible())
    bad <- Map(find_missing_required_BibTeX_fields, db$Entry, 
        db$Fields, USE.NAMES = FALSE)
    ind <- vapply(bad, identical, NA_character_, FUN.VALUE = NA)
    if (length(pos <- which(ind))) {
        entries <- db$Entry[pos]
        entries <- ifelse(nchar(entries) < 20L, entries, paste(substr(entries, 
            1L, 20L), "[TRUNCATED]"))
        writeLines(sprintf("entry %d: invalid type %s", pos, 
            sQuote(entries)))
    }
    pos <- which(!ind & (lengths(bad) > 0L))
    if (length(pos)) {
        writeLines(strwrap(sprintf("entry %d (%s): missing required field(s) %s", 
            pos, db$Entry[pos], vapply(bad[pos], function(s) paste(sQuote(s), 
                collapse = ", "), "")), indent = 0L, exdent = 2L))
    }
}

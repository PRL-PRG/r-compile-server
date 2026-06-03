#? stdlib
`native_routine_registration_db_from_ff_call_db` <- function (calls, dir = NULL, character_only = TRUE) 
{
    if (!length(calls)) 
        return(NULL)
    ff_call_names <- c(".C", ".Call", ".Fortran", ".External", 
        ".Call.graphics", ".External.graphics", ".External2")
    ff_call_args <- lapply(ff_call_names, function(e) args(get(e, 
        baseenv())))
    names(ff_call_args) <- ff_call_names
    ff_call_args_names <- lapply(lapply(ff_call_args, function(e) names(formals(e))), 
        setdiff, "...")
    if (is.null(dir)) 
        dir <- attr(calls, "dir")
    package <- as.vector(.get_package_metadata(dir)["Package"])
    symbols <- character()
    nrdb <- lapply(calls, function(e) {
        if (startsWith(deparse(e[[1L]]), "base::")) 
            e[[1L]] <- e[[1L]][3L]
        pos <- which(unlist(Map(identical, lapply(e, as.character), 
            "...")))
        if (length(pos)) 
            e <- e[-pos]
        if (length(e) < 2L) 
            return(NULL)
        cname <- as.character(e[[1L]])
        nm <- names(e)
        nm[2L] <- ""
        names(e) <- nm
        e <- match.call(ff_call_args[[cname]], e)
        s <- e[[".NAME"]]
        t <- typeof(s)
        if (is.name(s)) {
            s <- deparse(s)[1L]
            if (character_only) {
                symbols <<- c(symbols, s)
                return(NULL)
            }
        }
        else if (is.character(s)) {
            s <- s[1L]
        }
        else {
            symbols <<- c(symbols, deparse(s))
            return(NULL)
        }
        if (!is.null(p <- e[["PACKAGE"]]) && is.character(p) && 
            !identical(p, package)) 
            return(NULL)
        n <- if (length(pos)) {
            -1L
        }
        else {
            sum(is.na(match(names(e), ff_call_args_names[[cname]]))) - 
                1L
        }
        cbind(cname, s, n, t)
    })
    nrdb <- do.call(rbind, nrdb)
    nrdb <- as.data.frame(unique(nrdb), stringsAsFactors = FALSE)
    if (NROW(nrdb) == 0L || length(nrdb) != 4L) {
        message("no native symbols were extracted")
        return(NULL)
    }
    nrdb[, 3L] <- as.numeric(nrdb[, 3L])
    nrdb <- nrdb[order(nrdb[, 1L], nrdb[, 2L], nrdb[, 3L]), ]
    nms <- nrdb[, "s"]
    dups <- unique(nms[duplicated(nms)])
    info <- parseNamespaceFile(basename(dir), dirname(dir))
    imports <- info$imports
    imports <- imports[lengths(imports) == 2L]
    imports <- unlist(lapply(imports, `[[`, 2L))
    info <- info$nativeRoutines[[package]]
    if (length(symnames <- info$symbolNames)) {
        ind <- match(nrdb[, 2L], names(symnames), nomatch = 0L)
        nrdb[ind > 0L, 2L] <- symnames[ind]
    }
    else if (!character_only && any((fixes <- info$registrationFixes) != 
        "")) {
        nrdb[, 2L] <- sub(paste0("^", fixes[1L]), "", nrdb[, 
            2L])
        if (nzchar(fixes[2L])) 
            nrdb[, 2L] <- sub(paste0(fixes[2L]), "$", "", nrdb[, 
                2L])
    }
    if (any(ind <- !is.na(match(nrdb[, 2L], imports)))) 
        nrdb <- nrdb[!ind, , drop = FALSE]
    dotF <- nrdb$cname == ".Fortran"
    nrdb[dotF, "s"] <- tolower(nrdb[dotF, "s"])
    attr(nrdb, "package") <- package
    attr(nrdb, "duplicates") <- dups
    attr(nrdb, "symbols") <- unique(symbols)
    nrdb
}

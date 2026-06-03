#? stdlib
`news` <- function (query, package = "R", lib.loc = NULL, format = NULL, 
    reader = NULL, db = NULL) 
{
    if (new.db <- is.null(db)) {
        db <- if (package == "R") 
            tools:::.build_news_db_from_R_NEWS_Rd()
        else if (package == "R-3") 
            tools:::.build_news_db_from_R_NEWS_Rd(Rfile = "NEWS.3.rds")
        else if (package == "R-2") 
            tools:::.build_news_db_from_R_NEWS_Rd(Rfile = "NEWS.2.rds")
        else tools:::.build_news_db(package, lib.loc, format, 
            reader)
    }
    if (is.null(db)) 
        return(NULL)
    if (new.db) 
        attr(db, "package") <- package
    if (missing(query)) 
        return(db)
    db1 <- db
    version <- db$Version
    pos <- regexpr(sprintf("^%s", .standard_regexps()$valid_numeric_version), 
        version)
    if (any(ind <- (pos > -1L))) 
        version[ind] <- substring(version[ind], 1L, attr(pos, 
            "match.length")[ind])
    db1$Version <- numeric_version(version, strict = FALSE)
    db1$Date <- as.Date(db$Date)
    r <- eval(substitute(query), db1, parent.frame())
    if (!is.null(r)) {
        if (!is.logical(r) || length(r) != length(version)) 
            stop("invalid query")
        r <- r & !is.na(r)
        db <- db[r, ]
        if (!all(r)) 
            attr(db, "subset") <- r
    }
    db
}

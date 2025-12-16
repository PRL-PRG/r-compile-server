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

# Examples
## Build a db of all R news entries.
db <- news()

  vv <- capture.output(print(db, doBrowse=FALSE))  # without an error
  stopifnot(is.character(vv), length(vv) >= 3) # was wrong (for weeks during devel.)
  html <- tools::toHTML(subset(db, is.na(Version))) # emulate doBrowse with query

## Bug fixes with PR number in 4.0.0.
db4 <- news(Version == "4.0.0" & grepl("^BUG", Category) & grepl("PR#", Text),
            db = db)
nrow(db4)
stopifnot(is.null(attr(db4, "bad")) && nrow(db4) == 25 )
## print db4 to show in an HTML browser.

## News from a date range ('Matrix' is there in a regular R installation):
if(length(iM <- find.package("Matrix", quiet = TRUE)) && nzchar(iM)) {
   dM <- news(package="Matrix")
   stopifnot(identical(dM, news(db=dM)))
   dM2014 <- news("2014-01-01" <= Date & Date <= "2014-12-31", db = dM)
   stopifnot(paste0("1.1-", 2:4) %in% dM2014[,"Version"])
}

## Which categories have been in use? % R-core maybe should standardize a bit more
sort(table(db[, "Category"]), decreasing = TRUE)
## Entries with version >= 4.0.0
table(news(Version >= "4.0.0", db = db)$Version)

\donttest{
## do the same for R 3.x.y, more slowly
db3 <- news(package = "R-3")
sort(table(db3[, "Category"]), decreasing = TRUE)
## Entries with version >= 3.6.0
table(news(Version >= "3.6.0", db = db3)$Version)
}


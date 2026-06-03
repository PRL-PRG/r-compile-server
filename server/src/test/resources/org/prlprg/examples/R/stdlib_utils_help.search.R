#? stdlib
`help.search` <- function (pattern, fields = c("alias", "concept", "title"), apropos, 
    keyword, whatis, ignore.case = TRUE, package = NULL, lib.loc = NULL, 
    help.db = getOption("help.db"), verbose = getOption("verbose"), 
    rebuild = FALSE, agrep = NULL, use_UTF8 = FALSE, types = getOption("help.search.types")) 
{
    .wrong_args <- function(args) gettextf("argument %s must be a character string", 
        sQuote(args))
    if (is.logical(verbose)) 
        verbose <- 2 * as.integer(verbose)
    fuzzy <- agrep
    if (!missing(pattern)) {
        if (!is.character(pattern) || (length(pattern) > 1L)) 
            stop(.wrong_args("pattern"), domain = NA)
        i <- pmatch(fields, hsearch_db_fields)
        if (anyNA(i)) 
            stop("incorrect field specification")
        else fields <- hsearch_db_fields[i]
    }
    else if (!missing(apropos)) {
        if (!is.character(apropos) || (length(apropos) > 1L)) 
            stop(.wrong_args("apropos"), domain = NA)
        else {
            pattern <- apropos
            fields <- c("alias", "title")
        }
    }
    else if (!missing(keyword)) {
        if (!is.character(keyword) || (length(keyword) > 1L)) 
            stop(.wrong_args("keyword"), domain = NA)
        else {
            pattern <- keyword
            fields <- "keyword"
            if (is.null(fuzzy)) 
                fuzzy <- FALSE
        }
    }
    else if (!missing(whatis)) {
        if (!is.character(whatis) || (length(whatis) > 1)) 
            stop(.wrong_args("whatis"), domain = NA)
        else {
            pattern <- whatis
            fields <- "alias"
        }
    }
    else {
        stop("do not know what to search")
    }
    if (!missing(help.db)) 
        warning("argument 'help.db' is deprecated")
    i <- pmatch(types, hsearch_db_types)
    if (anyNA(i)) 
        stop("incorrect type specification")
    else types <- hsearch_db_types[i]
    db <- hsearch_db(package, lib.loc, types, verbose, rebuild, 
        use_UTF8)
    lib.loc <- attr(db, "LibPaths")
    if (!identical(sort(types), sort(attr(db, "Types")))) {
        db$Base <- db$Base[!is.na(match(db$Base$Type, types)), 
            ]
        db[-1L] <- lapply(db[-1L], function(e) {
            e[!is.na(match(e$ID, db$Base$ID)), ]
        })
    }
    if (!is.null(package)) {
        pos_in_hsearch_db <- match(package, unique(db$Base[, 
            "Package"]), nomatch = 0L)
        if (any(pos_in_hsearch_db) == 0L) 
            stop(gettextf("no information in the database for package %s: need 'rebuild = TRUE'?", 
                sQuote(package[pos_in_hsearch_db == 0][1L])), 
                domain = NA)
        db[] <- lapply(db, function(e) {
            e[!is.na(match(e$Package, package)), ]
        })
    }
    if (verbose >= 2L) {
        message("Database of ", NROW(db$Base), " help objects (", 
            NROW(db$Aliases), " aliases, ", NROW(db$Concepts), 
            " concepts, ", NROW(db$Keywords), " keywords)", domain = NA)
        flush.console()
    }
    if (!length(db$Base)) 
        return(invisible())
    if (is.null(fuzzy) || is.na(fuzzy)) 
        fuzzy <- (grepl("^([[:alnum:]]|[[:space:]]|-)+$", pattern) && 
            (nchar(pattern, type = "c") > 4L))
    if (is.logical(fuzzy)) {
        if (fuzzy) 
            max.distance <- 0.1
    }
    else if (is.numeric(fuzzy) || is.list(fuzzy)) {
        max.distance <- fuzzy
        fuzzy <- TRUE
    }
    else stop("incorrect 'agrep' specification")
    dbBase <- db$Base
    search_fun <- if (fuzzy) {
        function(x) {
            agrep(pattern, x, ignore.case = ignore.case, max.distance = max.distance)
        }
    }
    else {
        function(x) {
            grep(pattern, x, ignore.case = ignore.case, perl = use_UTF8)
        }
    }
    search_db_results <- function(p, f, e) list2DF(list(Position = p, 
        Field = f, Entry = e))
    search_db_field <- function(field) {
        switch(field, alias = {
            aliases <- db$Aliases$Alias
            matched <- search_fun(aliases)
            search_db_results(match(db$Aliases$ID[matched], dbBase$ID), 
                rep.int(field, length(matched)), aliases[matched])
        }, concept = {
            concepts <- db$Concepts$Concept
            matched <- search_fun(concepts)
            search_db_results(match(db$Concepts$ID[matched], 
                dbBase$ID), rep.int(field, length(matched)), 
                concepts[matched])
        }, keyword = {
            keywords <- db$Keywords$Keyword
            matched <- search_fun(keywords)
            search_db_results(match(db$Keywords$ID[matched], 
                dbBase$ID), rep.int(field, length(matched)), 
                keywords[matched])
        }, name = {
            matched <- search_fun(dbBase$Name)
            search_db_results(matched, rep.int("Name", length(matched)), 
                dbBase$Name[matched])
        }, title = {
            matched <- search_fun(dbBase$Title)
            search_db_results(matched, rep.int("Title", length(matched)), 
                dbBase$Title[matched])
        })
    }
    matches <- NULL
    for (f in fields) matches <- rbind(matches, search_db_field(f))
    matches <- matches[order(matches$Position), ]
    db <- cbind(dbBase[matches$Position, c("Topic", "Title", 
        "Name", "ID", "Package", "LibPath", "Type"), drop = FALSE], 
        matches[c("Field", "Entry")])
    rownames(db) <- NULL
    if (verbose >= 2L) {
        n_of_objects_matched <- length(unique(db[, "ID"]))
        message(sprintf(ngettext(n_of_objects_matched, "matched %d object.", 
            "matched %d objects."), n_of_objects_matched), domain = NA)
        flush.console()
    }
    y <- list(pattern = pattern, fields = fields, type = if (fuzzy) "fuzzy" else "regexp", 
        agrep = agrep, ignore.case = ignore.case, types = types, 
        package = package, lib.loc = lib.loc, matches = db)
    class(y) <- "hsearch"
    y
}

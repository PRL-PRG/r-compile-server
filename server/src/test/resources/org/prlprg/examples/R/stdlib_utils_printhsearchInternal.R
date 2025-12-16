#? stdlib
`printhsearchInternal` <- function (x, ...) 
{
    help_type <- getOption("help_type", default = "text")
    types <- x$types
    if (help_type == "html") {
        browser <- getOption("browser")
        port <- tools::startDynamicHelp(NA)
        if (port > 0L) {
            tools:::.httpd_objects(port, x)
            url <- sprintf("http://127.0.0.1:%d/doc/html/Search?objects=1&port=%d", 
                port, port)
            browseURL(url, browser)
            return(invisible(x))
        }
    }
    hfields <- paste(x$fields, collapse = " or ")
    vfieldnames <- c(alias = "name", concept = "keyword", keyword = NA, 
        name = "name", title = "title")
    vfieldnames <- vfieldnames[x$fields]
    vfields <- paste(unique(vfieldnames[!is.na(vfieldnames)]), 
        collapse = " or ")
    dfieldnames <- c(alias = "name", concept = NA, keyword = NA, 
        name = "name", title = "title")
    dfieldnames <- dfieldnames[x$fields]
    dfields <- paste(unique(dfieldnames[!is.na(dfieldnames)]), 
        collapse = " or ")
    fields_used <- list(help = hfields, vignette = vfields, demo = dfields)
    matchtype <- switch(x$type, fuzzy = "fuzzy", "regular expression")
    typenames <- c(vignette = "Vignettes", help = "Help files", 
        demo = "Demos")
    fields_for_match_details <- list(help = c("alias", "concept", 
        "keyword"), vignette = c("concept"), demo = character())
    field_names_for_details <- c(alias = "Aliases", concept = "Concepts", 
        keyword = "Keywords")
    db <- x$matches
    if (NROW(db) == 0) {
        typenames <- paste(tolower(typenames[types]), collapse = " or ")
        writeLines(strwrap(paste("No", typenames, "found with", 
            fields_used$help, "matching", sQuote(x$pattern), 
            "using", matchtype, "matching.")))
        return(invisible(x))
    }
    outFile <- tempfile()
    outConn <- file(outFile, open = "w")
    typeinstruct <- c(vignette = paste("Type 'vignette(PKG::FOO)' to", 
        "inspect entries 'PKG::FOO'."), help = paste("Type '?PKG::FOO' to", 
        "inspect entries 'PKG::FOO',", "or 'TYPE?PKG::FOO' for entries like", 
        "'PKG::FOO-TYPE'."), demo = paste("Type 'demo(PKG::FOO)' to", 
        "run demonstration 'PKG::FOO'."))
    for (type in types) {
        if (NROW(dbtemp <- db[db[, "Type"] == type, , drop = FALSE]) > 
            0) {
            writeLines(c(strwrap(paste(typenames[type], "with", 
                fields_used[[type]], "matching", sQuote(x$pattern), 
                "using", matchtype, "matching:")), "\n"), outConn)
            top <- dbtemp[, "Topic"]
            ind <- (top != make.names(top))
            if (type == "help") 
                ind <- ind & !grepl("-(class|method|package)$", 
                  top)
            top[ind] <- paste0("`", top[ind], "`")
            fields <- fields_for_match_details[[type]]
            chunks <- split.data.frame(dbtemp, paste0(dbtemp[, 
                "Package"], "::", top))
            nms <- names(chunks)
            for (i in seq_along(nms)) {
                chunk <- chunks[[i]]
                writeLines(formatDL(nms[i], chunk[1L, "Title"]), 
                  outConn)
                matches <- Filter(length, split(chunk[, "Entry"], 
                  chunk[, "Field"])[fields])
                if (length(matches)) {
                  tags <- field_names_for_details[names(matches)]
                  vals <- vapply(matches, paste, "", collapse = ", ")
                  writeLines(strwrap(paste0(tags, ": ", vals), 
                    indent = 2L, exdent = 4L), outConn)
                }
            }
            writeLines(c("\n", strwrap(typeinstruct[type]), "\n\n"), 
                outConn)
        }
    }
    close(outConn)
    file.show(outFile, delete.file = TRUE)
    invisible(x)
}

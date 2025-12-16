#? stdlib
`.build_hsearch_index` <- function (contents, packageName, defaultEncoding = NULL) 
{
    dbAliases <- dbConcepts <- dbKeywords <- matrix(character(), 
        ncol = 3L)
    if ((nr <- NROW(contents)) > 0L) {
        IDs <- seq_len(nr)
        if (!is.data.frame(contents)) {
            colnames(contents) <- c("Name", "Aliases", "Title", 
                "Keywords")
            base <- contents[, c("Name", "Title"), drop = FALSE]
            aliases <- strsplit(contents[, "Aliases"], " +")
            encoding <- NULL
        }
        else {
            base <- as.matrix(contents[, c("Name", "Title")])
            aliases <- contents[, "Aliases"]
            encoding <- contents$Encoding
        }
        if (is.null(encoding)) 
            encoding <- character(length = nr)
        if (!is.null(defaultEncoding)) 
            encoding[!nzchar(encoding)] <- defaultEncoding
        keywords <- contents[, "Keywords"]
        dbBase <- cbind(packageName, "", IDs, base, topic = unlist(Map(.Rd_topic_for_display, 
            contents[, "Name"], aliases)), encoding)
        if (length(tmp <- unlist(aliases))) 
            dbAliases <- cbind(tmp, rep.int(IDs, lengths(aliases)), 
                packageName)
        if (length(tmp <- unlist(keywords))) 
            dbKeywords <- cbind(tmp, rep.int(IDs, lengths(keywords)), 
                packageName)
        if ("Concepts" %in% colnames(contents)) {
            concepts <- contents[, "Concepts"]
            if (length(tmp <- unlist(concepts))) 
                dbConcepts <- cbind(tmp, rep.int(IDs, lengths(concepts)), 
                  packageName)
        }
    }
    else dbBase <- matrix(character(), ncol = 7L)
    colnames(dbBase) <- hsearch_index_colnames$Base
    colnames(dbAliases) <- hsearch_index_colnames$Aliases
    colnames(dbKeywords) <- hsearch_index_colnames$Keywords
    colnames(dbConcepts) <- hsearch_index_colnames$Concepts
    list(dbBase, dbAliases, dbKeywords, dbConcepts)
}

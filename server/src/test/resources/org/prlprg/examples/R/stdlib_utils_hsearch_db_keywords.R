#? stdlib
`hsearch_db_keywords` <- function (db = hsearch_db()) 
{
    pos <- match(db$Keywords[, "ID"], db$Base[, "ID"])
    entries <- split(as.data.frame(db$Base[pos, ], stringsAsFactors = FALSE), 
        db$Keywords[, "Keyword"])
    enums <- vapply(entries, NROW, 0L)
    pnums <- vapply(entries, function(e) length(unique(e$Package)), 
        0L)
    standard <- .get_standard_Rd_keywords_with_descriptions()
    concepts <- standard$Descriptions[match(names(entries), standard$Keywords)]
    pos <- order(enums, pnums, decreasing = TRUE)
    list2DF(list(Keyword = names(entries)[pos], Concept = concepts[pos], 
        Frequency = enums[pos], Packages = pnums[pos]))
}

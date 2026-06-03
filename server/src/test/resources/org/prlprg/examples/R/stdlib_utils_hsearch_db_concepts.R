#? stdlib
`hsearch_db_concepts` <- function (db = hsearch_db()) 
{
    pos <- match(db$Concepts[, "ID"], db$Base[, "ID"])
    entries <- split(as.data.frame(db$Base[pos, ], stringsAsFactors = FALSE), 
        db$Concepts[, "Concept"])
    enums <- vapply(entries, NROW, 0L)
    pnums <- vapply(entries, function(e) length(unique(e$Package)), 
        0L)
    pos <- order(enums, pnums, decreasing = TRUE)
    list2DF(list(Concept = names(entries)[pos], Frequency = enums[pos], 
        Packages = pnums[pos]))
}

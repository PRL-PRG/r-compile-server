#? stdlib
`CRAN_Rd_xref_db_with_expansions` <- function () 
{
    db <- CRAN_rdxrefs_db()
    db <- cbind(do.call(rbind, db), rep.int(names(db), vapply(db, 
        NROW, 0L)))
    colnames(db) <- c(colnames(db)[1L:2L], "S_File", "S_Package")
    unique(cbind(db, .expand_anchored_Rd_xrefs(db)))
}

#? stdlib
`.ORCID_iD_db_from_package_sources` <- function (dir, add = FALSE) 
{
    ids1 <- .ORCID_iD_from_person(.persons_from_metadata(dir))
    ids1 <- ids1[!is.na(ids1)]
    ids2 <- .ORCID_iD_from_person(.persons_from_citation(dir))
    ids2 <- ids2[!is.na(ids2)]
    db <- data.frame(ID = c(character(), ids1, ids2), Parent = c(rep_len("DESCRIPTION", 
        length(ids1)), rep_len("inst/CITATION", length(ids2))))
    if (add) 
        db$Parent <- file.path(basename(dir), db$Parent)
    db
}

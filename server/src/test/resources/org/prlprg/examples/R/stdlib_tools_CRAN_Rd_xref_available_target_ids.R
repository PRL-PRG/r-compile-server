#? stdlib
`CRAN_Rd_xref_available_target_ids` <- function () 
{
    targets <- lapply(CRAN_aliases_db(), .Rd_available_xref_targets)
    .Rd_object_id(rep.int(names(targets), lengths(targets)), 
        unlist(targets, use.names = FALSE))
}

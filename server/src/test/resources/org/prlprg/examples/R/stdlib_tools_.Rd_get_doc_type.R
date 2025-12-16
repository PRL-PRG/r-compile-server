#? stdlib
`.Rd_get_doc_type` <- function (x) 
{
    c(attr(x, "meta")$docType, .Rd_get_metadata(x, "docType"), 
        "")[1L]
}

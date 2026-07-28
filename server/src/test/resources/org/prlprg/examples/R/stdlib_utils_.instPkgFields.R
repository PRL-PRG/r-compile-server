#? stdlib
`.instPkgFields` <- function (fields) 
{
    requiredFields <- c(tools:::.get_standard_repository_db_fields(), 
        "Built")
    if (is.null(fields)) 
        fields <- requiredFields
    else {
        stopifnot(is.character(fields))
        fields <- unique(c(requiredFields, fields))
    }
    fields[!fields %in% c("Package", "LibPath")]
}

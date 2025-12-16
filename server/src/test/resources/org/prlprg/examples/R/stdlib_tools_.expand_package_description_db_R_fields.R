#? stdlib
`.expand_package_description_db_R_fields` <- function (x) 
{
    enc <- x["Encoding"]
    y <- character()
    if (!is.na(aar <- x["Authors@R"])) {
        aar <- utils:::.read_authors_at_R_field(aar)
        lat <- identical(enc, "latin1")
        if (is.na(x["Author"])) {
            tmp <- utils:::.format_authors_at_R_field_for_author(aar)
            if (lat) 
                tmp <- .enc2latin1(tmp)
            y["Author"] <- tmp
        }
        if (is.na(x["Maintainer"])) {
            tmp <- utils:::.format_authors_at_R_field_for_maintainer(aar)
            if (lat) 
                tmp <- .enc2latin1(tmp)
            y["Maintainer"] <- tmp
        }
    }
    y
}

#? stdlib
`.expand_ORCID_identifier` <- function (x, style = "text") 
{
    if (any(ind <- ((names(x) == "ORCID") & grepl(tools:::.ORCID_iD_variants_regexp, 
        x)))) {
        oid <- tools:::.ORCID_iD_canonicalize(x[ind])
        x[ind] <- if (style == "md") 
            sprintf("[ORCID %s](https://orcid.org/%s)", oid, 
                oid)
        else sprintf("<https://orcid.org/%s>", oid)
    }
    x
}

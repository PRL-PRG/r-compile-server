#? stdlib
`Rd_info` <- function (file, encoding = "unknown") 
{
    if (inherits(file, "Rd")) {
        Rd <- file
        description <- attr(attr(Rd, "srcref"), "srcfile")$filename
    }
    else stop("Rd object required")
    aliases <- .Rd_get_metadata(Rd, "alias")
    concepts <- .Rd_get_metadata(Rd, "concept")
    keywords <- .Rd_get_metadata(Rd, "keyword") %w/o% .Rd_keywords_auto
    Rd_type <- .Rd_get_doc_type(Rd)
    encoding <- c(.Rd_get_metadata(Rd, "encoding"), "")[1L]
    Rd_name <- .Rd_get_name(Rd)
    if (!length(Rd_name)) {
        msg <- c(gettextf("missing/empty %s field in '%s'", "\\name", 
            description), gettextf("Rd files must have a non-empty %s.", 
            "\\name"), gettext("See chapter 'Writing R documentation' in manual 'Writing R Extensions'."))
        stop(paste(msg, collapse = "\n"), domain = NA)
    }
    Rd_title <- .Rd_get_title(Rd)
    if (!nzchar(Rd_title)) {
        msg <- c(gettextf("missing/empty \\title field in '%s'", 
            description), gettext("Rd files must have a non-empty \\title."), 
            gettext("See chapter 'Writing R documentation' in manual 'Writing R Extensions'."))
        stop(paste(msg, collapse = "\n"), domain = NA)
    }
    list(name = Rd_name, type = Rd_type, title = Rd_title, aliases = aliases, 
        concepts = concepts, keywords = keywords, encoding = encoding)
}

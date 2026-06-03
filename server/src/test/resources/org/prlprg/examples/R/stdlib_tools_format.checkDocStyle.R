#? stdlib
`format.checkDocStyle` <- function (x, ...) 
{
    .fmt <- function(nm) {
        methods_with_full_name <- x[[nm]][["withFullName"]]
        if (length(methods_with_full_name)) {
            c(gettextf("S3 methods shown with full name in Rd file '%s':", 
                nm), .pretty_format(methods_with_full_name), 
                "")
        }
        else {
            character()
        }
    }
    as.character(unlist(lapply(names(x), .fmt)))
}

#? stdlib
`format.codocClasses` <- function (x, ...) 
{
    .fmt <- function(nm) {
        wrapPart <- function(nam) {
            capWord <- function(w) sub("\\b(\\w)", "\\U\\1", 
                w, perl = TRUE)
            if (length(O <- docObj[[nam]])) 
                strwrap(sprintf("%s: %s", gettextf(capWord(nam)), 
                  paste(O, collapse = " ")), indent = 2L, exdent = 8L)
        }
        docObj <- x[[nm]]
        c(gettextf("S4 class codoc mismatches from Rd file '%s':", 
            nm), gettextf("Slots for class '%s'", docObj[["name"]]), 
            wrapPart("code"), wrapPart("inherited"), wrapPart("docs"), 
            "")
    }
    as.character(unlist(lapply(names(x), .fmt)))
}

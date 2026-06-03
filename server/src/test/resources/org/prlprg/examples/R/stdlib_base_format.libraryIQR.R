#? stdlib
`format.libraryIQR` <- function (x, ...) 
{
    db <- x$results
    if (!nrow(db)) 
        return(character())
    libs <- db[, "LibPath"]
    libs <- factor(libs, levels = unique(libs))
    out <- lapply(split(1:nrow(db), libs), function(ind) db[ind, 
        c("Package", "Title"), drop = FALSE])
    c(unlist(Map(function(lib, sep) {
        c(gettextf("%sPackages in library %s:\n", sep, sQuote(lib)), 
            formatDL(out[[lib]][, "Package"], out[[lib]][, "Title"]))
    }, names(out), c("", rep.int("\n", length(out) - 1L)))), 
        x$footer)
}

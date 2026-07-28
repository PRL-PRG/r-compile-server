#? stdlib
`print.check_package_compact_datasets` <- function (x, ...) 
{
    reformat <- function(x) {
        xx <- paste0(x, "b")
        ind1 <- (x >= 1024)
        xx[ind1] <- sprintf("%.0fKb", x[ind1]/1024)
        ind2 <- x >= 1024^2
        xx[ind2] <- sprintf("%.1fMb", x[ind2]/(1024^2))
        ind3 <- x >= 1024^3
        xx[ind3] <- sprintf("%.1fGb", x[ind3]/1024^3)
        xx
    }
    if (nr <- nrow(x$rdas)) {
        msg <- ngettext(nr, "Warning: large data file saved inefficiently:", 
            "Warning: large data files saved inefficiently:", 
            domain = NA)
        writeLines(msg)
        rdas <- x$rdas
        rdas$size <- reformat(rdas$size)
        print(rdas)
    }
    if (!is.null(x$msg)) 
        writeLines(x$msg)
    if (!is.null(s <- x$sizes) && s[1L] - s[2L] > 1e+05 && s[2L]/s[1L] < 
        0.9) {
        writeLines(c("", "Note: significantly better compression could be obtained", 
            "      by using R CMD build --resave-data"))
        if (nrow(x$improve)) {
            improve <- x$improve
            improve$old_size <- reformat(improve$old_size)
            improve$new_size <- reformat(improve$new_size)
            print(improve)
        }
    }
    invisible(x)
}

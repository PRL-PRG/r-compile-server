#? stdlib
`print.summary.aov` <- function (x, digits = max(3L, getOption("digits") - 3L), symbolic.cor = FALSE, 
    signif.stars = getOption("show.signif.stars"), ...) 
{
    if (length(x) == 1L) 
        print(x[[1L]], digits = digits, symbolic.cor = symbolic.cor, 
            signif.stars = signif.stars)
    else NextMethod()
    if (nzchar(mess <- naprint(attr(x, "na.action")))) 
        cat(mess, "\n", sep = "")
    invisible(x)
}

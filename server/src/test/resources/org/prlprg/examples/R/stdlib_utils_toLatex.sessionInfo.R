#? stdlib
`toLatex.sessionInfo` <- function (object, locale = TRUE, tzone = locale, RNG = !identical(object$RNGkind, 
    .RNGdefaults), ...) 
{
    z <- c("\\begin{itemize}\\raggedright", paste0("  \\item ", 
        object$R.version$version.string, ", \\verb|", object$R.version$platform, 
        "|"), if (locale) paste0("  \\item Locale: \\verb|", 
        gsub(";", "|, \\verb|", object$locale, fixed = TRUE), 
        "|"), if (locale && !is.null(object$system.codepage) && 
        object$system.codepage != object$codepage) paste0("  \\item System code page: \\verb|", 
        object$system.codepage, "|"), if (tzone) paste0("  \\item Time zone: \\verb|", 
        object$tzone, "|"), if (tzone) paste0("  \\item TZcode source: \\verb|", 
        object$tzcode_type, "|"), paste0("  \\item Running under: \\verb|", 
        gsub(";", "|, \\verb|", object$running, fixed = TRUE), 
        "|"), if (RNG) paste0("  \\item Random number generation:", 
        "  \\item RNG:    \\verb|", object$RNGkind[1], "|", "  \\item Normal: \\verb|", 
        object$RNGkind[2], "|", "  \\item Sample: \\verb|", object$RNGkind[3], 
        "|"), paste0("  \\item Matrix products: ", object$matprod))
    blas <- object$BLAS
    if (is.null(blas)) 
        blas <- ""
    lapack <- object$LAPACK
    if (is.null(lapack)) 
        lapack <- ""
    if (blas == lapack && nzchar(blas)) 
        z <- c(z, paste0("  \\item BLAS/LAPACK: \\verb|", blas, 
            "|"))
    else {
        if (nzchar(blas)) 
            z <- c(z, paste0("  \\item BLAS:   \\verb|", blas, 
                "|"))
        if (nzchar(lapack)) 
            z <- c(z, paste0("  \\item LAPACK: \\verb|", lapack, 
                "|"))
    }
    if (nzchar(lapack) && nzchar(LAver <- object$LA_version) && 
        !grepl(LAver, lapack, fixed = TRUE)) 
        z <- c(z, paste0("; \\quad\\ LAPACK version", LAver))
    z <- c(z, strwrap(paste("\\item Base packages: ", paste(sort(object$basePkgs), 
        collapse = ", ")), indent = 2, exdent = 4))
    if (length(o.ver <- toLatexPDlist(object$otherPkg))) 
        z <- c(z, strwrap(paste("  \\item Other packages: ", 
            o.ver), indent = 2, exdent = 4))
    if (length(n.ver <- toLatexPDlist(object$loadedOnly))) 
        z <- c(z, strwrap(paste("  \\item Loaded via a namespace (and not attached): ", 
            n.ver), indent = 2, exdent = 4))
    z <- c(z, "\\end{itemize}")
    class(z) <- "Latex"
    z
}

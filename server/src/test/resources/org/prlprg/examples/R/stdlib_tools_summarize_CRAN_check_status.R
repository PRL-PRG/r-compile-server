#? stdlib
`summarize_CRAN_check_status` <- function (packages, results = NULL, details = NULL, issues = NULL) 
{
    if (is.null(results)) 
        results <- CRAN_check_results()
    results <- results[!is.na(match(results$Package, packages)) & 
        !is.na(results$Status), ]
    if (!NROW(results)) {
        s <- character(length(packages))
        names(s) <- packages
        return(s)
    }
    if (any(results$Status != "OK")) {
        if (is.null(details)) 
            details <- CRAN_check_details()
        details <- details[!is.na(match(details$Package, packages)), 
            ]
        details <- details[details$Check != "*", ]
        details$Output <- sub("[[:space:]]+$", "", details$Output)
    }
    else {
        details <- as.data.frame(matrix(character(), ncol = 7L), 
            stringsAsFactors = FALSE)
        names(details) <- c("Package", "Version", "Flavor", "Check", 
            "Status", "Output", "Flags")
    }
    if (is.null(issues)) 
        issues <- CRAN_check_issues()
    summarize_results <- function(p, r) {
        if (!NROW(r)) 
            return(character())
        tab <- table(r$Status)[c("OK", "NOTE", "WARNING", "ERROR", 
            "FAILURE")]
        tab <- tab[!is.na(tab) & (tab > 0)]
        paste(c(sprintf("Current CRAN status: %s", paste(sprintf("%s: %s", 
            names(tab), tab), collapse = ", ")), sprintf("See: <https://CRAN.R-project.org/web/checks/check_results_%s.html>", 
            p)), collapse = "\n")
    }
    summarize_details <- function(p, d) {
        if (!NROW(d)) 
            return(character())
        pof <- which(names(d) == "Flavor")
        poo <- which(names(d) == "Output")
        ind <- d$Check == "whether package can be installed"
        if (any(ind)) {
            d[ind, poo] <- sub("\nSee[^\n]*for details[.]$", 
                "", d[ind, poo])
        }
        txt <- apply(d[-pof], 1L, paste, collapse = "\r")
        ind <- d$Check == "installed package size"
        if (any(ind)) {
            txt[ind] <- apply(d[ind, -c(pof, poo)], 1L, paste, 
                collapse = "\r")
        }
        txt <- .canonicalize_quotes(txt)
        out <- lapply(split(seq_len(NROW(d)), match(txt, unique(txt))), 
            function(e) {
                tmp <- d[e[1L], ]
                flags <- tmp$Flags
                flavors <- d$Flavor[e]
                c(sprintf("Version: %s", tmp$Version), if (nzchar(flags)) sprintf("Flags: %s", 
                  flags), sprintf("Check: %s, Result: %s", tmp$Check, 
                  tmp$Status), sprintf("  %s", gsub("\n", "\n  ", 
                  tmp$Output, perl = TRUE)), sprintf("See: %s", 
                  paste(sprintf("<https://www.r-project.org/nosvn/R.check/%s/%s-00check.html>", 
                    flavors, p), collapse = ",\n     ")))
            })
        paste(unlist(lapply(out, paste, collapse = "\n")), collapse = "\n\n")
    }
    summarize_issues <- function(i) {
        if (!length(i)) 
            return(character())
        paste(c("Additional issues:", sprintf("  %s <%s>", i$kind, 
            i$href)), collapse = "\n")
    }
    summarize <- function(p, r, d, i) {
        paste(c(summarize_results(p, r), summarize_issues(i), 
            summarize_details(p, d)), collapse = "\n\n")
    }
    issues <- split(issues[-1L], issues[[1L]])
    s <- if (length(packages) == 1L) {
        summarize(packages, results, details, issues[[packages]])
    }
    else {
        results <- split(results, factor(results$Package, packages))
        details <- split(details, factor(details$Package, packages))
        unlist(lapply(packages, function(p) {
            summarize(p, results[[p]], details[[p]], issues[[p]])
        }))
    }
    names(s) <- packages
    class(s) <- "summarize_CRAN_check_status"
    s
}

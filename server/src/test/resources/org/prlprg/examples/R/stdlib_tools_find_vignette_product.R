#? stdlib
`find_vignette_product` <- function (name, by = c("weave", "tangle", "texi2pdf"), final = FALSE, 
    main = TRUE, dir = ".", engine, ...) 
{
    stopifnot(length(name) == 1L, dir.exists(dir))
    by <- match.arg(by)
    exts <- switch(by, weave = if (final) c("pdf", "html") else c("pdf", 
        "html", "tex"), tangle = c("r", "s"), texi2pdf = "pdf")
    exts <- c(exts, toupper(exts))
    pattern1 <- sprintf("^%s[.](%s)$", name, paste(exts, collapse = "|"))
    output0 <- list.files(path = dir, no.. = TRUE)
    output0 <- output0[file_test("-f", file.path(dir, output0))]
    output <- grep(pattern1, output0, value = TRUE)
    if (!main) {
        pattern2 <- sprintf("^%s.*[.](%s)$", name, paste(exts, 
            collapse = "|"))
        output2 <- grep(pattern2, output0, value = TRUE)
        output <- c(output, setdiff(output2, output))
    }
    fmt_file_sizes <- function(files) paste(sprintf("%s (%g bytes)", 
        sQuote(files), file.size(file.path(dir, files))), collapse = ", ")
    if (by == "weave") {
        if (length(output) == 0L) 
            stop(gettextf("Failed to locate %s output file %s or %s for vignette with name %s and engine %s. The following files exist in working directory %s: %s", 
                sQuote(by), sQuote(paste0(name, ".pdf")), sQuote(paste0(name, 
                  ".html")), sQuote(name), sQuote(sprintf("%s::%s", 
                  engine$package, engine$name)), sQuote(normalizePath(dir)), 
                fmt_file_sizes(output0)), domain = NA)
        if (length(output) > 2L || (final && length(output) > 
            1L)) 
            stop(gettextf("Located more than one %s output file (by engine %s) for vignette with name %s: %s", 
                sQuote(by), sQuote(sprintf("%s::%s", engine$package, 
                  engine$name)), sQuote(name), fmt_file_sizes(output)), 
                domain = NA)
        if (length(output) == 2L) {
            idxs <- match(tolower(file_ext(output)), exts)
            output <- output[order(idxs)]
            if (file_test("-nt", output[2L], output[1L])) 
                output <- output[2L]
            else output <- output[1L]
        }
    }
    else if (by == "tangle") {
        if (main) 
            stopifnot(length(output) <= 1L)
    }
    else if (by == "texi2pdf") {
        if (length(output) == 0L) 
            stop(gettextf("Failed to locate %s output file %s for vignette with name %s and engine %s. The following files exist in working directory %s: %s", 
                sQuote(by), sQuote(paste0(name, ".pdf")), sQuote(name), 
                sQuote(sprintf("%s::%s", engine$package, engine$name)), 
                sQuote(normalizePath(dir)), fmt_file_sizes(output0)), 
                domain = NA)
        if (length(output) > 1L) 
            stop(gettextf("Located more than one %s output file (by engine %s) for vignette with name %s: %s", 
                sQuote(by), sQuote(sprintf("%s::%s", engine$package, 
                  engine$name)), sQuote(name), fmt_file_sizes(output)), 
                domain = NA)
    }
    if (length(output) > 0L) {
        if (dir == ".") 
            basename(output)
        else file.path(dir, output)
    }
}

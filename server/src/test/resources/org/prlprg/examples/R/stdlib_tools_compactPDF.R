#? stdlib
`compactPDF` <- function (paths, qpdf = Sys.which(Sys.getenv("R_QPDF", "qpdf")), 
    gs_cmd = Sys.getenv("R_GSCMD", ""), gs_quality = Sys.getenv("GS_QUALITY", 
        "none"), gs_extras = character(), verbose = FALSE) 
{
    use_qpdf <- nzchar(qpdf)
    qpdf_flags <- "--object-streams=generate"
    if (use_qpdf) {
        ver <- system2(qpdf, "--version", TRUE)[1L]
        ver <- as.numeric_version(sub("qpdf version ", "", ver, 
            fixed = TRUE))
        if (!is.na(ver) && ver < "6.0.0") 
            qpdf_flags <- c("--stream-data=compress", qpdf_flags)
    }
    gs_quality <- match.arg(gs_quality, c("none", "printer", 
        "ebook", "screen"))
    use_gs <- if (gs_quality != "none") 
        nzchar(gs_cmd <- find_gs_cmd(gs_cmd))
    else FALSE
    if (verbose) 
        cat(sprintf("qs_quality=\"%s\" : use_gs=%s, use_qpdf=%s\n", 
            gs_quality, use_gs, use_qpdf))
    if (!use_gs && !use_qpdf) 
        return()
    if (length(paths) == 1L && dir.exists(paths)) 
        paths <- Sys.glob(file.path(paths, "*.pdf"))
    if (verbose) 
        cat(sprintf("#{pdf}s = length(paths) = %d\n", length(paths)))
    dummy <- rep.int(NA_real_, length(paths))
    ans <- data.frame(old = dummy, new = dummy, row.names = paths)
    tf <- tempfile("pdf")
    tf2 <- tempfile("pdf")
    verb2 <- verbose >= 2
    for (p in paths) {
        res <- 0
        if (verbose) 
            cat(sprintf("- %s:%s", p, if (verb2) 
                "\n"
            else " "))
        if (use_gs) {
            res <- system2(gs_cmd, c("-q -dNOPAUSE -dBATCH -sDEVICE=pdfwrite", 
                sprintf("-dPDFSETTINGS=/%s", gs_quality), "-dCompatibilityLevel=1.5", 
                "-dAutoRotatePages=/None", "-dPrinted=false", 
                sprintf("-sOutputFile=%s", shQuote(tf)), gs_extras, 
                shQuote(p)), verb2, verb2)
            if (verbose) {
                res0 <- (verb2 && !length(res))
                cat(sprintf("   gs: res=%s; ", if (res0) 
                  "<>"
                else res))
                if (verb2) 
                  res <- if (res0) 
                    0
                  else attr(res, "status")
            }
            if (!res && use_qpdf) {
                unlink(tf2)
                file.rename(tf, tf2)
                res <- system2(qpdf, c(qpdf_flags, shQuote(tf2), 
                  shQuote(tf)), verb2, verb2)
                if (verbose) {
                  res0 <- (verb2 && !length(res))
                  cat(sprintf(" + qpdf: res=%s; ", if (res0) 
                    "<>"
                  else res))
                  if (verb2) 
                    res <- if (res0) 
                      0
                    else attr(res, "status")
                }
                unlink(tf2)
            }
        }
        else if (use_qpdf) {
            res <- system2(qpdf, c(qpdf_flags, shQuote(p), shQuote(tf)), 
                verb2, verb2)
            if (verbose) {
                res0 <- (verb2 && !length(res))
                cat(sprintf(" only qpdf: res=%s; ", if (res0) 
                  "<>"
                else res))
                if (verb2) 
                  res <- if (res0) 
                    0
                  else attr(res, "status")
            }
        }
        if (!res && file.exists(tf)) {
            old <- file.size(p)
            new <- file.size(tf)
            if (verbose) 
                cat(sprintf("\n    ==> (new=%g)/(old=%g) = %g", 
                  new, old, new/old))
            if (new/old < 0.9 && new < old - 10000) {
                if (verbose) 
                  cat(" =====> using it !!\n")
                file.copy(tf, p, overwrite = TRUE)
                ans[p, ] <- c(old, new)
            }
            else if (verbose) 
                cat(" .. not worth using\n")
        }
        else if (verbose) 
            cat("\n")
        unlink(tf)
    }
    structure(stats::na.omit(ans), class = c("compactPDF", "data.frame"))
}
